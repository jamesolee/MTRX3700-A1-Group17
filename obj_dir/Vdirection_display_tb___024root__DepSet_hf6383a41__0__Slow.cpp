// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdirection_display_tb.h for the primary calling header

#include "verilated.h"

#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__stl(Vdirection_display_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_triggers__stl(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdirection_display_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_postponed__TOP(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_postponed__TOP\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->direction_display_tb__DOT____Vstrobe0)) {
        VL_WRITEF("t: %20# ps, enable: %b, direc: %b, HEX0: %b, HEX1: %b, HEX2: %b, HEX3: %b\n",
                  64,VL_TIME_UNITED_Q(1),1,(IData)(vlSelf->direction_display_tb__DOT__enable),
                  2,vlSelf->direction_display_tb__DOT__direc,
                  7,(IData)(vlSelf->direction_display_tb__DOT__HEX0),
                  7,vlSelf->direction_display_tb__DOT__HEX1,
                  7,(IData)(vlSelf->direction_display_tb__DOT__HEX2),
                  7,vlSelf->direction_display_tb__DOT__HEX3);
        vlSelf->direction_display_tb__DOT____Vstrobe0 = 0U;
    }
}
