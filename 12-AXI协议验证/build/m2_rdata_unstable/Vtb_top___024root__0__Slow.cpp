// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024root___timing_ready(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_top__DOT__aclk = 0U;
        vlSelfRef.tb_top__DOT__aresetn = 0U;
        vlSelfRef.tb_top__DOT__sb_errors = 0U;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17807112759098222852ull);
        vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2680069245555498327ull);
        vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11441020359666231030ull);
        vlSelfRef.tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12882350582574539655ull);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_2_1 = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_5_1 = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_6_1 = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_9_1 = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_12_1 = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_14_1 = 0U;
        vlSelfRef.tb_top__DOT__chk__DOT___Vpast_17_1 = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__aresetn__0 = 0U;
    Vtb_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((::IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _stl_comb__TOP__0
                    vlSelfRef.tb_top__DOT__dut__DOT__lfsr_fb 
                        = (1U & VL_REDXOR_16((0xb400U 
                                              & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr))));
                    vlSelfRef.tb_top__DOT__dut__DOT__r_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_rready) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid));
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
                    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready 
                        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_rvalid)) 
                                 & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                                    >> 7U)));
                    vlSelfRef.tb_top__DOT__dut__DOT__b_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_bready) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_bvalid));
                    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_awready 
                        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__aw_pending)) 
                                 & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                                    >> 3U)));
                    vlSelfRef.tb_top__DOT__dut__DOT__s_axi_wready 
                        = (1U & ((~ (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__w_pending)) 
                                 & ((::IData)(vlSelfRef.tb_top__DOT__dut__DOT__lfsr) 
                                    >> 5U)));
                    vlSelfRef.tb_top__DOT__dut__DOT__ar_hs 
                        = ((::IData)(vlSelfRef.tb_top__DOT__s_axi_arvalid) 
                           & (::IData)(vlSelfRef.tb_top__DOT__dut__DOT__s_axi_arready));
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
                {
                    // Inlined CFunc: __VtraceActivitySetAll
                    vlSelfRef.__VtraceActivity[0U] = 1U;
                    vlSelfRef.__VtraceActivity[1U] = 1U;
                    vlSelfRef.__VtraceActivity[2U] = 1U;
                    vlSelfRef.__VtraceActivity[3U] = 1U;
                    vlSelfRef.__VtraceActivity[4U] = 1U;
                    vlSelfRef.__VtraceActivity[5U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__obs(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__obs\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__react(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_dump_triggers__react\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_top___024root___eval_final__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[0U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[1U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[2U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[3U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[4U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[5U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[6U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[7U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[8U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[9U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[10U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[11U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[12U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[13U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[14U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[15U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[16U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[17U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[17U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[18U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[18U] = 0U;
    vlSelfRef.tb_top__DOT__chk__DOT__t_first[19U] = 0xffffffffffffffffULL;
    vlSelfRef.tb_top__DOT__chk__DOT__n_fail[19U] = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total = 0U;
    VL_WRITEF_NX("==================== CHECKER SUMMARY ====================\nantecedent hits (a pass is only meaningful if these are > 0):\n  A1 AW stall cycles      : %0d\n  A2 W  stall cycles      : %0d\n  A3 AR stall cycles      : %0d\n  A4 R  stall cycles      : %0d\n  A5 B  stall cycles      : %0d\n  A6 BVALID cycles        : %0d\n  A7 RVALID cycles        : %0d\n  A8 same as A6 / A9 same as A7\n  L1 completed writes     : %0d\n  L2 AR handshakes        : %0d\n---------------------------------------------------------\n",9
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_stall_aw
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_stall_w
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_stall_ar
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_stall_r
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_stall_b
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_bvalid_cyc
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_rvalid_cyc
                 , '#',64,vlSelfRef.tb_top__DOT__chk__DOT__c_wr_complete
                 , '#',32,vlSelfRef.tb_top__DOT__chk__DOT__n_ar);
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0U])))) {
        VL_WRITEF_NX("  FAIL #0 A1a AWVALID held until AWREADY         count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[0U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[0U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1U])))) {
        VL_WRITEF_NX("  FAIL #1 A1b AWADDR stable while stalled        count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[1U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[1U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2U])))) {
        VL_WRITEF_NX("  FAIL #2 A2a WVALID held until WREADY           count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[2U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[2U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3U])))) {
        VL_WRITEF_NX("  FAIL #3 A2b WDATA/WSTRB stable while stalled   count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[3U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[3U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4U])))) {
        VL_WRITEF_NX("  FAIL #4 A3a ARVALID held until ARREADY         count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[4U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[4U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5U])))) {
        VL_WRITEF_NX("  FAIL #5 A3b ARADDR stable while stalled        count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[5U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[5U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6U])))) {
        VL_WRITEF_NX("  FAIL #6 A4a RVALID held until RREADY           count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[6U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[6U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7U])))) {
        VL_WRITEF_NX("  FAIL #7 A4b RDATA stable while stalled         count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[7U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[7U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8U])))) {
        VL_WRITEF_NX("  FAIL #8 A4c RRESP stable while stalled         count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[8U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[8U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9U])))) {
        VL_WRITEF_NX("  FAIL #9 A5a BVALID held until BREADY           count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[9U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[9U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10U])))) {
        VL_WRITEF_NX("  FAIL #10 A5b BRESP stable while stalled         count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[10U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[10U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11U])))) {
        VL_WRITEF_NX("  FAIL #11 A6  BVALID only after a completed write count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[11U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[11U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12U])))) {
        VL_WRITEF_NX("  FAIL #12 A7  RVALID only after an accepted read count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[12U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[12U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13U])))) {
        VL_WRITEF_NX("  FAIL #13 A8  BRESP is OKAY (design rule)        count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[13U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[13U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14U])))) {
        VL_WRITEF_NX("  FAIL #14 A9  RRESP is OKAY (design rule)        count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[14U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[14U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15U])))) {
        VL_WRITEF_NX("  FAIL #15 L1  write always answered within bound count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[15U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[15U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16U])))) {
        VL_WRITEF_NX("  FAIL #16 L2  read always answered within bound  count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[16U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[16U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[17U])))) {
        VL_WRITEF_NX("  FAIL #17 ?                                      count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[17U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[17U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[18U])))) {
        VL_WRITEF_NX("  FAIL #18 ?                                      count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[18U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[18U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, 0U, vlSelfRef.tb_top__DOT__chk__DOT__n_fail[19U])))) {
        VL_WRITEF_NX("  FAIL #19 ?                                      count=%0d first_t=%0d\n",2
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__n_fail[19U]
                     , '~',64,vlSelfRef.tb_top__DOT__chk__DOT__t_first[19U]);
        vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total 
            = ((::IData)(1U) + vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    if ((0U == vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total)) {
        VL_WRITEF_NX("RESULT: PASS (no assertion fired)\n",0);
    } else {
        VL_WRITEF_NX("RESULT: FAIL (%0d assertion(s) fired)\n",1
                     , '~',32,vlSelfRef.tb_top__DOT__chk__DOT__unnamedblk2__DOT__total);
    }
    VL_WRITEF_NX("=========================================================\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
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

bool Vtb_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_top.aclk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_top.aresetn)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_top.aclk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_top__DOT__s_axi_awaddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6389283992361219918ull);
    vlSelf->tb_top__DOT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18335729577559062016ull);
    vlSelf->tb_top__DOT__s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5977470537460696887ull);
    vlSelf->tb_top__DOT__s_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2077302834895227764ull);
    vlSelf->tb_top__DOT__s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13504821279705996011ull);
    vlSelf->tb_top__DOT__s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8555656774540438314ull);
    vlSelf->tb_top__DOT__s_axi_araddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18046700288060893642ull);
    vlSelf->tb_top__DOT__s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9707004884757420041ull);
    vlSelf->tb_top__DOT__s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16100533204368294412ull);
    vlSelf->tb_top__DOT__model[0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7716116646933185384ull);
    VL_UNPACKED_FILL(vlSelf->tb_top__DOT__model.data(), sizeof(vlSelf->tb_top__DOT__model[0]), 4);
    vlSelf->tb_top__DOT__chk__DOT__t_first[0] = 0;
    VL_UNPACKED_FILL(vlSelf->tb_top__DOT__chk__DOT__t_first.data(), sizeof(vlSelf->tb_top__DOT__chk__DOT__t_first[0]), 20);
    vlSelf->tb_top__DOT__chk__DOT__n_fail[0] = 0;
    VL_UNPACKED_FILL(vlSelf->tb_top__DOT__chk__DOT__n_fail.data(), sizeof(vlSelf->tb_top__DOT__chk__DOT__n_fail[0]), 20);
    vlSelf->tb_top__DOT__chk__DOT__aw_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11428760687503421735ull);
    vlSelf->tb_top__DOT__chk__DOT__w_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4659276640202341509ull);
    vlSelf->tb_top__DOT__chk__DOT__n_aw = 0;
    vlSelf->tb_top__DOT__chk__DOT__n_w = 0;
    vlSelf->tb_top__DOT__chk__DOT__n_b = 0;
    vlSelf->tb_top__DOT__chk__DOT__n_ar = 0;
    vlSelf->tb_top__DOT__chk__DOT__n_r = 0;
    vlSelf->tb_top__DOT__chk__DOT__wr_complete_now = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16627889700796501742ull);
    vlSelf->tb_top__DOT__chk__DOT__wr_wait = 0;
    vlSelf->tb_top__DOT__chk__DOT__rd_wait = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_stall_aw = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_stall_w = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_stall_ar = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_stall_r = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_stall_b = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_bvalid_cyc = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_rvalid_cyc = 0;
    vlSelf->tb_top__DOT__chk__DOT__c_wr_complete = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___0__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___0__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___1__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___1__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___2__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___2__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___3__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___3__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___4__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___4__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___5__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___5__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___6__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___6__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___7__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___7__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___8__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___8__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___9__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___9__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___10__kill = 0;
    vlSelf->tb_top__DOT__chk__DOT____Vnfa___10__s2 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_2_1 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_5_1 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_6_1 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_9_1 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_12_1 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_14_1 = 0;
    vlSelf->tb_top__DOT__chk__DOT___Vpast_17_1 = 0;
    vlSelf->tb_top__DOT__dut__DOT__s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653960593432213785ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5442962929363725927ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17361014743251146567ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5212378165904023114ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18052120294320997562ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5935170688622638003ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14280319929833488488ull);
    vlSelf->tb_top__DOT__dut__DOT__s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6612736710180692011ull);
    vlSelf->tb_top__DOT__dut__DOT__regs[0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 758453983388928059ull);
    VL_UNPACKED_FILL(vlSelf->tb_top__DOT__dut__DOT__regs.data(), sizeof(vlSelf->tb_top__DOT__dut__DOT__regs[0]), 4);
    vlSelf->tb_top__DOT__dut__DOT__aw_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12116386086831950262ull);
    vlSelf->tb_top__DOT__dut__DOT__aw_addr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16138420739825565324ull);
    vlSelf->tb_top__DOT__dut__DOT__w_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5810047354093389843ull);
    vlSelf->tb_top__DOT__dut__DOT__w_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14332791580805566425ull);
    vlSelf->tb_top__DOT__dut__DOT__w_strb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10116702815828394122ull);
    vlSelf->tb_top__DOT__dut__DOT__lfsr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1414479798878373356ull);
    vlSelf->tb_top__DOT__dut__DOT__lfsr_fb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16796516951363319196ull);
    vlSelf->tb_top__DOT__dut__DOT__aw_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15888999291708958447ull);
    vlSelf->tb_top__DOT__dut__DOT__w_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2758105751664299174ull);
    vlSelf->tb_top__DOT__dut__DOT__b_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1417474590151040545ull);
    vlSelf->tb_top__DOT__dut__DOT__ar_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14499569811789218326ull);
    vlSelf->tb_top__DOT__dut__DOT__r_hs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13373977880385018647ull);
    vlSelf->tb_top__DOT__dut__DOT__wr_complete = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17720631269817774693ull);
    vlSelf->tb_top__DOT__dut__DOT__wr_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2787523967335059181ull);
    vlSelf->tb_top__DOT__dut__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5061814594214321683ull);
    vlSelf->tb_top__DOT__dut__DOT__wr_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11198670653534439272ull);
    vlSelf->tb_top__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11436521867239703266ull);
    vlSelf->__Vsampled_tb_top__DOT__aresetn_0 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_awvalid_1 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_awaddr_2 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_wvalid_3 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_wdata_4 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_wstrb_5 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_arvalid_6 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_araddr_7 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_rdata_9 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_rresp_10 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_bresp_12 = 0;
    vlSelf->__Vsampled_tb_top__DOT__chk__DOT__n_aw_13 = 0;
    vlSelf->__Vsampled_tb_top__DOT__chk__DOT__n_w_14 = 0;
    vlSelf->__Vsampled_tb_top__DOT__chk__DOT__n_b_15 = 0;
    vlSelf->__Vsampled_tb_top__DOT__chk__DOT__n_ar_16 = 0;
    vlSelf->__Vsampled_tb_top__DOT__chk__DOT__n_r_17 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_awready_18 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_wready_19 = 0;
    vlSelf->__Vsampled_tb_top__DOT__dut__DOT__s_axi_arready_20 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_rready_21 = 0;
    vlSelf->__Vsampled_tb_top__DOT__s_axi_bready_22 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__VactTriggeredAcc[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggeredAcc.data(), sizeof(vlSelf->__VactTriggeredAcc[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__aclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__aresetn__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
    vlSelf->__Vi = 0;
    vlSelf->__VtraceActivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VtraceActivity.data(), sizeof(vlSelf->__VtraceActivity[0]), 6);
}
