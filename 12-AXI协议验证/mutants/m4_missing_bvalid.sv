// MUTANT M4: the write response is never generated (BVALID stays low).
// Violates: every accepted write must eventually receive a response;
// a liveness failure that deadlocks the master (ARM IHI 0022, A3.1/A3.3;
// deadlock-freedom rule A3.1.2). Expected catch: L1 (#15) plus the TB
// global timeout.
`timescale 1ns/1ps
`default_nettype none

module axi4lite_slave (
    input  wire        aclk,
    input  wire        aresetn,
    input  wire [7:0]  s_axi_awaddr,
    input  wire        s_axi_awvalid,
    output wire        s_axi_awready,
    input  wire [31:0] s_axi_wdata,
    input  wire [3:0]  s_axi_wstrb,
    input  wire        s_axi_wvalid,
    output wire        s_axi_wready,
    output reg  [1:0]  s_axi_bresp,
    output reg         s_axi_bvalid,
    input  wire        s_axi_bready,
    input  wire [7:0]  s_axi_araddr,
    input  wire        s_axi_arvalid,
    output wire        s_axi_arready,
    output reg  [31:0] s_axi_rdata,
    output reg  [1:0]  s_axi_rresp,
    output reg         s_axi_rvalid,
    input  wire        s_axi_rready
);

    reg [31:0] regs [0:3];

    reg        aw_pending;
    reg [7:0]  aw_addr_q;
    reg        w_pending;
    reg [31:0] w_data_q;
    reg [3:0]  w_strb_q;

    reg  [15:0] lfsr;
    wire        lfsr_fb = lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10];

    wire aw_hs = s_axi_awvalid && s_axi_awready;
    wire w_hs  = s_axi_wvalid  && s_axi_wready;
    wire ar_hs = s_axi_arvalid && s_axi_arready;
    wire r_hs  = s_axi_rvalid  && s_axi_rready;

    assign s_axi_awready = ~aw_pending    & lfsr[3];
    assign s_axi_wready  = ~w_pending     & lfsr[5];
    assign s_axi_arready = ~s_axi_rvalid  & lfsr[7];

    wire aw_done = aw_pending | aw_hs;
    wire w_done  = w_pending  | w_hs;
    wire wr_complete = aw_done & w_done;

    wire [7:0]  wr_addr = aw_pending ? aw_addr_q : s_axi_awaddr;
    wire [31:0] wr_data = w_pending  ? w_data_q  : s_axi_wdata;
    wire [3:0]  wr_strb = w_pending  ? w_strb_q  : s_axi_wstrb;

    integer i;
    always @(posedge aclk) begin
        if (!aresetn) begin
            lfsr         <= 16'hACE1;
            aw_pending   <= 1'b0;
            w_pending    <= 1'b0;
            s_axi_bvalid <= 1'b0;
            s_axi_bresp  <= 2'b00;
            s_axi_rvalid <= 1'b0;
            s_axi_rresp  <= 2'b00;
            s_axi_rdata  <= 32'd0;
            for (i = 0; i < 4; i = i + 1) regs[i] <= 32'd0;
        end else begin
            lfsr <= {lfsr[14:0], lfsr_fb};

            if (aw_hs) begin
                aw_addr_q  <= s_axi_awaddr;
                aw_pending <= 1'b1;
            end
            if (w_hs) begin
                w_data_q  <= s_axi_wdata;
                w_strb_q  <= s_axi_wstrb;
                w_pending <= 1'b1;
            end

            if (wr_complete) begin
                for (i = 0; i < 4; i = i + 1)
                    if (wr_strb[i]) regs[wr_addr[3:2]][8*i +: 8] <= wr_data[8*i +: 8];
                aw_pending <= 1'b0;
                w_pending  <= 1'b0;
                // BUG: the response is never raised
                // (baseline sets s_axi_bvalid <= 1'b1 here).
            end

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
