// =============================================================================
// 测试平台：AXI4-Lite 主设备 BFM + 记分板 + 收尾机制
//
// 本文件不对应任何真实硬件（不可综合），它扮演一个"守规矩但难伺候"的主
// 设备，把协议允许的自由度全部用来考验从设备：
//   - 读/写随机、目标寄存器随机、数据与字节使能随机；
//   - AW 与 W 的到达顺序随机（各 50%）；
//   - VALID 发起前随机停顿 0~MAX_STALL 拍；
//   - BREADY / RREADY 每拍按 75% 概率给出（随机背压）。
// 同时提供：软件参考模型（记分板比对读数据）、全局超时（防死锁）、
// 波形转储（事后复盘用）。
//
// testbench 纪律：所有信号在下降沿驱动、上升沿采样，驱动与采样错开半拍，
// 避免赋值和检查在同一时刻竞争（race）。
// =============================================================================
`timescale 1ns/1ps
`default_nettype none

module tb_top;

    localparam int MAX_STALL = 8;    // VALID 发起前的最大随机停顿拍数
    localparam int N_TRANS   = 300;  // 随机读写交易总笔数

    // ------------------------- 时钟与复位 -----------------------------------
    // always #5：每 5ns 翻转一次 -> 周期 10ns（100MHz）
    // "#延时" 只有仿真模型能用，真实硬件里没有这种构造
    logic aclk    = 1'b0;
    logic aresetn = 1'b0;            // 上电即处于复位，主流程稍后在下降沿释放
    always #5 aclk = ~aclk;

    // ------------------------- AXI4-Lite 信号 -------------------------------
    // 主设备（本文件中的任务）驱动：awaddr/awvalid/wdata/wstrb/wvalid/
    //                              bready/araddr/arvalid/rready
    // 从设备（dut）驱动：         awready/wready/bresp/bvalid/
    //                              arready/rdata/rresp/rvalid
    // 检查器（chk）对全部信号只读。
    logic [7:0]  s_axi_awaddr;
    logic        s_axi_awvalid;
    logic        s_axi_awready;
    logic [31:0] s_axi_wdata;
    logic [3:0]  s_axi_wstrb;
    logic        s_axi_wvalid;
    logic        s_axi_wready;
    logic [1:0]  s_axi_bresp;
    logic        s_axi_bvalid;
    logic        s_axi_bready;
    logic [7:0]  s_axi_araddr;
    logic        s_axi_arvalid;
    logic        s_axi_arready;
    logic [31:0] s_axi_rdata;
    logic [1:0]  s_axi_rresp;
    logic        s_axi_rvalid;
    logic        s_axi_rready;

    // ".*" 表示按名字自动连接同名端口；dut 为被测从设备，chk 为协议检查器
    axi4lite_slave   dut (.*);
    axi4lite_checker chk (.*);

    // ------------------------- 记分板（软件参考模型）------------------------
    // model[] 与 DUT 内部 regs[0:3] 一一对应：每次写操作后同步更新 model，
    // 每次读操作后比对 DUT 返回值与 model。硬件实现与软件模型独立推演同一
    // 笔交易，结果必须一致——用于发现"数据写错/读错"这类协议断言管不到
    // 的数据一致性问题。
    logic [31:0] model [0:3];
    int unsigned sb_errors = 0;

    // ========================= 主设备 BFM 任务 ===============================

    // 随机消磨 0~MAX_STALL 拍：所有"随机延迟/背压"的原料
    task automatic stall_n();
        repeat ($urandom_range(0, MAX_STALL)) @(negedge aclk);
    endtask

    // -------------------------------------------------------------------------
    // 发起一笔 AXI 写：AW 与 W 顺序随机，之后随机背压地收取 B 响应，
    // 最后同步更新记分板模型。
    // -------------------------------------------------------------------------
    task automatic axi_write(input logic [7:0]  addr,
                             input logic [31:0] data,
                             input logic [3:0]  strb);
        // ---- 第一段：发出 AW 和 W，先后次序随机（各 50%）----
        // 每个通道的发送分四步（以 AW 为例）：
        //   1) stall_n()              随机等 0~8 拍再出手
        //   2) 下降沿举起 VALID 与载荷
        //   3) do..while 等待握手     每拍上升沿看 READY；等待期间 VALID 与
        //                             载荷保持不变（主设备遵守稳定性纪律）
        //   4) 成交后在下降沿放下 VALID
        if ($urandom_range(0, 1) == 0) begin
            // 先地址后数据
            stall_n();
            @(negedge aclk); s_axi_awaddr = addr; s_axi_awvalid = 1'b1;
            do @(posedge aclk); while (!s_axi_awready);
            @(negedge aclk); s_axi_awvalid = 1'b0;
            stall_n();
            @(negedge aclk); s_axi_wdata = data; s_axi_wstrb = strb; s_axi_wvalid = 1'b1;
            do @(posedge aclk); while (!s_axi_wready);
            @(negedge aclk); s_axi_wvalid = 1'b0;
        end else begin
            // 先数据后地址（考验从设备对两种到达顺序的凑对能力）
            stall_n();
            @(negedge aclk); s_axi_wdata = data; s_axi_wstrb = strb; s_axi_wvalid = 1'b1;
            do @(posedge aclk); while (!s_axi_wready);
            @(negedge aclk); s_axi_wvalid = 1'b0;
            stall_n();
            @(negedge aclk); s_axi_awaddr = addr; s_axi_awvalid = 1'b1;
            do @(posedge aclk); while (!s_axi_awready);
            @(negedge aclk); s_axi_awvalid = 1'b0;
        end

        // ---- 第二段：收取写响应，对 BREADY 施加随机背压 ----
        // 每拍下降沿掷骰子：75% 概率举 bready，25% 概率不举（背压）；
        // 上升沿检查是否成交（bvalid && bready），成交才退出循环。
        // 这段专门制造 "bvalid=1 且 bready=0" 的停顿拍——从设备的
        // BVALID 能否在停顿期间保持稳定，靠这种场景考验。
        forever begin
            @(negedge aclk); s_axi_bready = ($urandom_range(0, 3) != 0);
            @(posedge aclk);
            if (s_axi_bvalid && s_axi_bready) break;
        end
        @(negedge aclk); s_axi_bready = 1'b0;

        // ---- 第三段：在软件模型里重演这次写（含字节使能语义）----
        for (int i = 0; i < 4; i++)
            if (strb[i]) model[addr[3:2]][8*i +: 8] = data[8*i +: 8];
    endtask

    // -------------------------------------------------------------------------
    // 发起一笔 AXI 读：AR 发出后，随机背压地收取 R 数据。
    // 读到的数据通过 output 参数返回给调用方比对。
    // -------------------------------------------------------------------------
    task automatic axi_read(input logic [7:0] addr, output logic [31:0] data);
        stall_n();
        @(negedge aclk); s_axi_araddr = addr; s_axi_arvalid = 1'b1;
        do @(posedge aclk); while (!s_axi_arready);
        @(negedge aclk); s_axi_arvalid = 1'b0;
        // 随机背压地收取 R 数据；data 必须在"成交沿"（rvalid && rready）
        // 采样——这是唯一保证有效的读数据时刻
        forever begin
            @(negedge aclk); s_axi_rready = ($urandom_range(0, 3) != 0);
            @(posedge aclk);
            if (s_axi_rvalid && s_axi_rready) begin
                data = s_axi_rdata;
                break;
            end
        end
        @(negedge aclk); s_axi_rready = 1'b0;
    endtask

    // ========================= 主流程 =======================================
    // 复位 -> 300 笔随机读写 -> 报告并结束
    initial begin
        // 所有主设备输出归位；记分板初值与 DUT 复位值一致（全 0）
        s_axi_awaddr = 0; s_axi_awvalid = 0;
        s_axi_wdata  = 0; s_axi_wstrb = 0; s_axi_wvalid = 0;
        s_axi_bready = 0;
        s_axi_araddr = 0; s_axi_arvalid = 0;
        s_axi_rready = 0;
        for (int i = 0; i < 4; i++) model[i] = 32'd0;

        // 保持复位 6 拍，在下降沿释放（避免在时钟边沿附近改动复位造成竞争）
        repeat (6) @(negedge aclk);
        aresetn = 1'b1;
        repeat (2) @(negedge aclk);

        // 随机交易循环：每笔随机决定 读/写、目标寄存器、数据、字节使能
        for (int t = 0; t < N_TRANS; t++) begin
            logic [7:0]  addr;
            logic [31:0] data, rdata;
            logic [3:0]  strb;
            // $urandom_range 返回 32 位，先截位宽再左移 2 位得到字节地址
            addr = 8'($urandom_range(0, 3)) << 2;
            if ($urandom_range(0, 1) == 1) begin
                data = $urandom;
                strb = 4'($urandom_range(0, 15));
                axi_write(addr, data, strb);
            end else begin
                axi_read(addr, rdata);
                // "!==" 带 X 检测：DUT 输出出现未知值 X 也算失配
                if (rdata !== model[addr[3:2]]) begin
                    sb_errors++;
                    $display("[SB-MISMATCH] t=%0t addr=0x%02h dut=0x%08h model=0x%08h",
                             $time, addr, rdata, model[addr[3:2]]);
                end
            end
            if (t % 50 == 49) $display("[TB] %0d/%0d transactions done", t + 1, N_TRANS);
        end

        repeat (20) @(negedge aclk);
        $display("[TB] done; scoreboard errors=%0d", sb_errors);
        $finish;
    end

    // ========================= 收尾机制 =====================================
    // 全局超时看门狗：正常仿真几万拍内结束；若 10 万拍仍未结束，说明某处
    // 死锁（例如被注入"永远不给响应"缺陷的版本让 BFM 永远等下去），
    // 由本块强行收场，防止仿真挂死。
    initial begin
        repeat (100000) @(posedge aclk);
        $display("[TB] GLOBAL TIMEOUT (possible deadlock/liveness failure)");
        $finish;
    end

    // 波形转储：记录 tb_top 之下所有信号的全部变化，供 GTKWave 复盘
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_top);
    end

    // 注：以上三个 initial 块同时启动、并行运行，各是一条独立进程。

endmodule
`default_nettype wire
