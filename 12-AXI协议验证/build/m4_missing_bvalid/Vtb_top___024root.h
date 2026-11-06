// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        ::CData/*0:0*/ tb_top__DOT__aclk;
        ::CData/*0:0*/ tb_top__DOT__aresetn;
        ::CData/*7:0*/ tb_top__DOT__s_axi_awaddr;
        ::CData/*0:0*/ tb_top__DOT__s_axi_awvalid;
        ::CData/*3:0*/ tb_top__DOT__s_axi_wstrb;
        ::CData/*0:0*/ tb_top__DOT__s_axi_wvalid;
        ::CData/*0:0*/ tb_top__DOT__s_axi_bready;
        ::CData/*7:0*/ tb_top__DOT__s_axi_araddr;
        ::CData/*0:0*/ tb_top__DOT__s_axi_arvalid;
        ::CData/*0:0*/ tb_top__DOT__s_axi_rready;
        ::CData/*7:0*/ tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__addr;
        ::CData/*3:0*/ tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__strb;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT__b_hs;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT__aw_seen;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT__w_seen;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT__wr_complete_now;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___0__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___1__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___2__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___3__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___4__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___5__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___6__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___7__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___8__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___9__s2;
        ::CData/*0:0*/ tb_top__DOT__chk__DOT____Vnfa___10__s2;
        ::CData/*7:0*/ tb_top__DOT__chk__DOT___Vpast_2_1;
        ::CData/*3:0*/ tb_top__DOT__chk__DOT___Vpast_6_1;
        ::CData/*7:0*/ tb_top__DOT__chk__DOT___Vpast_9_1;
        ::CData/*1:0*/ tb_top__DOT__chk__DOT___Vpast_14_1;
        ::CData/*1:0*/ tb_top__DOT__chk__DOT___Vpast_17_1;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__s_axi_awready;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__s_axi_wready;
        ::CData/*1:0*/ tb_top__DOT__dut__DOT__s_axi_bresp;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__s_axi_bvalid;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__s_axi_arready;
        ::CData/*1:0*/ tb_top__DOT__dut__DOT__s_axi_rresp;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__s_axi_rvalid;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__aw_pending;
        ::CData/*7:0*/ tb_top__DOT__dut__DOT__aw_addr_q;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__w_pending;
        ::CData/*3:0*/ tb_top__DOT__dut__DOT__w_strb_q;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__lfsr_fb;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__aw_hs;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__w_hs;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__ar_hs;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__r_hs;
        ::CData/*0:0*/ tb_top__DOT__dut__DOT__wr_complete;
        ::CData/*7:0*/ tb_top__DOT__dut__DOT__wr_addr;
        ::CData/*3:0*/ tb_top__DOT__dut__DOT__wr_strb;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__aresetn_0;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__s_axi_awvalid_1;
        ::CData/*7:0*/ __Vsampled_tb_top__DOT__s_axi_awaddr_2;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__s_axi_wvalid_3;
        ::CData/*3:0*/ __Vsampled_tb_top__DOT__s_axi_wstrb_5;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__s_axi_arvalid_6;
        ::CData/*7:0*/ __Vsampled_tb_top__DOT__s_axi_araddr_7;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_rvalid_8;
        ::CData/*1:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_rresp_10;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_bvalid_11;
        ::CData/*1:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_bresp_12;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_awready_18;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_wready_19;
    };
    struct {
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_arready_20;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__s_axi_rready_21;
        ::CData/*0:0*/ __Vsampled_tb_top__DOT__s_axi_bready_22;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__aclk__0;
        ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__aresetn__0;
        ::SData/*15:0*/ tb_top__DOT__dut__DOT__lfsr;
        ::IData/*31:0*/ tb_top__DOT____VlemExpr_2;
        ::IData/*31:0*/ tb_top__DOT____VlemExpr_1;
        ::IData/*31:0*/ tb_top__DOT____VlemExpr_0;
        ::IData/*31:0*/ tb_top__DOT__s_axi_wdata;
        ::IData/*31:0*/ tb_top__DOT__sb_errors;
        ::IData/*31:0*/ tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__data;
        ::IData/*31:0*/ tb_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rdata;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__n_aw;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__n_w;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__n_b;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__n_ar;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__n_r;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__wr_wait;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__rd_wait;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___0__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___1__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___2__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___3__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___4__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___5__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___6__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___7__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___8__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___9__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT____Vnfa___10__kill;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT___Vpast_5_1;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT___Vpast_12_1;
        ::IData/*31:0*/ tb_top__DOT__chk__DOT__unnamedblk2__DOT__total;
        ::IData/*31:0*/ tb_top__DOT__dut__DOT__s_axi_rdata;
        ::IData/*31:0*/ tb_top__DOT__dut__DOT__w_data_q;
        ::IData/*31:0*/ tb_top__DOT__dut__DOT__wr_data;
        ::IData/*31:0*/ tb_top__DOT__dut__DOT__i;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__s_axi_wdata_4;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__dut__DOT__s_axi_rdata_9;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__chk__DOT__n_aw_13;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__chk__DOT__n_w_14;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__chk__DOT__n_b_15;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__chk__DOT__n_ar_16;
        ::IData/*31:0*/ __Vsampled_tb_top__DOT__chk__DOT__n_r_17;
        ::IData/*31:0*/ __Vi;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_stall_aw;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_stall_w;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_stall_ar;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_stall_r;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_stall_b;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_bvalid_cyc;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_rvalid_cyc;
        ::QData/*63:0*/ tb_top__DOT__chk__DOT__c_wr_complete;
        ::VlUnpacked<::IData/*31:0*/, 4> tb_top__DOT__model;
        ::VlUnpacked<::QData/*63:0*/, 20> tb_top__DOT__chk__DOT__t_first;
        ::VlUnpacked<::IData/*31:0*/, 20> tb_top__DOT__chk__DOT__n_fail;
        ::VlUnpacked<::IData/*31:0*/, 4> tb_top__DOT__dut__DOT__regs;
        ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
        ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
        ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;
        ::VlUnpacked<::CData/*0:0*/, 6> __VtraceActivity;
    };

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_15;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_0;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_17;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_2;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_19;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_4;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_21;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_6;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_23;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_8;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_25;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_10;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_27;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_12;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_29;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_14;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_31;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_16;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_33;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_18;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_35;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_20;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_37;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_22;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_39;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_24;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_41;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_26;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_43;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_28;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_45;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_30;
            ::std::string __Vtask_tb_top__DOT__chk__DOT__note_fail____VlefCall_0__tag_of_47;
            ::std::string __Vfunc_tb_top__DOT__chk__DOT__tag_of__Vfuncout_32;
            ::VlDelayScheduler __VdlySched;
            ::VlTriggerScheduler __VtrigSched_hf7614637__0;
            ::VlTriggerScheduler __VtrigSched_hf7614772__0;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);
    VL_UNMOVABLE(Vtb_top___024root);

    // INTERNAL METHODS
};


#endif  // guard
