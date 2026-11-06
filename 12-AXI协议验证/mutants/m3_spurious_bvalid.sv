// MUTANT M3: BVALID is asserted as soon as the write address arrives,
// without waiting for the write data (W) handshake.
// Violates: a write response may only be given after the slave has received
// both the write address and the write data (ARM IHI 0022, A3.3.1).
// Expected catch: A6 (#11) when AW arrives before W.
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

    reg  [15:0] lfsr;
    wire        lfsr_fb = lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10];

    wire aw_hs = s_axi_awvalid && s_axi_awready;
    wire w_hs  = s_axi_wvalid  && s_axi_wready;
    wire b_hs  = s_axi_bvalid  && s_axi_bready;
    wire ar_hs = s_axi_arvalid && s_axi_arready;
    wire r_hs  = s_axi_rvalid  && s_axi_rready;

    // BUG: W handshakes are consumed but never paired with an address.
    assign s_axi_awready = lfsr[3];
    assign s_axi_wready  = lfsr[5];
    assign s_axi_arready = ~s_axi_rvalid & lfsr[7];

    integer i;
    always @(posedge aclk) begin
        if (!aresetn) begin
            lfsr         <= 16'hACE1;
            s_axi_bvalid <= 1'b0;
            s_axi_bresp  <= 2'b00;
            s_axi_rvalid <= 1'b0;
            s_axi_rresp  <= 2'b00;
            s_axi_rdata  <= 32'd0;
            for (i = 0; i < 4; i = i + 1) regs[i] <= 32'd0;
        end else begin
            lfsr <= {lfsr[14:0], lfsr_fb};

            if (b_hs) s_axi_bvalid <= 1'b0;

            // BUG: the write "completes" when AW handshakes; the W channel
            // is ignored, so BVALID can rise before (or without) write data.
            if (aw_hs && !s_axi_bvalid) begin
                for (i = 0; i < 4; i = i + 1)
                    if (s_axi_wstrb[i]) regs[s_axi_awaddr[3:2]][8*i +: 8] <= s_axi_wdata[8*i +: 8];
                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= 2'b00;
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
