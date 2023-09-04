// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_tb.h for the primary calling header

#include "verilated.h"

#include "VFSM_tb__Syms.h"
#include "VFSM_tb__Syms.h"
#include "VFSM_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__stl(VFSM_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_tb___024root___eval_triggers__stl(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFSM_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VFSM_tb___024root___eval_postponed__TOP(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_postponed__TOP\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->FSM_tb__DOT____Vstrobe0)) {
        VL_WRITEF("t: %20# ps, LEDR: %b, HEX0: %b, HEX1: %b, HEX2: %b, HEX3: %b\n",
                  64,VL_TIME_UNITED_Q(1),18,(((IData)(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED) 
                                              << 9U) 
                                             | (IData)(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED)),
                  7,(IData)(vlSelf->FSM_tb__DOT__HEX0),
                  7,vlSelf->FSM_tb__DOT__HEX1,7,(IData)(vlSelf->FSM_tb__DOT__HEX2),
                  7,vlSelf->FSM_tb__DOT__HEX3);
        vlSelf->FSM_tb__DOT____Vstrobe0 = 0U;
    }
}
