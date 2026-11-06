// =============================================================================
// AXI4-Lite 协议检查器（Protocol Checker）
//
// 功能概述：
//   本模块是一个纯被动的 SystemVerilog Assertion（SVA）检查器，通过 bind 或
//   例化方式挂接到一个 AXI4-Lite 从机（Slave）接口上，在仿真过程中实时检查
//   主从双方是否遵守 AXI4-Lite 协议规范。它只采样信号、不驱动任何信号，
//   因此对被测设计（DUT）完全无侵入。
//
// 断言溯源：
//   每条断言都可以追溯到 ARM IHI 0022（AXI 协议规范，A3 版本）中的具体条款：
//     A1..A5  各通道 VALID / 有效载荷（payload）在被反压（stall）期间必须
//             保持稳定（对应规范 A3.2.1、A3.2.2 节的握手规则）
//     A6/A7   不允许出现"无源之响应"：B/R 通道的响应必须对应一笔已经完成/
//             已经被接受的事务（对应规范 A3.3/A3.4 节）
//     A8/A9   设计特定规则：本从机实现永远只返回 OKAY 响应
//     L1/L2   有界活性（liveness）：一笔已被接受的事务必须在有限拍数内
//             得到响应，防止从机"死锁"挂起
//
// 防"空通过"机制：
//   SVA 断言如果其前件（antecedent）在整场仿真中从未成立，会"空通过"
//   （vacuous pass），看似通过实则什么都没检查到。因此本检查器为每条
//   属性统计前件命中次数，并记录每次失败的首次发生时间，最后在仿真
//   结束时打印汇总报告，便于判断"通过"是否真实可信。
// =============================================================================
`timescale 1ns/1ps          // 仿真时间单位 1ns，时间精度 1ps
`default_nettype none       // 禁止隐式网线声明，拼写错误的信号名会在编译期报错

module axi4lite_checker (
    // ------------------------------------------------------------------
    // 全局信号
    // ------------------------------------------------------------------
    input wire        aclk,           // AXI 全局时钟，所有断言在上升沿采样
    input wire        aresetn,        // AXI 全局复位，低有效；复位期间所有断言被禁用

    // ------------------------------------------------------------------
    // 写地址通道（AW，Write Address Channel）
    // ------------------------------------------------------------------
    input wire [7:0]  s_axi_awaddr,   // 写地址（本设计地址宽度为 8 位）
    input wire        s_axi_awvalid,  // 主机发出：写地址有效
    input wire        s_axi_awready,  // 从机发出：写地址通道就绪（可接受）

    // ------------------------------------------------------------------
    // 写数据通道（W，Write Data Channel）
    // ------------------------------------------------------------------
    input wire [31:0] s_axi_wdata,    // 写数据（AXI4-Lite 数据宽度 32 位）
    input wire [3:0]  s_axi_wstrb,    // 写字节选通：每一位对应数据总线上的一个字节是否有效
    input wire        s_axi_wvalid,   // 主机发出：写数据有效
    input wire        s_axi_wready,   // 从机发出：写数据通道就绪

    // ------------------------------------------------------------------
    // 写响应通道（B，Write Response Channel）
    // ------------------------------------------------------------------
    input wire [1:0]  s_axi_bresp,    // 写响应码：00=OKAY, 01=EXOKAY, 10=SLVERR, 11=DECERR
    input wire        s_axi_bvalid,   // 从机发出：写响应有效
    input wire        s_axi_bready,   // 主机发出：可接受写响应

    // ------------------------------------------------------------------
    // 读地址通道（AR，Read Address Channel）
    // ------------------------------------------------------------------
    input wire [7:0]  s_axi_araddr,   // 读地址
    input wire        s_axi_arvalid,  // 主机发出：读地址有效
    input wire        s_axi_arready,  // 从机发出：读地址通道就绪

    // ------------------------------------------------------------------
    // 读数据通道（R，Read Data Channel）
    // ------------------------------------------------------------------
    input wire [31:0] s_axi_rdata,    // 读数据
    input wire [1:0]  s_axi_rresp,    // 读响应码（编码同 BRESP）
    input wire        s_axi_rvalid,   // 从机发出：读数据有效
    input wire        s_axi_rready    // 主机发出：可接受读数据
);

    // 活性断言（L1/L2）的超时上限：一笔事务从"被接受"到"收到响应"
    // 最多允许等待的时钟周期数。超过该值即判定从机活性违约（疑似死锁）。
    localparam int LIVE_BOUND = 100;   // max cycles a transaction may wait for its response

    // ------------------------------------------------------------------
    // 五个通道的握手完成标志
    // AXI 规定：VALID 与 READY 在同一拍同时为高，即视为一次传输完成
    // （握手成功），数据/地址在该拍被接收方取走。
    // ------------------------------------------------------------------
    wire aw_hs = s_axi_awvalid && s_axi_awready;  // 写地址握手完成
    wire w_hs  = s_axi_wvalid  && s_axi_wready;   // 写数据握手完成
    wire b_hs  = s_axi_bvalid  && s_axi_bready;   // 写响应握手完成
    wire ar_hs = s_axi_arvalid && s_axi_arready;  // 读地址握手完成
    wire r_hs  = s_axi_rvalid  && s_axi_rready;   // 读数据握手完成

    // ------------------------------------------------------------------
    // 失败记录（failure bookkeeping）
    //   每条断言对应一个编号 idx（0..16），失败时通过 note_fail(idx)
    //   记录失败次数和首次失败时间，供仿真结束时的汇总报告使用。
    // ------------------------------------------------------------------

    // 根据断言编号返回可读的断言描述字符串，用于日志和报告打印
    function automatic string tag_of(input int i);
        case (i)
            0:  return "A1a AWVALID held until AWREADY";    // AWVALID 置起后必须保持到 AWREADY
            1:  return "A1b AWADDR stable while stalled";   // AW 通道被反压期间 AWADDR 不得变化
            2:  return "A2a WVALID held until WREADY";      // WVALID 置起后必须保持到 WREADY
            3:  return "A2b WDATA/WSTRB stable while stalled"; // W 通道被反压期间数据/选通不得变化
            4:  return "A3a ARVALID held until ARREADY";    // ARVALID 置起后必须保持到 ARREADY
            5:  return "A3b ARADDR stable while stalled";   // AR 通道被反压期间 ARADDR 不得变化
            6:  return "A4a RVALID held until RREADY";      // RVALID 置起后必须保持到 RREADY
            7:  return "A4b RDATA stable while stalled";    // R 通道被反压期间 RDATA 不得变化
            8:  return "A4c RRESP stable while stalled";    // R 通道被反压期间 RRESP 不得变化
            9:  return "A5a BVALID held until BREADY";      // BVALID 置起后必须保持到 BREADY
            10: return "A5b BRESP stable while stalled";    // B 通道被反压期间 BRESP 不得变化
            11: return "A6  BVALID only after a completed write"; // 无已完成写事务时不得拉高 BVALID
            12: return "A7  RVALID only after an accepted read";  // 无已接受读事务时不得拉高 RVALID
            13: return "A8  BRESP is OKAY (design rule)";   // 本设计 BRESP 只允许 OKAY
            14: return "A9  RRESP is OKAY (design rule)";   // 本设计 RRESP 只允许 OKAY
            15: return "L1  write always answered within bound";  // 写事务必须在限拍内得到响应
            16: return "L2  read always answered within bound";   // 读事务必须在限拍内得到响应
            default: return "?";
        endcase
    endfunction

    // 失败统计数组：容量开到 20（实际使用 0..16），留有余量便于以后新增断言
    longint t_first [0:19];   // 每条断言首次失败发生的仿真时间，-1 表示从未失败
    int     n_fail  [0:19];   // 每条断言累计失败次数

    // 仿真开始时初始化统计量
    initial begin
        for (int i = 0; i < 20; i++) begin
            t_first[i] = -1;
            n_fail[i]  = 0;
        end
    end

    // 记录一次失败：累加失败次数；若是该断言的首次失败，
    // 记录时间戳并立即打印一条带断言描述的日志，方便波形定位
    task automatic note_fail(input int idx);
        n_fail[idx] = n_fail[idx] + 1;
        if (t_first[idx] < 0) begin
            t_first[idx] = $time;
            $display("[ASSERT-FAIL] #%0d %s : first failure at t=%0t",
                     idx, tag_of(idx), $time);
        end
    endtask

    // 断言注册宏：对属性 PROP 做并发断言（concurrent assertion），
    // 失败时不终止仿真，而是调用 note_fail 记录编号 IDX，
    // 从而允许一场仿真收集多条断言的所有失败信息
    `define AXI_CHECK(IDX, PROP) \
        assert property (PROP) else note_fail(IDX);

    // ------------------------------------------------------------------
    // A1..A5：各通道 VALID 与有效载荷的稳定性（逐通道检查）
    //
    // AXI 核心握手规则（A3.2.1 / A3.2.2）：
    //   一旦 VALID 拉高而 READY 未拉高（即传输被反压/stall），则：
    //     a) 发送方不得在握手完成前撤销 VALID（不允许"收回"请求）；
    //     b) 与 VALID 伴随的所有有效载荷信号（地址/数据/响应码）必须
    //        保持不变，直到握手完成。
    //
    // 断言模板说明：
    //   @(posedge aclk)        —— 每个时钟上升沿采样一次
    //   disable iff (!aresetn) —— 复位有效期间禁用该断言（异步中止未决检查）
    //   A |=> B                —— 非重叠蕴含：本拍 A 成立，则下一拍 B 必须成立
    //   (VALID && !READY)      —— 即"被反压"状态，是本组断言的前件
    // ------------------------------------------------------------------

    // A1a：AWVALID 一旦被拉高且未被接受，下一拍必须仍为高（不得中途撤销）
    property p_awvalstable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_awvalid && !s_axi_awready) |=> s_axi_awvalid;
    endproperty
    `AXI_CHECK(0, p_awvalstable)

    // A1b：AW 通道被反压期间，下一拍 AWADDR 必须与本拍相同（$stable）
    property p_awaddr_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_awvalid && !s_axi_awready) |=> $stable(s_axi_awaddr);
    endproperty
    `AXI_CHECK(1, p_awaddr_stable)

    // A2a：WVALID 一旦被拉高且未被接受，下一拍必须仍为高
    property p_wvalid_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_wvalid && !s_axi_wready) |=> s_axi_wvalid;
    endproperty
    `AXI_CHECK(2, p_wvalid_stable)

    // A2b：W 通道被反压期间，WDATA 和 WSTRB 都必须保持稳定
    property p_wdata_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_wvalid && !s_axi_wready) |=> ($stable(s_axi_wdata) && $stable(s_axi_wstrb));
    endproperty
    `AXI_CHECK(3, p_wdata_stable)

    // A3a：ARVALID 一旦被拉高且未被接受，下一拍必须仍为高
    property p_arvalid_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_arvalid && !s_axi_arready) |=> s_axi_arvalid;
    endproperty
    `AXI_CHECK(4, p_arvalid_stable)

    // A3b：AR 通道被反压期间，ARADDR 必须保持稳定
    property p_araddr_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_arvalid && !s_axi_arready) |=> $stable(s_axi_araddr);
    endproperty
    `AXI_CHECK(5, p_araddr_stable)

    // A4a：RVALID（从机方向）一旦被拉高且未被主机接受，下一拍必须仍为高
    property p_rvalid_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_rvalid && !s_axi_rready) |=> s_axi_rvalid;
    endproperty
    `AXI_CHECK(6, p_rvalid_stable)

    // A4b：R 通道被反压期间，RDATA 必须保持稳定
    property p_rdata_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_rvalid && !s_axi_rready) |=> $stable(s_axi_rdata);
    endproperty
    `AXI_CHECK(7, p_rdata_stable)

    // A4c：R 通道被反压期间，RRESP 必须保持稳定
    property p_rresp_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_rvalid && !s_axi_rready) |=> $stable(s_axi_rresp);
    endproperty
    `AXI_CHECK(8, p_rresp_stable)

    // A5a：BVALID（从机方向）一旦被拉高且未被主机接受，下一拍必须仍为高
    property p_bvalid_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_bvalid && !s_axi_bready) |=> s_axi_bvalid;
    endproperty
    `AXI_CHECK(9, p_bvalid_stable)

    // A5b：B 通道被反压期间，BRESP 必须保持稳定
    property p_bresp_stable;
        @(posedge aclk) disable iff (!aresetn)
        (s_axi_bvalid && !s_axi_bready) |=> $stable(s_axi_bresp);
    endproperty
    `AXI_CHECK(10, p_bresp_stable)

    // ------------------------------------------------------------------
    // A6/A7：响应合法性（跨通道检查，需要事务计数器）
    //
    // 一条响应只有在确实存在"等待响应的事务"时才合法：
    //   - 写响应（BVALID）合法的前提：已完成（AW 和 W 都握手成功）的写事务数
    //     多于已经发出的写响应数；
    //   - 读响应（RVALID）合法的前提：已接受（AR 握手成功）的读事务数多于
    //     已经发出的读数据拍数。
    // 这两条用来捕捉从机"凭空"产生响应或响应次数多于事务数的错误。
    // ------------------------------------------------------------------

    // aw_seen / w_seen：AXI4-Lite 写事务的 AW 与 W 两个通道可以任意顺序到达，
    // 这两个标志记录当前这笔写事务的两个半边各自是否已经握手完成。
    logic        aw_seen, w_seen;

    // 各通道握手次数的累计计数器：
    //   n_aw — AW 握手次数；n_w — W 握手次数；n_b — B 握手次数
    //   n_ar — AR 握手次数；n_r — R 握手次数
    int unsigned n_aw, n_w, n_b, n_ar, n_r;

    // 时序逻辑：逐拍更新标志与计数器（检查器内部状态，非综合逻辑）
    always @(posedge aclk) begin
        if (!aresetn) begin
            // 复位期间清零所有状态
            aw_seen <= 1'b0; w_seen <= 1'b0;
            n_aw <= 0; n_w <= 0; n_b <= 0; n_ar <= 0; n_r <= 0;
        end else begin
            if (aw_hs) begin aw_seen <= 1'b1; n_aw <= n_aw + 1; end          // AW 半边到达
            if (w_hs)  begin w_seen  <= 1'b1; n_w  <= n_w + 1;  end          // W 半边到达
            // 写响应被主机接受后，这笔写事务彻底结束，清除"半边"标志，
            // 为下一笔写事务做准备（本从机不并发处理多笔写事务）
            if (b_hs)  begin aw_seen <= 1'b0; w_seen <= 1'b0; n_b <= n_b + 1; end
            if (ar_hs) n_ar <= n_ar + 1;                                     // 读地址被接受
            if (r_hs)  n_r  <= n_r + 1;                                      // 读数据被取走
        end
    end

    // 在途（outstanding）事务数：
    //   wr_outst = min(AW 握手数, W 握手数) - B 握手数
    //     AW 和 W 都完成的写事务才算"完成"，取两者较小值即完整写事务数，
    //     减去已发出的写响应数，得到"已完成的写事务中还没拿到响应"的数量；
    //   rd_outst = AR 握手数 - R 握手数
    //     即"已接受但还没返回数据"的读事务数。
    wire [31:0] wr_outst = (n_aw < n_w ? n_aw : n_w) - n_b;
    wire [31:0] rd_outst = n_ar - n_r;

    // A6：BVALID 为高时，必须存在至少一笔在途的已完成写事务
    //     （|-> 为重叠蕴含：前件与后件在同一拍判定）
    property p_b_legal;
        @(posedge aclk) disable iff (!aresetn)
        s_axi_bvalid |-> (wr_outst != 0);
    endproperty
    `AXI_CHECK(11, p_b_legal)

    // A7：RVALID 为高时，必须存在至少一笔在途的已接受读事务
    property p_r_legal;
        @(posedge aclk) disable iff (!aresetn)
        s_axi_rvalid |-> (rd_outst != 0);
    endproperty
    `AXI_CHECK(12, p_r_legal)

    // ------------------------------------------------------------------
    // A8/A9：设计特定规则 —— 本从机实现永远只返回 OKAY（2'b00）
    // 注意：这不是 AXI 协议的通用要求，而是针对本 DUT 行为的检查；
    // 若换一个会返回 SLVERR/DECERR 的从机，需要去掉这两条。
    // ------------------------------------------------------------------

    // A8：写响应有效时，BRESP 必须为 OKAY
    property p_bresp_okay;
        @(posedge aclk) disable iff (!aresetn)
        s_axi_bvalid |-> (s_axi_bresp == 2'b00);
    endproperty
    `AXI_CHECK(13, p_bresp_okay)

    // A9：读数据有效时，RRESP 必须为 OKAY
    property p_rresp_okay;
        @(posedge aclk) disable iff (!aresetn)
        s_axi_rvalid |-> (s_axi_rresp == 2'b00);
    endproperty
    `AXI_CHECK(14, p_rresp_okay)

    // ------------------------------------------------------------------
    // L1/L2：有界活性（看门狗式检查）
    //
    // 上面的 A1..A9 都是安全性（safety）属性："坏事不发生"。
    // 但协议还要求活性（liveness）："好事终将发生"——一笔已被接受的事务
    // 不能永远等不到响应（例如从机状态机卡死）。这里用软件看门狗计数器
    // 实现：从事务完成/接受那一拍开始计数，若 LIVE_BOUND 拍内仍未看到
    // 对应的响应 VALID，则记一次活性失败。
    // ------------------------------------------------------------------

    // "本拍恰好凑齐一笔完整写事务"的判定：
    // 写事务完成 = AW 半边与 W 半边都已握手。其中一半可能是本拍刚握手
    // （aw_hs / w_hs），另一半是此前已握手并记录在 aw_seen / w_seen 中。
    // 前面的 ~(aw_seen & w_seen) 保证只在"两半首次凑齐"的那一拍拉高，
    // 避免 B 响应迟迟不被接受期间重复计数。
    wire wr_complete_now = ~(aw_seen & w_seen) & (aw_seen | aw_hs) & (w_seen | w_hs);

    int unsigned wr_wait, rd_wait;   // 写/读等待看门狗计数器，0 表示空闲
    always @(posedge aclk) begin
        if (!aresetn) begin
            wr_wait <= 0;
            rd_wait <= 0;
        end else begin
            // ---- 写响应看门狗 ----
            if (s_axi_bvalid) wr_wait <= 0;             // 看到 BVALID，响应已给出，归零
            else if (wr_complete_now) wr_wait <= 1;     // 写事务刚完成，启动计时
            else if (wr_wait != 0) begin                // 计时进行中
                wr_wait <= wr_wait + 1;
                if (wr_wait >= LIVE_BOUND) begin        // 超过上限仍未见 BVALID
                    note_fail(15);                      // L1：写有界活性违约
                    wr_wait <= 1;                       // 重新计时，避免同一错误反复刷屏
                end
            end

            // ---- 读响应看门狗 ----
            if (s_axi_rvalid) rd_wait <= 0;             // 看到 RVALID，响应已给出，归零
            else if (ar_hs) rd_wait <= 1;               // AR 握手成功，读事务被接受，启动计时
            else if (rd_wait != 0) begin
                rd_wait <= rd_wait + 1;
                if (rd_wait >= LIVE_BOUND) begin        // 超过上限仍未见 RVALID
                    note_fail(16);                      // L2：读有界活性违约
                    rd_wait <= 1;
                end
            end
        end
    end

    // ------------------------------------------------------------------
    // 前件覆盖计数器（防止"空通过"）
    //
    // 如果整场仿真中某条断言的前件从未成立（例如从未发生过反压），
    // 该断言会"空通过"，其"通过"不具备任何检查意义。这里统计各前件的
    // 命中次数，汇总报告中若某计数为 0，则对应断言的结果不可信。
    // ------------------------------------------------------------------
    longint unsigned c_stall_aw, c_stall_w, c_stall_ar, c_stall_r, c_stall_b; // 各通道被反压的拍数
    longint unsigned c_bvalid_cyc, c_rvalid_cyc, c_wr_complete;               // B/R 有效拍数、完成写事务数

    always @(posedge aclk) begin
        if (aresetn) begin
            // A1..A5 的前件：VALID 有效但 READY 未就绪（反压/stall）的拍数
            if (s_axi_awvalid && !s_axi_awready) c_stall_aw <= c_stall_aw + 1;
            if (s_axi_wvalid  && !s_axi_wready)  c_stall_w  <= c_stall_w + 1;
            if (s_axi_arvalid && !s_axi_arready) c_stall_ar <= c_stall_ar + 1;
            if (s_axi_rvalid  && !s_axi_rready)  c_stall_r  <= c_stall_r + 1;
            if (s_axi_bvalid  && !s_axi_bready)  c_stall_b  <= c_stall_b + 1;
            // A6/A8 的前件：BVALID 为高的拍数；A7/A9 的前件：RVALID 为高的拍数
            if (s_axi_bvalid)  c_bvalid_cyc  <= c_bvalid_cyc + 1;
            if (s_axi_rvalid)  c_rvalid_cyc  <= c_rvalid_cyc + 1;
            // L1 的前件：写事务完成的次数（L2 的前件直接用 n_ar 计数）
            if (wr_complete_now) c_wr_complete <= c_wr_complete + 1;
        end
    end

    // ------------------------------------------------------------------
    // 仿真结束汇总报告
    //   final 块在仿真结束时执行：
    //     1) 打印各断言前件命中次数（判断"通过"是否为空通过）；
    //     2) 逐条列出失败过的断言、失败次数与首次失败时间；
    //     3) 给出总体 PASS / FAIL 结论。
    // ------------------------------------------------------------------
    final begin
        int total;
        total = 0;
        $display("==================== CHECKER SUMMARY ====================");
        $display("antecedent hits (a pass is only meaningful if these are > 0):");
        $display("  A1 AW stall cycles      : %0d", c_stall_aw);
        $display("  A2 W  stall cycles      : %0d", c_stall_w);
        $display("  A3 AR stall cycles      : %0d", c_stall_ar);
        $display("  A4 R  stall cycles      : %0d", c_stall_r);
        $display("  A5 B  stall cycles      : %0d", c_stall_b);
        $display("  A6 BVALID cycles        : %0d", c_bvalid_cyc);
        $display("  A7 RVALID cycles        : %0d", c_rvalid_cyc);
        $display("  A8 same as A6 / A9 same as A7");
        $display("  L1 completed writes     : %0d", c_wr_complete);
        $display("  L2 AR handshakes        : %0d", n_ar);
        $display("---------------------------------------------------------");
        // 遍历所有断言编号，只列出发生过失败的条目
        for (int i = 0; i < 20; i++) begin
            if (n_fail[i] > 0) begin
                $display("  FAIL #%0d %-38s count=%0d first_t=%0d",
                         i, tag_of(i), n_fail[i], t_first[i]);
                total = total + 1;
            end
        end
        if (total == 0) $display("RESULT: PASS (no assertion fired)");
        else            $display("RESULT: FAIL (%0d assertion(s) fired)", total);
        $display("=========================================================");
    end

endmodule
`default_nettype wire   // 恢复默认的隐式网线行为，避免影响后续被编译的其他文件
