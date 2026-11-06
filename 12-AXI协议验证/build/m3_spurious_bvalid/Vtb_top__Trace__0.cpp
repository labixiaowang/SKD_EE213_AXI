// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vtb_top___024root__trace_chg_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const ::VlUnpacked<::IData/*31:0*/, 4>& __VdtypeVar);

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__VtraceActivity[1U] 
                      | vlSelfRef.__VtraceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_top__DOT__s_axi_awaddr),8);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_top__DOT__s_axi_awvalid));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_top__DOT__s_axi_wdata),32);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_top__DOT__s_axi_wstrb),4);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_top__DOT__s_axi_wvalid));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_top__DOT__s_axi_bready));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_top__DOT__s_axi_araddr),8);
        bufp->chgBit(oldp+7,(vlSelfRef.tb_top__DOT__s_axi_arvalid));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_top__DOT__s_axi_rready));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_top__DOT__model[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_top__DOT__model[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_top__DOT__model[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_top__DOT__model[3]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__VtraceActivity[1U] 
                      | vlSelfRef.__VtraceActivity[4U])))) {
        bufp->chgQData(oldp+13,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[0]),64);
        bufp->chgQData(oldp+15,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[1]),64);
        bufp->chgQData(oldp+17,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[2]),64);
        bufp->chgQData(oldp+19,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[3]),64);
        bufp->chgQData(oldp+21,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[4]),64);
        bufp->chgQData(oldp+23,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[5]),64);
        bufp->chgQData(oldp+25,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[6]),64);
        bufp->chgQData(oldp+27,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[7]),64);
        bufp->chgQData(oldp+29,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[8]),64);
        bufp->chgQData(oldp+31,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[9]),64);
        bufp->chgQData(oldp+33,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[10]),64);
        bufp->chgQData(oldp+35,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[11]),64);
        bufp->chgQData(oldp+37,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[12]),64);
        bufp->chgQData(oldp+39,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[13]),64);
        bufp->chgQData(oldp+41,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[14]),64);
        bufp->chgQData(oldp+43,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[15]),64);
        bufp->chgQData(oldp+45,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[16]),64);
        bufp->chgQData(oldp+47,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[17]),64);
        bufp->chgQData(oldp+49,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[18]),64);
        bufp->chgQData(oldp+51,(vlSelfRef.tb_top__DOT__chk__DOT__t_first[19]),64);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[17]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[18]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_top__DOT__chk__DOT__n_fail[19]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__VtraceActivity[3U] 
                      | vlSelfRef.__VtraceActivity[5U])))) {
        bufp->chgBit(oldp+73,(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs));
        bufp->chgBit(oldp+74,(vlSelfRef.tb_top__DOT__dut__DOT__w_hs));
        bufp->chgBit(oldp+75,(vlSelfRef.tb_top__DOT__dut__DOT__b_hs));
        bufp->chgBit(oldp+76,(vlSelfRef.tb_top__DOT__dut__DOT__ar_hs));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_top__DOT__dut__DOT__r_hs));
        bufp->chgBit(oldp+78,(vlSelfRef.tb_top__DOT__chk__DOT__wr_complete_now));
    }
    if (VL_UNLIKELY((vlSelfRef.__VtraceActivity[4U]))) {
        bufp->chgBit(oldp+79,((1U & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                                     >> 3U))));
        bufp->chgBit(oldp+80,((1U & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                                     >> 5U))));
        bufp->chgCData(oldp+81,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bresp),2);
        bufp->chgBit(oldp+82,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid));
        bufp->chgBit(oldp+83,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready));
        bufp->chgIData(oldp+84,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rdata),32);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rresp),2);
        bufp->chgBit(oldp+86,(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid));
        bufp->chgBit(oldp+87,(vlSelfRef.tb_top__DOT__chk__DOT__aw_seen));
        bufp->chgBit(oldp+88,(vlSelfRef.tb_top__DOT__chk__DOT__w_seen));
        bufp->chgIData(oldp+89,(vlSelfRef.tb_top__DOT__chk__DOT__n_aw),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_top__DOT__chk__DOT__n_w),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_top__DOT__chk__DOT__n_b),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_top__DOT__chk__DOT__n_ar),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_top__DOT__chk__DOT__n_r),32);
        bufp->chgIData(oldp+94,((((vlSelfRef.tb_top__DOT__chk__DOT__n_aw 
                                   < vlSelfRef.tb_top__DOT__chk__DOT__n_w)
                                   ? vlSelfRef.tb_top__DOT__chk__DOT__n_aw
                                   : vlSelfRef.tb_top__DOT__chk__DOT__n_w) 
                                 - vlSelfRef.tb_top__DOT__chk__DOT__n_b)),32);
        bufp->chgIData(oldp+95,((vlSelfRef.tb_top__DOT__chk__DOT__n_ar 
                                 - vlSelfRef.tb_top__DOT__chk__DOT__n_r)),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_top__DOT__chk__DOT__wr_wait),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_top__DOT__chk__DOT__rd_wait),32);
        bufp->chgQData(oldp+98,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_aw),64);
        bufp->chgQData(oldp+100,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_w),64);
        bufp->chgQData(oldp+102,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_ar),64);
        bufp->chgQData(oldp+104,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_r),64);
        bufp->chgQData(oldp+106,(vlSelfRef.tb_top__DOT__chk__DOT__c_stall_b),64);
        bufp->chgQData(oldp+108,(vlSelfRef.tb_top__DOT__chk__DOT__c_bvalid_cyc),64);
        bufp->chgQData(oldp+110,(vlSelfRef.tb_top__DOT__chk__DOT__c_rvalid_cyc),64);
        bufp->chgQData(oldp+112,(vlSelfRef.tb_top__DOT__chk__DOT__c_wr_complete),64);
        Vtb_top___024root__trace_chg_dtype____0(vlSelf, bufp, 114, vlSelfRef.tb_top__DOT__dut__DOT__regs);
        bufp->chgSData(oldp+118,(vlSelfRef.tb_top__DOT__dut__DOT__lfsr),16);
        bufp->chgBit(oldp+119,((1U & VL_REDXOR_16((0xb400U 
                                                   & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr))))));
        bufp->chgIData(oldp+120,(vlSelfRef.tb_top__DOT__dut__DOT__i),32);
    }
    bufp->chgBit(oldp+121,(vlSelfRef.tb_top__DOT__aclk));
    bufp->chgBit(oldp+122,(vlSelfRef.tb_top__DOT__aresetn));
    bufp->chgIData(oldp+123,(vlSelfRef.tb_top__DOT__sb_errors),32);
    bufp->chgIData(oldp+124,(vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total),32);
    bufp->chgCData(oldp+125,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr),8);
    bufp->chgIData(oldp+126,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__data),32);
    bufp->chgIData(oldp+127,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata),32);
    bufp->chgCData(oldp+128,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__strb),4);
}

void Vtb_top___024root__trace_chg_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const ::VlUnpacked<::IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
}

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->vlInst.TOP.__VtraceActivity[0U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[1U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[2U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[3U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[4U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[5U] = 0U;
}
