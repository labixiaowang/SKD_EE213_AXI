// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


VL_ATTR_COLD void Vtb_top___024root__trace_init_dtype____3(Vtb_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"MAX_STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+141,0,"N_TRANS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"aclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"aresetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"s_axi_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"s_axi_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"s_axi_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"s_axi_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"s_axi_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "model", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"sb_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "chk", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"s_axi_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"s_axi_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"s_axi_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"s_axi_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"s_axi_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+142,0,"LIVE_BOUND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"aw_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"w_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"b_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"ar_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"r_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "t_first", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 19);
    for (int i = 0; i < 20; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+13+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, (i + 0), 63,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "n_fail", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 19);
    for (int i = 0; i < 20; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+53+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"aw_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+92,0,"w_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"n_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"n_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"n_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"n_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"n_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"wr_outst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rd_outst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"wr_complete_now",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"wr_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"rd_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+102,0,"c_stall_aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+104,0,"c_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+106,0,"c_stall_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+108,0,"c_stall_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+110,0,"c_stall_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+112,0,"c_bvalid_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+114,0,"c_rvalid_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+116,0,"c_wr_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, 63,0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+131,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"s_axi_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"s_axi_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+86,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"s_axi_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"s_axi_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"s_axi_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vtb_top___024root__trace_init_dtype____3(vlSelf, tracep, "regs", 0, c+118, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"aw_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"aw_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"w_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"w_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"w_strb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"lfsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+128,0,"lfsr_fb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+73,0,"aw_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"w_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"b_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"ar_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"r_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+134,0,"aw_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"w_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+79,0,"wr_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"wr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"wr_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+129,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_dtype_sub____3(Vtb_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_top___024root__trace_init_dtype____3(Vtb_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_dtype____3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_dtype_sub____3(Vtb_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_dtype_sub____3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_top\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_register\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_top___024root__trace_const_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+140,(8U),32);
    bufp->fullIData(oldp+141,(0x0000012cU),32);
    bufp->fullIData(oldp+142,(0x00000064U),32);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_top___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const ::VlUnpacked<::IData/*31:0*/, 4>& __VdtypeVar);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_top__DOT__s_axi_awaddr),8);
    bufp->fullBit(oldp+1,(vlSelfRef.tb_top__DOT__s_axi_awvalid));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_top__DOT__s_axi_wdata),32);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_top__DOT__s_axi_wstrb),4);
    bufp->fullBit(oldp+4,(vlSelfRef.tb_top__DOT__s_axi_wvalid));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_top__DOT__s_axi_bready));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_top__DOT__s_axi_araddr),8);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_top__DOT__s_axi_arvalid));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_top__DOT__s_axi_rready));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_top__DOT__model[0]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_top__DOT__model[1]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_top__DOT__model[2]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_top__DOT__model[3]),32);
    bufp->fullQData(oldp+13,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[0]),64);
    bufp->fullQData(oldp+15,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[1]),64);
    bufp->fullQData(oldp+17,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[2]),64);
    bufp->fullQData(oldp+19,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[3]),64);
    bufp->fullQData(oldp+21,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[4]),64);
    bufp->fullQData(oldp+23,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[5]),64);
    bufp->fullQData(oldp+25,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[6]),64);
    bufp->fullQData(oldp+27,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[7]),64);
    bufp->fullQData(oldp+29,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[8]),64);
    bufp->fullQData(oldp+31,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[9]),64);
    bufp->fullQData(oldp+33,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[10]),64);
    bufp->fullQData(oldp+35,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[11]),64);
    bufp->fullQData(oldp+37,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[12]),64);
    bufp->fullQData(oldp+39,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[13]),64);
    bufp->fullQData(oldp+41,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[14]),64);
    bufp->fullQData(oldp+43,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[15]),64);
    bufp->fullQData(oldp+45,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[16]),64);
    bufp->fullQData(oldp+47,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[17]),64);
    bufp->fullQData(oldp+49,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[18]),64);
    bufp->fullQData(oldp+51,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[19]),64);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[17]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[18]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[19]),32);
    bufp->fullBit(oldp+73,(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs));
    bufp->fullBit(oldp+74,(vlSelfRef.tb_top__DOT__dut__DOT__w_hs));
    bufp->fullBit(oldp+75,(vlSelfRef.tb_top__DOT__dut__DOT__b_hs));
    bufp->fullBit(oldp+76,(vlSelfRef.tb_top__DOT__dut__DOT__ar_hs));
    bufp->fullBit(oldp+77,(vlSelfRef.tb_top__DOT__dut__DOT__r_hs));
    bufp->fullBit(oldp+78,(vlSelfRef.tb_top__DOT__chk__DOT__wr_complete_now));
    bufp->fullBit(oldp+79,(vlSelfRef.tb_top__DOT__dut__DOT__wr_complete));
    bufp->fullCData(oldp+80,(vlSelfRef.tb_top__DOT__dut__DOT__wr_addr),8);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_top__DOT__dut__DOT__wr_data),32);
    bufp->fullCData(oldp+82,(vlSelfRef.tb_top__DOT__dut__DOT__wr_strb),4);
    bufp->fullBit(oldp+83,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready));
    bufp->fullBit(oldp+84,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready));
    bufp->fullCData(oldp+85,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bresp),2);
    bufp->fullBit(oldp+86,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid));
    bufp->fullBit(oldp+87,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready));
    bufp->fullIData(oldp+88,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rdata),32);
    bufp->fullCData(oldp+89,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rresp),2);
    bufp->fullBit(oldp+90,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid));
    bufp->fullBit(oldp+91,(vlSelfRef.tb_top__DOT__chk__DOT__aw_seen));
    bufp->fullBit(oldp+92,(vlSelfRef.tb_top__DOT__chk__DOT__w_seen));
    bufp->fullIData(oldp+93,(vlSelfRef.tb_top__DOT__chk__DOT__n_aw),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tb_top__DOT__chk__DOT__n_w),32);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_top__DOT__chk__DOT__n_b),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_top__DOT__chk__DOT__n_ar),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_top__DOT__chk__DOT__n_r),32);
    bufp->fullIData(oldp+98,((((vlSelfRef.tb_top__DOT__chk__DOT__n_aw 
                                < vlSelfRef.tb_top__DOT__chk__DOT__n_w)
                                ? vlSelfRef.tb_top__DOT__chk__DOT__n_aw
                                : vlSelfRef.tb_top__DOT__chk__DOT__n_w) 
                              - vlSelfRef.tb_top__DOT__chk__DOT__n_b)),32);
    bufp->fullIData(oldp+99,((vlSelfRef.tb_top__DOT__chk__DOT__n_ar 
                              - vlSelfRef.tb_top__DOT__chk__DOT__n_r)),32);
    bufp->fullIData(oldp+100,(vlSelfRef.tb_top__DOT__chk__DOT__wr_wait),32);
    bufp->fullIData(oldp+101,(vlSelfRef.tb_top__DOT__chk__DOT__rd_wait),32);
    bufp->fullQData(oldp+102,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_aw),64);
    bufp->fullQData(oldp+104,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_w),64);
    bufp->fullQData(oldp+106,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_ar),64);
    bufp->fullQData(oldp+108,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_r),64);
    bufp->fullQData(oldp+110,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_b),64);
    bufp->fullQData(oldp+112,(vlSelfRef.tb_top__DOT__chk__DOT__c_bvalid_cyc),64);
    bufp->fullQData(oldp+114,(vlSelfRef.tb_top__DOT__chk__DOT__c_rvalid_cyc),64);
    bufp->fullQData(oldp+116,(vlSelfRef.tb_top__DOT__chk__DOT__c_wr_complete),64);
    Vtb_top___024root__trace_full_dtype____0(vlSelf, bufp, 118, vlSelfRef.tb_top__DOT__dut__DOT__regs);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending));
    bufp->fullCData(oldp+123,(vlSelfRef.tb_top__DOT__dut__DOT__aw_addr_q),8);
    bufp->fullBit(oldp+124,(vlSelfRef.tb_top__DOT__dut__DOT__w_pending));
    bufp->fullIData(oldp+125,(vlSelfRef.tb_top__DOT__dut__DOT__w_data_q),32);
    bufp->fullCData(oldp+126,(vlSelfRef.tb_top__DOT__dut__DOT__w_strb_q),4);
    bufp->fullSData(oldp+127,(vlSelfRef.tb_top__DOT__dut__DOT__lfsr),16);
    bufp->fullBit(oldp+128,((1U & VL_REDXOR_16((0xb400U 
                                                & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr))))));
    bufp->fullIData(oldp+129,(vlSelfRef.tb_top__DOT__dut__DOT__i),32);
    bufp->fullBit(oldp+130,(vlSelfRef.tb_top__DOT__aclk));
    bufp->fullBit(oldp+131,(vlSelfRef.tb_top__DOT__aresetn));
    bufp->fullIData(oldp+132,(vlSelfRef.tb_top__DOT__sb_errors),32);
    bufp->fullIData(oldp+133,(vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total),32);
    bufp->fullBit(oldp+134,(((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending) 
                             | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs))));
    bufp->fullBit(oldp+135,(((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_pending) 
                             | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_hs))));
    bufp->fullCData(oldp+136,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr),8);
    bufp->fullIData(oldp+137,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__data),32);
    bufp->fullIData(oldp+138,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata),32);
    bufp->fullCData(oldp+139,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__strb),4);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const ::VlUnpacked<::IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_dtype____0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
}
