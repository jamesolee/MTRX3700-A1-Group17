// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_tb.h for the primary calling header

#include "verilated.h"

#include "VFSM_tb__Syms.h"
#include "VFSM_tb__Syms.h"
#include "VFSM_tb___024root.h"

VL_INLINE_OPT VlCoroutine VFSM_tb___024root___eval_initial__TOP__2(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_initial__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h8a0bbee6__0;
    // Body
    __Vtemp_h8a0bbee6__0[0U] = 0x2e766364U;
    __Vtemp_h8a0bbee6__0[1U] = 0x5f66736dU;
    __Vtemp_h8a0bbee6__0[2U] = 0x74657374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_h8a0bbee6__0));
    vlSymsp->_traceDumpOpen();
    vlSelf->FSM_tb__DOT__CLOCK50 = 0U;
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       34);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__SW = 0U;
    vlSelf->FSM_tb__DOT__KEY = (8U | (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "FSM_tb.sv", 
                                       38);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (7U & (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       40);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__SW = 4U;
    vlSelf->FSM_tb__DOT__KEY = (8U | (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "FSM_tb.sv", 
                                       44);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (7U & (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       46);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__SW = 8U;
    vlSelf->FSM_tb__DOT__KEY = (8U | (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "FSM_tb.sv", 
                                       50);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (7U & (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__SW = 0xcU;
    vlSelf->FSM_tb__DOT__KEY = (8U | (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "FSM_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (7U & (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__SW = 0xaU;
    vlSelf->FSM_tb__DOT__KEY = (8U | (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "FSM_tb.sv", 
                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (7U & (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (4U | (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "FSM_tb.sv", 
                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FSM_tb__DOT__KEY = (0xbU & (IData)(vlSelf->FSM_tb__DOT__KEY));
    co_await vlSelf->__VdlySched.delay(0x28ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x4b0ULL, nullptr, 
                                       "FSM_tb.sv", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("FSM_tb.sv", 75, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__act(VFSM_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VFSM_tb___024root___eval_triggers__act(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->FSM_tb__DOT__CLOCK50) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FSM_tb__DOT__CLOCK50__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__FSM_tb__DOT__CLOCK50__0 
        = vlSelf->FSM_tb__DOT__CLOCK50;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
