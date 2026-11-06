// =============================================================================
// 基线设计：AXI4-Lite 寄存器从设备（正确版本，不注入任何错误）
//
// 功能：内部 4 个 32 位寄存器，主设备通过 AXI4-Lite 接口读写。
//   - 写：AW 通道给地址，W 通道给数据（两通道独立，到达顺序任意），
//         写完成后通过 B 通道返回响应（恒为 OKAY）。
//   - 读：AR 通道给地址，从设备通过 R 通道返回寄存器值（恒为 OKAY）。
//
// 协议要点（本设计严格遵守，也是检查器断言所依据的规则）：
//   1. 每个通道仅在 VALID 与 READY 同时为 1 的时钟沿完成一次传输；
//   2. VALID 一旦拉起，必须保持到握手完成，期间载荷不得变化；
//   3. 写响应必须在写地址和写数据都收到之后才能给出。
// =============================================================================
`timescale 1ns/1ps
`default_nettype none

module axi4lite_slave (
    input  wire        aclk,           // 时钟，所有通道共用
    input  wire        aresetn,        // 复位，低有效
    // ---- AW 通道：写地址（主设备发，本模块收）----
    input  wire [7:0]  s_axi_awaddr,   // 写地址（字节编址）
    input  wire        s_axi_awvalid,  // 主设备：地址有效
    output wire        s_axi_awready,  // 本模块：可以接收地址
    // ---- W 通道：写数据（主设备发，本模块收）----
    input  wire [31:0] s_axi_wdata,    // 写数据
    input  wire [3:0]  s_axi_wstrb,    // 字节使能（哪几个字节真正写入）
    input  wire        s_axi_wvalid,   // 主设备：数据有效
    output wire        s_axi_wready,   // 本模块：可以接收数据
    // ---- B 通道：写响应（本模块发，主设备收）----
    output reg  [1:0]  s_axi_bresp,    // 响应码，本设计恒为 2'b00 (OKAY)
    output reg         s_axi_bvalid,   // 本模块：响应有效
    input  wire        s_axi_bready,   // 主设备：可以接收响应
    // ---- AR 通道：读地址（主设备发，本模块收）----
    input  wire [7:0]  s_axi_araddr,   // 读地址
    input  wire        s_axi_arvalid,  // 主设备：地址有效
    output wire        s_axi_arready,  // 本模块：可以接收地址
    // ---- R 通道：读数据（本模块发，主设备收）----
    output reg  [31:0] s_axi_rdata,    // 读数据
    output reg  [1:0]  s_axi_rresp,    // 响应码，本设计恒为 2'b00 (OKAY)
    output reg         s_axi_rvalid,   // 本模块：数据有效
    input  wire        s_axi_rready    // 主设备：可以接收数据
);

    // -------------------------------------------------------------------------
    // 被读写的本体：4 个 32 位寄存器
    // 地址按字节编址，一个寄存器占 4 字节，因此 addr[3:2] 就是寄存器编号：
    //   0x00 -> regs[0]   0x04 -> regs[1]   0x08 -> regs[2]   0x0C -> regs[3]
    // -------------------------------------------------------------------------
    reg [31:0] regs [0:3];

    // -------------------------------------------------------------------------
    // 写通道的"暂存"状态
    //
    // AW 通道（地址）和 W 通道（数据）相互独立，不保证同一拍到达，先后任意。
    // 因此先到的一方必须先存起来，等各自己方"已收到"标志都置位后才算凑齐：
    //   aw_pending=1 表示"地址已收到，存在 aw_addr_q，还没被用掉"
    //   w_pending =1 表示"数据已收到，存在 w_data_q/w_strb_q，还没被用掉"
    // -------------------------------------------------------------------------
    reg        aw_pending;
    reg [7:0]  aw_addr_q;
    reg        w_pending;
    reg [31:0] w_data_q;
    reg [3:0]  w_strb_q;

    // -------------------------------------------------------------------------
    // LFSR（线性反馈移位寄存器）：产生确定性的伪随机序列
    //
    // 每拍全体左移一位，最低位补入反馈比特 lfsr_fb。
    // 抽头 15/13/12/10 对应本原多项式 x^16+x^14+x^13+x^11+1，
    // 保证从任何非零种子出发可遍历全部 2^16-1=65535 个非零状态才重复。
    //
    // 用途：门控 READY，让从设备随机"装忙"制造背压。协议允许从设备随时
    // 撤销 READY；没有这种停顿，主设备的 VALID/载荷稳定性就永远得不到考验，
    // 检查器里的稳定性断言也会因前件不触发而"空洞通过"。
    // 注意：复位值必须非零，否则全 0 状态会锁死（0 异或 0 恒为 0）。
    // -------------------------------------------------------------------------
    reg  [15:0] lfsr;
    wire        lfsr_fb = lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10];

    // -------------------------------------------------------------------------
    // 五个通道的"本拍成交"标志（组合逻辑）
    // hs = handshake：本拍 VALID 与 READY 同时为 1，该通道完成一次传输
    // -------------------------------------------------------------------------
    wire aw_hs = s_axi_awvalid && s_axi_awready;
    wire w_hs  = s_axi_wvalid  && s_axi_wready;
    wire b_hs  = s_axi_bvalid  && s_axi_bready;
    wire ar_hs = s_axi_arvalid && s_axi_arready;
    wire r_hs  = s_axi_rvalid  && s_axi_rready;

    // -------------------------------------------------------------------------
    // 三个 READY 的产生：READY = "缓冲是空的" & "随机愿意收"
    //
    // 前半（~pending / ~rvalid）是正确性底线：暂存寄存器只有一份，
    // 上一份还没被用掉时绝不能再收，否则旧数据被覆盖、事务丢失。
    // 后半（lfsr 的不同位）是伪随机节流，三个通道取不同的位，
    // 使三条通道的停顿模式互不相关。
    // arready 用 ~s_axi_rvalid 是因为读数据寄存器 rdata 只有一份：
    // 上一笔读还没被接走时收新地址，会冲掉正在等待的读响应。
    // -------------------------------------------------------------------------
    assign s_axi_awready = ~aw_pending    & lfsr[3];
    assign s_axi_wready  = ~w_pending     & lfsr[5];
    assign s_axi_arready = ~s_axi_rvalid  & lfsr[7];

    // -------------------------------------------------------------------------
    // 写事务"凑对"逻辑（组合逻辑）
    //
    // aw_done：地址这边齐了 = 之前已存着（aw_pending）或本拍刚到（aw_hs）
    // w_done ：数据这边齐了 = 同理
    // wr_complete：两边都齐，且 B 通道有位置（上一个响应已发走或本拍刚被接走），
    //              本拍就可以真正执行写操作并发出写响应。
    // -------------------------------------------------------------------------
    wire aw_done = aw_pending | aw_hs;
    wire w_done  = w_pending  | w_hs;
    wire wr_complete = aw_done & w_done & (~s_axi_bvalid | b_hs);

    // 执行写操作时使用哪份地址/数据：先到的一方用存下来的，本拍到的一方用总线上的
    wire [7:0]  wr_addr = aw_pending ? aw_addr_q   : s_axi_awaddr;
    wire [31:0] wr_data = w_pending  ? w_data_q    : s_axi_wdata;
    wire [3:0]  wr_strb = w_pending  ? w_strb_q    : s_axi_wstrb;

    integer i;
    always @(posedge aclk) begin
        if (!aresetn) begin
            // ---------------- 复位：全部回到初始状态 ----------------
            lfsr         <= 16'hACE1;   // 非零种子，避免 LFSR 锁死在全 0
            aw_pending   <= 1'b0;
            w_pending    <= 1'b0;
            s_axi_bvalid <= 1'b0;
            s_axi_bresp  <= 2'b00;
            s_axi_rvalid <= 1'b0;
            s_axi_rresp  <= 2'b00;
            s_axi_rdata  <= 32'd0;
            for (i = 0; i < 4; i = i + 1) regs[i] <= 32'd0;
        end else begin
            // (0) LFSR 每拍滚动一格，产生下一拍的伪随机 READY
            lfsr <= {lfsr[14:0], lfsr_fb};

            // (1) 捕获先到的一方：AW 握手则锁存地址并置"已收到"标志
            if (aw_hs) begin
                aw_addr_q  <= s_axi_awaddr;
                aw_pending <= 1'b1;
            end
            // W 通道同理
            if (w_hs) begin
                w_data_q  <= s_axi_wdata;
                w_strb_q  <= s_axi_wstrb;
                w_pending <= 1'b1;
            end

            // (2) 写响应被主设备接走（b_hs）：撤销 BVALID，B 通道腾空。
            // 注意 BVALID 只在这里撤销——"VALID 拉起后保持到握手"的协议
            // 要求正是这样实现的。
            if (b_hs) s_axi_bvalid <= 1'b0;

            // (3) 写凑对成功：执行写寄存器 + 发出写响应
            if (wr_complete) begin
                // 按字节使能 wstrb 写入：wstrb[i]=1 才更新第 i 个字节，
                // 其余字节保持原值。data[8*i +: 8] 表示"第 i 个字节"。
                for (i = 0; i < 4; i = i + 1)
                    if (wr_strb[i]) regs[wr_addr[3:2]][8*i +: 8] <= wr_data[8*i +: 8];
                aw_pending   <= 1'b0;   // 两份暂存都已用掉，清标志
                w_pending    <= 1'b0;
                s_axi_bvalid <= 1'b1;   // 拉起写响应（若本拍同时 b_hs，本行
                s_axi_bresp  <= 2'b00;  // 在 (2) 之后执行，新响应覆盖旧撤销）
            end

            // (4) 读通道：AR 握手后立即锁存数据并拉起 RVALID，
            // 之后一直保持到主设备用 RREADY 接走（r_hs）才撤销。
            // 等待期间没有任何分支会修改 rdata/rresp——这就是
            // "VALID 与载荷保持稳定"的实现，也是断言 A4a/A4b 检查的对象。
            if (ar_hs) begin
                s_axi_rdata  <= regs[s_axi_araddr[3:2]];
                s_axi_rresp  <= 2'b00;
                s_axi_rvalid <= 1'b1;
            end else if (r_hs) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

endmodule
`default_nettype wire
