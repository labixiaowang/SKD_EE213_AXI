// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__2(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__VtraceActivity[1U] = 1U;
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_top___024root___eval_sample(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_sample\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0 = vlSelfRef.tb_top__DOT__aresetn;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awvalid_1 
        = vlSelfRef.tb_top__DOT__s_axi_awvalid;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awaddr_2 
        = vlSelfRef.tb_top__DOT__s_axi_awaddr;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wvalid_3 
        = vlSelfRef.tb_top__DOT__s_axi_wvalid;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wdata_4 
        = vlSelfRef.tb_top__DOT__s_axi_wdata;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wstrb_5 
        = vlSelfRef.tb_top__DOT__s_axi_wstrb;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_arvalid_6 
        = vlSelfRef.tb_top__DOT__s_axi_arvalid;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_araddr_7 
        = vlSelfRef.tb_top__DOT__s_axi_araddr;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rdata_9 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rdata;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rresp_10 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rresp;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bresp_12 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bresp;
    vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_aw_13 
        = vlSelfRef.tb_top__DOT__chk__DOT__n_aw;
    vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_w_14 
        = vlSelfRef.tb_top__DOT__chk__DOT__n_w;
    vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_b_15 
        = vlSelfRef.tb_top__DOT__chk__DOT__n_b;
    vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_ar_16 
        = vlSelfRef.tb_top__DOT__chk__DOT__n_ar;
    vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_r_17 
        = vlSelfRef.tb_top__DOT__chk__DOT__n_r;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_awready_18 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_wready_19 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready;
    vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_arready_20 
        = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_rready_21 
        = vlSelfRef.tb_top__DOT__s_axi_rready;
    vlSelfRef.__Vsampled_tb_top__DOT__s_axi_bready_22 
        = vlSelfRef.tb_top__DOT__s_axi_bready;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vtb_top___024root___eval_ico(Vtb_top___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_top___024root___timing_ready(Vtb_top___024root* vlSelf);
void Vtb_top___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vtb_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf);

bool Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            (((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                               << 3U) 
                                                              | (((~ (::IData)(vlSelfRef.tb_top__DOT__aclk)) 
                                                                  & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0)) 
                                                                 << 2U)) 
                                                             | ((((~ (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
                                                                  & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aresetn__0)) 
                                                                 << 1U) 
                                                                | ((::IData)(vlSelfRef.tb_top__DOT__aclk) 
                                                                   & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0 
            = vlSelfRef.tb_top__DOT__aclk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aresetn__0 
            = vlSelfRef.tb_top__DOT__aresetn;
    }
    Vtb_top___024root___timing_ready(vlSelf);
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_top___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((((5ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.tb_top__DOT__dut__DOT__ar_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_arvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready));
                    vlSelfRef.tb_top__DOT__dut__DOT__wr_addr 
                        = ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending)
                            ? (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_addr_q)
                            : (::IData)(vlSelfRef.tb_top__DOT__s_axi_awaddr));
                    if (vlSelfRef.tb_top__DOT__dut__DOT__w_pending) {
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                            = vlSelfRef.tb_top__DOT__dut__DOT__w_data_q;
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_strb 
                            = vlSelfRef.tb_top__DOT__dut__DOT__w_strb_q;
                    } else {
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                            = vlSelfRef.tb_top__DOT__s_axi_wdata;
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_strb 
                            = vlSelfRef.tb_top__DOT__s_axi_wstrb;
                    }
                    vlSelfRef.tb_top__DOT__dut__DOT__b_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_bready) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid));
                    vlSelfRef.tb_top__DOT__dut__DOT__aw_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_awvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready));
                    vlSelfRef.tb_top__DOT__dut__DOT__w_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_wvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready));
                    vlSelfRef.tb_top__DOT__chk__DOT__wr_complete_now 
                        = ((~ ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT__aw_seen) 
                               & (::IData)(vlSelfRef.tb_top__DOT__chk__DOT__w_seen))) 
                           & (((::IData)(vlSelfRef.tb_top__DOT__chk__DOT__aw_seen) 
                               | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs)) 
                              & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT__w_seen) 
                                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_hs))));
                    vlSelfRef.tb_top__DOT__dut__DOT__wr_complete 
                        = (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending) 
                            | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs)) 
                           & (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_pending) 
                               | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_hs)) 
                              & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid)) 
                                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__b_hs))));
                }
                vlSelfRef.__VtraceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_inact(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_inact\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tb_top.sv", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf);
void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf);
void Vtb_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__VtraceActivity[4U] = 1U;
            }
            if ((((5ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_comb__TOP__0
                    vlSelfRef.tb_top__DOT__dut__DOT__wr_addr 
                        = ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending)
                            ? (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_addr_q)
                            : (::IData)(vlSelfRef.tb_top__DOT__s_axi_awaddr));
                    if (vlSelfRef.tb_top__DOT__dut__DOT__w_pending) {
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                            = vlSelfRef.tb_top__DOT__dut__DOT__w_data_q;
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_strb 
                            = vlSelfRef.tb_top__DOT__dut__DOT__w_strb_q;
                    } else {
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                            = vlSelfRef.tb_top__DOT__s_axi_wdata;
                        vlSelfRef.tb_top__DOT__dut__DOT__wr_strb 
                            = vlSelfRef.tb_top__DOT__s_axi_wstrb;
                    }
                    vlSelfRef.tb_top__DOT__dut__DOT__aw_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_awvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready));
                    vlSelfRef.tb_top__DOT__dut__DOT__w_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_wvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready));
                    vlSelfRef.tb_top__DOT__dut__DOT__b_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_bready) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid));
                    vlSelfRef.tb_top__DOT__dut__DOT__ar_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_arvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready));
                    vlSelfRef.tb_top__DOT__chk__DOT__wr_complete_now 
                        = ((~ ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT__aw_seen) 
                               & (::IData)(vlSelfRef.tb_top__DOT__chk__DOT__w_seen))) 
                           & (((::IData)(vlSelfRef.tb_top__DOT__chk__DOT__aw_seen) 
                               | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs)) 
                              & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT__w_seen) 
                                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_hs))));
                    vlSelfRef.tb_top__DOT__dut__DOT__wr_complete 
                        = (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending) 
                            | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_hs)) 
                           & (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_pending) 
                               | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_hs)) 
                              & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid)) 
                                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__b_hs))));
                }
                vlSelfRef.__VtraceActivity[5U] = 1U;
            }
            if ((((2ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___0__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___2__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___4__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___9__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___6__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___1__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___5__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___7__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___10__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___8__s2 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___3__s2 = 0U;
                }
            }
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
            }
        }
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_top___024root___eval_obs(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_obs\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_top___024root___eval_react(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_react\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_top___024root___eval_postponed(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_postponed\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top___024root____VbeforeTrig_hf7614637__0(Vtb_top___024root* vlSelf, const char* __VeventDescription);
void Vtb_top___024root____VbeforeTrig_hf7614772__0(Vtb_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    ::IData/*31:0*/ tb_top__DOT__unnamedblk1_3__DOT____Vrepeat2;
    tb_top__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    ::IData/*31:0*/ tb_top__DOT__unnamedblk3__DOT__t;
    tb_top__DOT__unnamedblk3__DOT__t = 0;
    ::IData/*31:0*/ tb_top__DOT__unnamedblk1_4__DOT____Vrepeat3;
    tb_top__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    ::CData/*7:0*/ __Vtask_tb_top__DOT__axi_write__addr_0;
    __Vtask_tb_top__DOT__axi_write__addr_0 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__axi_write__data_1;
    __Vtask_tb_top__DOT__axi_write__data_1 = 0;
    ::CData/*3:0*/ __Vtask_tb_top__DOT__axi_write__strb_2;
    __Vtask_tb_top__DOT__axi_write__strb_2 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__axi_write____VlefExpr_1_3;
    __Vtask_tb_top__DOT__axi_write____VlefExpr_1_3 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__axi_write____VlefExpr_0_4;
    __Vtask_tb_top__DOT__axi_write____VlefExpr_0_4 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6;
    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7;
    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8;
    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9;
    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9 = 0;
    ::CData/*7:0*/ __Vtask_tb_top__DOT__axi_read__addr_10;
    __Vtask_tb_top__DOT__axi_read__addr_10 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__axi_read__data_11;
    __Vtask_tb_top__DOT__axi_read__data_11 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__axi_read____VlefExpr_0_12;
    __Vtask_tb_top__DOT__axi_read____VlefExpr_0_12 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13;
    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13 = 0;
    // Body
    vlSelfRef.tb_top__DOT__s_axi_awaddr = 0U;
    vlSelfRef.tb_top__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_top__DOT__s_axi_wdata = 0U;
    vlSelfRef.tb_top__DOT__s_axi_wstrb = 0U;
    vlSelfRef.tb_top__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_top__DOT__s_axi_bready = 0U;
    vlSelfRef.tb_top__DOT__s_axi_araddr = 0U;
    vlSelfRef.tb_top__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_top__DOT__s_axi_rready = 0U;
    vlSelfRef.tb_top__DOT__model[0U] = 0U;
    vlSelfRef.tb_top__DOT__model[1U] = 0U;
    vlSelfRef.tb_top__DOT__model[2U] = 0U;
    vlSelfRef.tb_top__DOT__model[3U] = 0U;
    tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 6U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                      "@(negedge tb_top.aclk)");
        co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_top.aclk)", 
                                                                         "tb/tb_top.sv", 
                                                                         106);
        vlSelfRef.__VtraceActivity[2U] = 1U;
        tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (::IData)(1U));
    }
    vlSelfRef.tb_top__DOT__aresetn = 1U;
    tb_top__DOT__unnamedblk1_3__DOT____Vrepeat2 = 2U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                      "@(negedge tb_top.aclk)");
        co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_top.aclk)", 
                                                                         "tb/tb_top.sv", 
                                                                         108);
        vlSelfRef.__VtraceActivity[2U] = 1U;
        tb_top__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (tb_top__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (::IData)(1U));
    }
    tb_top__DOT__unnamedblk3__DOT__t = 0U;
    while (VL_GTS_III(32, 0x0000012cU, tb_top__DOT__unnamedblk3__DOT__t)) {
        vlSelfRef.tb_top__DOT____VlemExpr_0 = VL_URANDOM_RANGE_I(0U, 3U);
        vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr 
            = (0x000000ffU & (vlSelfRef.tb_top__DOT____VlemExpr_0 
                              << 2U));
        vlSelfRef.tb_top__DOT____VlemExpr_1 = VL_URANDOM_RANGE_I(0U, 1U);
        if ((1U == vlSelfRef.tb_top__DOT____VlemExpr_1)) {
            vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__data 
                = VL_RANDOM_I();
            vlSelfRef.tb_top__DOT____VlemExpr_2 = VL_URANDOM_RANGE_I(0U, 0x0000000fU);
            vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__strb 
                = (0x0000000fU & vlSelfRef.tb_top__DOT____VlemExpr_2);
            __Vtask_tb_top__DOT__axi_write__strb_2 
                = vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__strb;
            __Vtask_tb_top__DOT__axi_write__data_1 
                = vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__data;
            __Vtask_tb_top__DOT__axi_write__addr_0 
                = vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr;
            __Vtask_tb_top__DOT__axi_write____VlefExpr_0_4 
                = VL_URANDOM_RANGE_I(0U, 1U);
            if ((0U == __Vtask_tb_top__DOT__axi_write____VlefExpr_0_4)) {
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6 = 0U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6 
                    = VL_URANDOM_RANGE_I(0U, 8U);
                while (VL_LTS_III(32, 0U, __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6)) {
                    Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                                  "@(negedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                42);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6 
                        = (__Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_6 
                           - (::IData)(1U));
                }
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                51);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_awaddr 
                    = __Vtask_tb_top__DOT__axi_write__addr_0;
                vlSelfRef.tb_top__DOT__s_axi_awvalid = 1U;
                do {
                    Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                                  "@(posedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                52);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                } while ((1U & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready))));
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                53);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_awvalid = 0U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7 = 0U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7 
                    = VL_URANDOM_RANGE_I(0U, 8U);
                while (VL_LTS_III(32, 0U, __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7)) {
                    Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                                  "@(negedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                42);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7 
                        = (__Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_7 
                           - (::IData)(1U));
                }
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                55);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_wdata 
                    = __Vtask_tb_top__DOT__axi_write__data_1;
                vlSelfRef.tb_top__DOT__s_axi_wstrb 
                    = __Vtask_tb_top__DOT__axi_write__strb_2;
                vlSelfRef.tb_top__DOT__s_axi_wvalid = 1U;
                do {
                    Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                                  "@(posedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                56);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                } while ((1U & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready))));
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                57);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_wvalid = 0U;
            } else {
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8 = 0U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8 
                    = VL_URANDOM_RANGE_I(0U, 8U);
                while (VL_LTS_III(32, 0U, __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8)) {
                    Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                                  "@(negedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                42);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8 
                        = (__Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_8 
                           - (::IData)(1U));
                }
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                60);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_wdata 
                    = __Vtask_tb_top__DOT__axi_write__data_1;
                vlSelfRef.tb_top__DOT__s_axi_wstrb 
                    = __Vtask_tb_top__DOT__axi_write__strb_2;
                vlSelfRef.tb_top__DOT__s_axi_wvalid = 1U;
                do {
                    Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                                  "@(posedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                61);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                } while ((1U & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready))));
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                62);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_wvalid = 0U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9 = 0U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9 
                    = VL_URANDOM_RANGE_I(0U, 8U);
                while (VL_LTS_III(32, 0U, __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9)) {
                    Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                                  "@(negedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                42);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9 
                        = (__Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_9 
                           - (::IData)(1U));
                }
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                64);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_awaddr 
                    = __Vtask_tb_top__DOT__axi_write__addr_0;
                vlSelfRef.tb_top__DOT__s_axi_awvalid = 1U;
                do {
                    Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                                  "@(posedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                65);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                } while ((1U & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready))));
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                66);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                vlSelfRef.tb_top__DOT__s_axi_awvalid = 0U;
            }
            {
                while (true) {
                    Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                                  "@(negedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                70);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    __Vtask_tb_top__DOT__axi_write____VlefExpr_1_3 
                        = VL_URANDOM_RANGE_I(0U, 3U);
                    vlSelfRef.tb_top__DOT__s_axi_bready 
                        = (0U != __Vtask_tb_top__DOT__axi_write____VlefExpr_1_3);
                    Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                                  "@(posedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                71);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    if (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid) 
                         & (::IData)(vlSelfRef.tb_top__DOT__s_axi_bready))) {
                        goto __Vlabel0;
                    }
                }
                __Vlabel0: ;
            }
            Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                          "@(negedge tb_top.aclk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_top.aclk)", 
                                                                             "tb/tb_top.sv", 
                                                                             74);
            vlSelfRef.__VtraceActivity[2U] = 1U;
            vlSelfRef.tb_top__DOT__s_axi_bready = 0U;
            if ((1U & (::IData)(__Vtask_tb_top__DOT__axi_write__strb_2))) {
                vlSelfRef.tb_top__DOT__model[(3U & 
                                              ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                               >> 2U))] 
                    = ((0xffffff00U & vlSelfRef.tb_top__DOT__model
                        [(3U & ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                >> 2U))]) | (0x000000ffU 
                                             & __Vtask_tb_top__DOT__axi_write__data_1));
            }
            if ((2U & (::IData)(__Vtask_tb_top__DOT__axi_write__strb_2))) {
                vlSelfRef.tb_top__DOT__model[(3U & 
                                              ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                               >> 2U))] 
                    = ((0xffff00ffU & vlSelfRef.tb_top__DOT__model
                        [(3U & ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                >> 2U))]) | (0x0000ff00U 
                                             & __Vtask_tb_top__DOT__axi_write__data_1));
            }
            if ((4U & (::IData)(__Vtask_tb_top__DOT__axi_write__strb_2))) {
                vlSelfRef.tb_top__DOT__model[(3U & 
                                              ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                               >> 2U))] 
                    = ((0xff00ffffU & vlSelfRef.tb_top__DOT__model
                        [(3U & ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                >> 2U))]) | (0x00ff0000U 
                                             & __Vtask_tb_top__DOT__axi_write__data_1));
            }
            if ((8U & (::IData)(__Vtask_tb_top__DOT__axi_write__strb_2))) {
                vlSelfRef.tb_top__DOT__model[(3U & 
                                              ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                               >> 2U))] 
                    = ((0x00ffffffU & vlSelfRef.tb_top__DOT__model
                        [(3U & ((::IData)(__Vtask_tb_top__DOT__axi_write__addr_0) 
                                >> 2U))]) | (0xff000000U 
                                             & __Vtask_tb_top__DOT__axi_write__data_1));
            }
        } else {
            __Vtask_tb_top__DOT__axi_read__addr_10 
                = vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr;
            __Vtask_tb_top__DOT__axi_read__data_11 = 0;
            __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13 = 0U;
            __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13 
                = VL_URANDOM_RANGE_I(0U, 8U);
            while (VL_LTS_III(32, 0U, __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13)) {
                Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                              "@(negedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                42);
                vlSelfRef.__VtraceActivity[2U] = 1U;
                __Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13 
                    = (__Vtask_tb_top__DOT__stall_n__unnamedblk1_1__DOT____Vrepeat0_13 
                       - (::IData)(1U));
            }
            Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                          "@(negedge tb_top.aclk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_top.aclk)", 
                                                                             "tb/tb_top.sv", 
                                                                             82);
            vlSelfRef.__VtraceActivity[2U] = 1U;
            vlSelfRef.tb_top__DOT__s_axi_araddr = __Vtask_tb_top__DOT__axi_read__addr_10;
            vlSelfRef.tb_top__DOT__s_axi_arvalid = 1U;
            do {
                Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                              "@(posedge tb_top.aclk)");
                co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                83);
                vlSelfRef.__VtraceActivity[2U] = 1U;
            } while ((1U & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready))));
            Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                          "@(negedge tb_top.aclk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_top.aclk)", 
                                                                             "tb/tb_top.sv", 
                                                                             84);
            vlSelfRef.__VtraceActivity[2U] = 1U;
            vlSelfRef.tb_top__DOT__s_axi_arvalid = 0U;
            {
                while (true) {
                    Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                                  "@(negedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(negedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                87);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    __Vtask_tb_top__DOT__axi_read____VlefExpr_0_12 
                        = VL_URANDOM_RANGE_I(0U, 3U);
                    vlSelfRef.tb_top__DOT__s_axi_rready 
                        = (0U != __Vtask_tb_top__DOT__axi_read____VlefExpr_0_12);
                    Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                                  "@(posedge tb_top.aclk)");
                    co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                                nullptr, 
                                                                                "@(posedge tb_top.aclk)", 
                                                                                "tb/tb_top.sv", 
                                                                                88);
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    if (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid) 
                         & (::IData)(vlSelfRef.tb_top__DOT__s_axi_rready))) {
                        __Vtask_tb_top__DOT__axi_read__data_11 
                            = vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rdata;
                        goto __Vlabel1;
                    }
                }
                __Vlabel1: ;
            }
            Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                          "@(negedge tb_top.aclk)");
            co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                             nullptr, 
                                                                             "@(negedge tb_top.aclk)", 
                                                                             "tb/tb_top.sv", 
                                                                             94);
            vlSelfRef.__VtraceActivity[2U] = 1U;
            vlSelfRef.tb_top__DOT__s_axi_rready = 0U;
            vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata 
                = __Vtask_tb_top__DOT__axi_read__data_11;
            if (VL_UNLIKELY(((vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata 
                              != vlSelfRef.tb_top__DOT__model
                              [(3U & ((::IData)(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr) 
                                      >> 2U))])))) {
                vlSelfRef.tb_top__DOT__sb_errors = 
                    ((::IData)(1U) + vlSelfRef.tb_top__DOT__sb_errors);
                VL_WRITEF_NX("[SB-MISMATCH] t=%0t addr=0x%02h dut=0x%08h model=0x%08h\n",5, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(::IData)(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr)
                             , '#',32,vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata
                             , '#',32,vlSelfRef.tb_top__DOT__model
                             [(3U & ((::IData)(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr) 
                                     >> 2U))]);
            }
        }
        if (VL_UNLIKELY(((0x00000031U == VL_MODDIVS_III(32, tb_top__DOT__unnamedblk3__DOT__t, (::IData)(0x00000032U)))))) {
            VL_WRITEF_NX("[TB] %0d/300 transactions done\n",1
                         , '~',32,((::IData)(1U) + tb_top__DOT__unnamedblk3__DOT__t));
        }
        tb_top__DOT__unnamedblk3__DOT__t = ((::IData)(1U) 
                                            + tb_top__DOT__unnamedblk3__DOT__t);
    }
    tb_top__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000014U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_top___024root____VbeforeTrig_hf7614637__0(vlSelf, 
                                                      "@(negedge tb_top.aclk)");
        co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge tb_top.aclk)", 
                                                                         "tb/tb_top.sv", 
                                                                         130);
        vlSelfRef.__VtraceActivity[2U] = 1U;
        tb_top__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (tb_top__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (::IData)(1U));
    }
    VL_WRITEF_NX("[TB] done; scoreboard errors=%0d\n",1
                 , '#',32,vlSelfRef.tb_top__DOT__sb_errors);
    VL_FINISH_MT("tb/tb_top.sv", 132, "");
    vlSelfRef.__VtraceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ tb_top__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_top__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    // Body
    tb_top__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x000186a0U;
    while (VL_LTS_III(32, 0U, tb_top__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_top___024root____VbeforeTrig_hf7614772__0(vlSelf, 
                                                      "@(posedge tb_top.aclk)");
        co_await vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(posedge tb_top.aclk)", 
                                                                         "tb/tb_top.sv", 
                                                                         137);
        tb_top__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_top__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (::IData)(1U));
    }
    VL_WRITEF_NX("[TB] GLOBAL TIMEOUT (possible deadlock/liveness failure)\n",0);
    VL_FINISH_MT("tb/tb_top.sv", 139, "");
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "tb/tb_top.sv", 
                                                         13);
        vlSelfRef.tb_top__DOT__aclk = (1U & (~ (::IData)(vlSelfRef.tb_top__DOT__aclk)));
    }
    co_return;
}

bool Vtb_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31 = 0;
    ::IData/*31:0*/ __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46;
    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46 = 0;
    ::IData/*31:0*/ __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33;
    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33 = 0;
    ::IData/*31:0*/ __Vdly__tb_top__DOT__chk__DOT__wr_wait_7;
    __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 = 0;
    ::IData/*31:0*/ __Vdly__tb_top__DOT__chk__DOT__rd_wait_8;
    __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 = 0;
    ::CData/*7:0*/ __Vdly_Val__tb_top__DOT__dut__DOT__regs_57;
    __Vdly_Val__tb_top__DOT__dut__DOT__regs_57 = 0;
    ::CData/*1:0*/ __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_58;
    __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_58 = 0;
    ::CData/*0:0*/ __Vdly_Set__tb_top__DOT__dut__DOT__regs_59;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_59 = 0;
    ::CData/*7:0*/ __Vdly_Val__tb_top__DOT__dut__DOT__regs_60;
    __Vdly_Val__tb_top__DOT__dut__DOT__regs_60 = 0;
    ::CData/*1:0*/ __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_61;
    __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_61 = 0;
    ::CData/*0:0*/ __Vdly_Set__tb_top__DOT__dut__DOT__regs_62;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_62 = 0;
    ::CData/*7:0*/ __Vdly_Val__tb_top__DOT__dut__DOT__regs_63;
    __Vdly_Val__tb_top__DOT__dut__DOT__regs_63 = 0;
    ::CData/*1:0*/ __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_64;
    __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_64 = 0;
    ::CData/*0:0*/ __Vdly_Set__tb_top__DOT__dut__DOT__regs_65;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_65 = 0;
    ::CData/*7:0*/ __Vdly_Val__tb_top__DOT__dut__DOT__regs_66;
    __Vdly_Val__tb_top__DOT__dut__DOT__regs_66 = 0;
    ::CData/*1:0*/ __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_67;
    __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_67 = 0;
    ::CData/*0:0*/ __Vdly_Set__tb_top__DOT__dut__DOT__regs_68;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_68 = 0;
    ::CData/*0:0*/ __Vdly_Set__tb_top__DOT__dut__DOT__regs_69;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_69 = 0;
    // Body
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_59 = 0U;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_62 = 0U;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_65 = 0U;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_68 = 0U;
    __Vdly_Set__tb_top__DOT__dut__DOT__regs_69 = 0U;
    __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 = vlSelfRef.tb_top__DOT__chk__DOT__wr_wait;
    __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 = vlSelfRef.tb_top__DOT__chk__DOT__rd_wait;
    if (vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON)) {
            if (vlSelfRef.tb_top__DOT__aresetn) {
                if (VL_UNLIKELY(((1U & (~ ((~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11)) 
                                           | (0U != 
                                              (((vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_aw_13 
                                                 < vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_w_14)
                                                 ? vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_aw_13
                                                 : vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_w_14) 
                                               - vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_b_15)))))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36 = 0x0000000bU;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[11U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_22 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_23)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_37 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_22;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_36
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_37)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8)) 
                                           | (0U != 
                                              (vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_ar_16 
                                               - vlSelfRef.__Vsampled_tb_top__DOT__chk__DOT__n_r_17)))))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38 = 0x0000000cU;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[12U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_24 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_25)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_39 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_24;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_38
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_39)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11)) 
                                           | (0U == (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bresp_12)))))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40 = 0x0000000dU;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[13U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_26 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_27)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_41 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_26;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_40
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_41)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY(((1U & (~ ((~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8)) 
                                           | (0U == (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rresp_10)))))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42 = 0x0000000eU;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[14U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_28 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_29)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_43 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_28;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_42
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_43)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___0__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___0__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awvalid_1)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14 = 0U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[0U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_0 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_1)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_15 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_0;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_14
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_15)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___2__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___2__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wvalid_3)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18 = 2U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[2U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_4 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_5)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_19 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_4;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_18
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_19)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___4__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___4__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_arvalid_6)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22 = 4U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[4U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_8 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_9)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_23 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_8;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_22
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_23)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___9__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___9__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32 = 9U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[9U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_18 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_19)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_33 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_18;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_32
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_33)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___6__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___6__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26 = 6U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[6U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_12 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_13)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_27 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_12;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_26
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_27)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___1__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___1__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT___Vpast_2_1) 
                                     != (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awaddr_2)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16 = 1U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[1U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_2 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_3)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_17 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_2;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_16
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_17)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___5__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___5__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT___Vpast_9_1) 
                                     != (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_araddr_7)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24 = 5U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[5U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_10 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_11)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_25 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_10;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_24
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_25)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___7__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___7__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (vlSelfRef.tb_top__DOT__chk__DOT___Vpast_12_1 
                                     != vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rdata_9))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28 = 7U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[7U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_14 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_15)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_29 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_14;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_28
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_29)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___10__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___10__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT___Vpast_17_1) 
                                     != (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bresp_12)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34 = 0x0000000aU;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[10U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_20 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_21)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_35 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_20;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_34
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_35)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___8__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___8__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT___Vpast_14_1) 
                                     != (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rresp_10)))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30 = 8U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[8U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_16 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_17)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_31 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_16;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_30
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_31)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
                if (VL_UNLIKELY((((((::IData)(vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___3__s2) 
                                    & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___3__kill 
                                       == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL))) 
                                   & (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__aresetn_0)) 
                                  & (~ ((vlSelfRef.tb_top__DOT__chk__DOT___Vpast_5_1 
                                         == vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wdata_4) 
                                        & ((::IData)(vlSelfRef.tb_top__DOT__chk__DOT___Vpast_6_1) 
                                           == (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wstrb_5)))))))) {
                    __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20 = 3U;
                    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3U] 
                        = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3U]);
                    if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[3U])))) {
                        if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20))))) {
                            vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                      & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20)] 
                                = VL_TIME_UNITED_Q(1000);
                        }
                        __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7 
                            = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20;
                        vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_6 
                            = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7) 
                                      | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                     | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                    | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                   | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                  | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                 | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7))
                                ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                    ? "A1a AWVALID held until AWREADY"s
                                    : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                        ? "A1b AWADDR stable while stalled"s
                                        : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                            ? "A2a WVALID held until WREADY"s
                                            : ((3U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                ? "A2b WDATA/WSTRB stable while stalled"s
                                                : (
                                                   (4U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                    ? "A3a ARVALID held until ARREADY"s
                                                    : 
                                                   ((5U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                     ? "A3b ARADDR stable while stalled"s
                                                     : 
                                                    ((6U 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                      ? "A4a RVALID held until RREADY"s
                                                      : "A4b RDATA stable while stalled"s)))))))
                                : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7) 
                                          | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                         | (0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                        | (0x0000000bU 
                                           == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                       | (0x0000000cU 
                                          == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                      | (0x0000000dU 
                                         == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                     | (0x0000000eU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)) 
                                    | (0x0000000fU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7))
                                    ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                        ? "A4c RRESP stable while stalled"s
                                        : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                            ? "A5a BVALID held until BREADY"s
                                            : ((0x0000000aU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                ? "A5b BRESP stable while stalled"s
                                                : (
                                                   (0x0000000bU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                    ? "A6  BVALID only after a completed write"s
                                                    : 
                                                   ((0x0000000cU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                     ? "A7  RVALID only after an accepted read"s
                                                     : 
                                                    ((0x0000000dU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                      ? "A8  BRESP is OKAY (design rule)"s
                                                      : 
                                                     ((0x0000000eU 
                                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                                       ? "A9  RRESP is OKAY (design rule)"s
                                                       : "L1  write always answered within bound"s)))))))
                                    : ((0x00000010U 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_7)
                                        ? "L2  read always answered within bound"s
                                        : "?"s)));
                        vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_21 
                            = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_6;
                        VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                     , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_20
                                     , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_21)
                                     , '#',64,VL_TIME_UNITED_Q(1000));
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_top__DOT__aresetn) {
        if (vlSelfRef.tb_top__DOT__chk__DOT__wr_complete_now) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_wr_complete 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_wr_complete);
        }
        if (((::IData)(vlSelfRef.tb_top__DOT__s_axi_arvalid) 
             & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready)))) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_stall_ar 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_stall_ar);
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__ar_hs) {
            vlSelfRef.tb_top__DOT__chk__DOT__n_ar = 
                ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_ar);
            vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rresp = 0U;
            vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rdata 
                = vlSelfRef.tb_top__DOT__dut__DOT__regs
                [(3U & ((::IData)(vlSelfRef.tb_top__DOT__s_axi_araddr) 
                        >> 2U))];
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__aw_hs) {
            vlSelfRef.tb_top__DOT__chk__DOT__n_aw = 
                ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_aw);
            vlSelfRef.tb_top__DOT__dut__DOT__aw_addr_q 
                = vlSelfRef.tb_top__DOT__s_axi_awaddr;
            vlSelfRef.tb_top__DOT__chk__DOT__aw_seen = 1U;
            vlSelfRef.tb_top__DOT__dut__DOT__aw_pending = 1U;
        }
        if (((::IData)(vlSelfRef.tb_top__DOT__s_axi_awvalid) 
             & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready)))) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_stall_aw 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_stall_aw);
        }
        if (((::IData)(vlSelfRef.tb_top__DOT__s_axi_wvalid) 
             & (~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready)))) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_stall_w 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_stall_w);
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__w_hs) {
            vlSelfRef.tb_top__DOT__chk__DOT__n_w = 
                ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_w);
            vlSelfRef.tb_top__DOT__dut__DOT__w_data_q 
                = vlSelfRef.tb_top__DOT__s_axi_wdata;
            vlSelfRef.tb_top__DOT__dut__DOT__w_strb_q 
                = vlSelfRef.tb_top__DOT__s_axi_wstrb;
            vlSelfRef.tb_top__DOT__chk__DOT__w_seen = 1U;
            vlSelfRef.tb_top__DOT__dut__DOT__w_pending = 1U;
        }
        vlSelfRef.tb_top__DOT__dut__DOT__lfsr = ((0x0000fffeU 
                                                  & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                                                     << 1U)) 
                                                 | (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr_fb));
        if (((::IData)(vlSelfRef.tb_top__DOT__s_axi_rready) 
             & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid))) {
            vlSelfRef.tb_top__DOT__chk__DOT__n_r = 
                ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_r);
        }
        if (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid) 
             & (~ (::IData)(vlSelfRef.tb_top__DOT__s_axi_rready)))) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_stall_r 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_stall_r);
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_bvalid_cyc 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_bvalid_cyc);
            __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 = 0U;
        } else if (vlSelfRef.tb_top__DOT__chk__DOT__wr_complete_now) {
            __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 = 1U;
        } else if ((0U != vlSelfRef.tb_top__DOT__chk__DOT__wr_wait)) {
            __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 
                = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__wr_wait);
            if ((0x00000064U <= vlSelfRef.tb_top__DOT__chk__DOT__wr_wait)) {
                __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44 = 0x0000000fU;
                vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15U] 
                    = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15U]);
                if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[15U])))) {
                    if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                              & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44))))) {
                        vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44)] 
                            = VL_TIME_UNITED_Q(1000);
                    }
                    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31 
                        = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44;
                    vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_30 
                        = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31) 
                                  | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                 | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                               | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                              | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                             | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                            | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31))
                            ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                ? "A1a AWVALID held until AWREADY"s
                                : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                    ? "A1b AWADDR stable while stalled"s
                                    : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                        ? "A2a WVALID held until WREADY"s
                                        : ((3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                            ? "A2b WDATA/WSTRB stable while stalled"s
                                            : ((4U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                ? "A3a ARVALID held until ARREADY"s
                                                : (
                                                   (5U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                    ? "A3b ARADDR stable while stalled"s
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                     ? "A4a RVALID held until RREADY"s
                                                     : "A4b RDATA stable while stalled"s)))))))
                            : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31) 
                                      | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                     | (0x0000000aU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                    | (0x0000000bU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                   | (0x0000000cU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                  | (0x0000000dU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                 | (0x0000000eU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)) 
                                | (0x0000000fU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31))
                                ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                    ? "A4c RRESP stable while stalled"s
                                    : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                        ? "A5a BVALID held until BREADY"s
                                        : ((0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                            ? "A5b BRESP stable while stalled"s
                                            : ((0x0000000bU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                ? "A6  BVALID only after a completed write"s
                                                : (
                                                   (0x0000000cU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                    ? "A7  RVALID only after an accepted read"s
                                                    : 
                                                   ((0x0000000dU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                     ? "A8  BRESP is OKAY (design rule)"s
                                                     : 
                                                    ((0x0000000eU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                                      ? "A9  RRESP is OKAY (design rule)"s
                                                      : "L1  write always answered within bound"s)))))))
                                : ((0x00000010U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_31)
                                    ? "L2  read always answered within bound"s
                                    : "?"s)));
                    vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_45 
                        = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_30;
                    VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                 , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_44
                                 , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_45)
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                }
                __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 = 1U;
            }
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_rvalid_cyc 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_rvalid_cyc);
            __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 = 0U;
        } else if (vlSelfRef.tb_top__DOT__dut__DOT__ar_hs) {
            __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 = 1U;
        } else if ((0U != vlSelfRef.tb_top__DOT__chk__DOT__rd_wait)) {
            __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 
                = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__rd_wait);
            if ((0x00000064U <= vlSelfRef.tb_top__DOT__chk__DOT__rd_wait)) {
                __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46 = 0x00000010U;
                vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16U] 
                    = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16U]);
                if (VL_UNLIKELY((VL_GTS_IQQ(64, 0ULL, vlSelfRef.tb_top__DOT__chk__DOT__t_first[16U])))) {
                    if (VL_LIKELY(((0x13U >= (0x0000001fU 
                                              & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46))))) {
                        vlSelfRef.tb_top__DOT__chk__DOT__t_first[(0x0000001fU 
                                                                  & __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46)] 
                            = VL_TIME_UNITED_Q(1000);
                    }
                    __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33 
                        = __Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46;
                    vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_32 
                        = (((((((((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33) 
                                  | (1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                 | (2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                | (3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                               | (4U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                              | (5U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                             | (6U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                            | (7U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33))
                            ? ((0U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                ? "A1a AWVALID held until AWREADY"s
                                : ((1U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                    ? "A1b AWADDR stable while stalled"s
                                    : ((2U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                        ? "A2a WVALID held until WREADY"s
                                        : ((3U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                            ? "A2b WDATA/WSTRB stable while stalled"s
                                            : ((4U 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                ? "A3a ARVALID held until ARREADY"s
                                                : (
                                                   (5U 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                    ? "A3b ARADDR stable while stalled"s
                                                    : 
                                                   ((6U 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                     ? "A4a RVALID held until RREADY"s
                                                     : "A4b RDATA stable while stalled"s)))))))
                            : (((((((((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33) 
                                      | (9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                     | (0x0000000aU 
                                        == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                    | (0x0000000bU 
                                       == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                   | (0x0000000cU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                  | (0x0000000dU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                 | (0x0000000eU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)) 
                                | (0x0000000fU == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33))
                                ? ((8U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                    ? "A4c RRESP stable while stalled"s
                                    : ((9U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                        ? "A5a BVALID held until BREADY"s
                                        : ((0x0000000aU 
                                            == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                            ? "A5b BRESP stable while stalled"s
                                            : ((0x0000000bU 
                                                == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                ? "A6  BVALID only after a completed write"s
                                                : (
                                                   (0x0000000cU 
                                                    == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                    ? "A7  RVALID only after an accepted read"s
                                                    : 
                                                   ((0x0000000dU 
                                                     == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                     ? "A8  BRESP is OKAY (design rule)"s
                                                     : 
                                                    ((0x0000000eU 
                                                      == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                                      ? "A9  RRESP is OKAY (design rule)"s
                                                      : "L1  write always answered within bound"s)))))))
                                : ((0x00000010U == __Vfunc_tb_top__DOT__chk__DOT__tag_of__i_33)
                                    ? "L2  read always answered within bound"s
                                    : "?"s)));
                    vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_47 
                        = vlSelfRef.__Vnontrivs.__Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_32;
                    VL_WRITEF_NX("[ASSERT-FAIL] #%0d %s : first failure at t=%0t\n",4, 'T',-9
                                 , '~',32,__Vtask_tb_top__DOT__chk__DOT__note_fail__idx_46
                                 , 'S',&(vlSelfRef.__Vnontrivs.__Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_47)
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                }
                __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 = 1U;
            }
        }
        if (((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid) 
             & (~ (::IData)(vlSelfRef.tb_top__DOT__s_axi_bready)))) {
            vlSelfRef.tb_top__DOT__chk__DOT__c_stall_b 
                = (1ULL + vlSelfRef.tb_top__DOT__chk__DOT__c_stall_b);
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__b_hs) {
            vlSelfRef.tb_top__DOT__chk__DOT__n_b = 
                ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__n_b);
            vlSelfRef.tb_top__DOT__chk__DOT__aw_seen = 0U;
            vlSelfRef.tb_top__DOT__chk__DOT__w_seen = 0U;
            vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid = 0U;
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__wr_complete) {
            vlSelfRef.tb_top__DOT__dut__DOT__i = 4U;
            if ((1U & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_strb))) {
                __Vdly_Val__tb_top__DOT__dut__DOT__regs_57 
                    = (0x000000ffU & vlSelfRef.tb_top__DOT__dut__DOT__wr_data);
                __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_58 
                    = (3U & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_addr) 
                             >> 2U));
                __Vdly_Set__tb_top__DOT__dut__DOT__regs_59 = 1U;
            }
            if ((2U & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_strb))) {
                __Vdly_Val__tb_top__DOT__dut__DOT__regs_60 
                    = (0x000000ffU & (vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                                      >> 8U));
                __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_61 
                    = (3U & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_addr) 
                             >> 2U));
                __Vdly_Set__tb_top__DOT__dut__DOT__regs_62 = 1U;
            }
            if ((4U & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_strb))) {
                __Vdly_Val__tb_top__DOT__dut__DOT__regs_63 
                    = (0x000000ffU & (vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                                      >> 0x10U));
                __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_64 
                    = (3U & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_addr) 
                             >> 2U));
                __Vdly_Set__tb_top__DOT__dut__DOT__regs_65 = 1U;
            }
            if ((8U & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_strb))) {
                __Vdly_Val__tb_top__DOT__dut__DOT__regs_66 
                    = (vlSelfRef.tb_top__DOT__dut__DOT__wr_data 
                       >> 0x18U);
                __Vdly_Dim0__tb_top__DOT__dut__DOT__regs_67 
                    = (3U & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__wr_addr) 
                             >> 2U));
                __Vdly_Set__tb_top__DOT__dut__DOT__regs_68 = 1U;
            }
            vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bresp = 0U;
            vlSelfRef.tb_top__DOT__dut__DOT__aw_pending = 0U;
            vlSelfRef.tb_top__DOT__dut__DOT__w_pending = 0U;
            vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid = 1U;
        }
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__i = 4U;
        vlSelfRef.tb_top__DOT__chk__DOT__n_ar = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT__n_b = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT__n_aw = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT__n_w = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__lfsr = 0xace1U;
        vlSelfRef.tb_top__DOT__chk__DOT__n_r = 0U;
        __Vdly_Set__tb_top__DOT__dut__DOT__regs_69 = 1U;
        __Vdly__tb_top__DOT__chk__DOT__wr_wait_7 = 0U;
        __Vdly__tb_top__DOT__chk__DOT__rd_wait_8 = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rresp = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bresp = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rdata = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT__aw_seen = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT__w_seen = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__aw_pending = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__w_pending = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid = 0U;
    }
    vlSelfRef.tb_top__DOT__chk__DOT__wr_wait = __Vdly__tb_top__DOT__chk__DOT__wr_wait_7;
    vlSelfRef.tb_top__DOT__chk__DOT__rd_wait = __Vdly__tb_top__DOT__chk__DOT__rd_wait_8;
    if (__Vdly_Set__tb_top__DOT__dut__DOT__regs_59) {
        vlSelfRef.tb_top__DOT__dut__DOT__regs[__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_58] 
            = ((0xffffff00U & vlSelfRef.tb_top__DOT__dut__DOT__regs
                [__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_58]) 
               | (::IData)(__Vdly_Val__tb_top__DOT__dut__DOT__regs_57));
    }
    if (__Vdly_Set__tb_top__DOT__dut__DOT__regs_62) {
        vlSelfRef.tb_top__DOT__dut__DOT__regs[__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_61] 
            = ((0xffff00ffU & vlSelfRef.tb_top__DOT__dut__DOT__regs
                [__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_61]) 
               | ((::IData)(__Vdly_Val__tb_top__DOT__dut__DOT__regs_60) 
                  << 8U));
    }
    if (__Vdly_Set__tb_top__DOT__dut__DOT__regs_65) {
        vlSelfRef.tb_top__DOT__dut__DOT__regs[__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_64] 
            = ((0xff00ffffU & vlSelfRef.tb_top__DOT__dut__DOT__regs
                [__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_64]) 
               | ((::IData)(__Vdly_Val__tb_top__DOT__dut__DOT__regs_63) 
                  << 0x00000010U));
    }
    if (__Vdly_Set__tb_top__DOT__dut__DOT__regs_68) {
        vlSelfRef.tb_top__DOT__dut__DOT__regs[__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_67] 
            = ((0x00ffffffU & vlSelfRef.tb_top__DOT__dut__DOT__regs
                [__Vdly_Dim0__tb_top__DOT__dut__DOT__regs_67]) 
               | ((::IData)(__Vdly_Val__tb_top__DOT__dut__DOT__regs_66) 
                  << 0x00000018U));
    }
    if (__Vdly_Set__tb_top__DOT__dut__DOT__regs_69) {
        vlSelfRef.tb_top__DOT__dut__DOT__regs[0U] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__regs[1U] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__regs[2U] = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__regs[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_2_1 = vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awaddr_2;
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_9_1 = vlSelfRef.__Vsampled_tb_top__DOT__s_axi_araddr_7;
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_12_1 = vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rdata_9;
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_17_1 = vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bresp_12;
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_14_1 = vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rresp_10;
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_5_1 = vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wdata_4;
    vlSelfRef.tb_top__DOT__chk__DOT___Vpast_6_1 = vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wstrb_5;
    vlSelfRef.tb_top__DOT__dut__DOT__lfsr_fb = (1U 
                                                & VL_REDXOR_16(
                                                               (0xb400U 
                                                                & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr))));
    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid = 
        ((::IData)(vlSelfRef.tb_top__DOT__aresetn) 
         && (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__ar_hs));
    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready 
        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending)) 
                 & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                    >> 3U)));
    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready = 
        (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_pending)) 
               & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                  >> 5U)));
    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready 
        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid)) 
                 & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                    >> 7U)));
}

void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___0__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awvalid_1) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_awready_18)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___0__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___2__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wvalid_3) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_wready_19)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___2__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___4__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_arvalid_6) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_arready_20)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___4__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___9__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_bready_22)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___9__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___6__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_rready_21)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___6__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___1__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_awvalid_1) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_awready_18)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___1__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___5__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_arvalid_6) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_arready_20)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___5__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___7__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_rready_21)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___7__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___10__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_bready_22)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___10__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___8__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_rready_21)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___8__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___3__s2 
        = (((vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_ON) 
             & ((::IData)(vlSelfRef.__Vsampled_tb_top__DOT__s_axi_wvalid_3) 
                & (~ (::IData)(vlSelfRef.__Vsampled_tb_top__DOT__dut__DOT__s_axi_wready_19)))) 
            & (::IData)(vlSelfRef.tb_top__DOT__aresetn)) 
           & (vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___3__kill 
              == vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL)));
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___0__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___2__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___4__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___9__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___6__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___1__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___5__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___7__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___10__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___8__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
    vlSelfRef.tb_top__DOT__chk__DOT____Vnfa___3__kill 
        = vlSymsp->_vm_contextp__->assertCtlGet<1, 1>(VerilatedAssertCtlQuery::ASSERT_CTL_KILL);
}

void Vtb_top___024root___timing_ready(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_ready\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((4ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.ready(
                                                              "@(negedge tb_top.aclk)");
    }
    if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.ready(
                                                              "@(posedge tb_top.aclk)");
    }
}

void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_resume\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.moveToResumeQueue(
                                                                      "@(negedge tb_top.aclk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.moveToResumeQueue(
                                                                      "@(posedge tb_top.aclk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.resume(
                                                           "@(negedge tb_top.aclk)");
    vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.resume(
                                                           "@(posedge tb_top.aclk)");
    if ((((8ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
        vlSelfRef.__Vnontrivs.__VdlySched.resume();
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_top___024root____VbeforeTrig_hf7614637__0(Vtb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____VbeforeTrig_hf7614637__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((((~ (::IData)(vlSelfRef.tb_top__DOT__aclk)) 
                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0)) 
                                       << 2U) | ((::IData)(vlSelfRef.tb_top__DOT__aclk) 
                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0 
        = vlSelfRef.tb_top__DOT__aclk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_top___024root____VbeforeTrig_hf7614772__0(Vtb_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____VbeforeTrig_hf7614772__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlUnpacked<::QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (::QData)((::IData)(((((~ (::IData)(vlSelfRef.tb_top__DOT__aclk)) 
                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0)) 
                                       << 2U) | ((::IData)(vlSelfRef.tb_top__DOT__aclk) 
                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0 
        = vlSelfRef.tb_top__DOT__aclk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hf7614772__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__Vnontrivs.__VtrigSched_hf7614637__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
