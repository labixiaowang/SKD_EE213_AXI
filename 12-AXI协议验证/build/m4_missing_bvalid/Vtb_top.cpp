// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_top::Vtb_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vtb_top{_vcontextp__, _vcname__, true} {}

Vtb_top::Vtb_top(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_top__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_top::Vtb_top(const char* _vcname__)
    : Vtb_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_top::~Vtb_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf);
void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf);
VL_ATTR_COLD bool Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vtb_top___024root___eval_sample(Vtb_top___024root* vlSelf);
bool Vtb_top___024root___eval_ico(Vtb_top___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf);
bool Vtb_top___024root___eval_inact(Vtb_top___024root* vlSelf);
bool Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf);
bool Vtb_top___024root___eval_obs(Vtb_top___024root* vlSelf);
bool Vtb_top___024root___eval_react(Vtb_top___024root* vlSelf);
void Vtb_top___024root___eval_postponed(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__stl(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__ico(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__act(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__nba(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__obs(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root___eval_dump_triggers__react(Vtb_top___024root* vlSelf);

void Vtb_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_top::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_top::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_top___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_top::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vtb_top::evalStatic() {
    Vtb_top___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vtb_top::evalInitial() {
    Vtb_top___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vtb_top::evalStl(bool firstIteration) {
    return Vtb_top___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vtb_top::evalSample() {
    Vtb_top___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vtb_top::evalIco(bool firstIteration) {
    return Vtb_top___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vtb_top::evalAct() {
    return Vtb_top___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vtb_top::evalInact() {
    return Vtb_top___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vtb_top::evalNba() {
    return Vtb_top___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vtb_top::evalObs() {
    return Vtb_top___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vtb_top::evalReact() {
    return Vtb_top___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vtb_top::evalPostponed() {
    Vtb_top___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vtb_top::evalFinal() {
    Vtb_top___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_top::dumpTriggersStl() {
    Vtb_top___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_top::dumpTriggersIco() {
    Vtb_top___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_top::dumpTriggersAct() {
    Vtb_top___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_top::dumpTriggersNba() {
    Vtb_top___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_top::dumpTriggersObs() {
    Vtb_top___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_top::dumpTriggersReact() {
    Vtb_top___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vtb_top::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_top::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_top::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_top::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_top::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_top::modelName() const { return "Vtb_top"; }
unsigned Vtb_top::threads() const { return 1; }
void Vtb_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_top___024root__trace_decl_types(tracep);
    Vtb_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 143);
    Vtb_top___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
