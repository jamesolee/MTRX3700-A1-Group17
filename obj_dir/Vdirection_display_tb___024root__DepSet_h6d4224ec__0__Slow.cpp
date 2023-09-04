// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdirection_display_tb.h for the primary calling header

#include "verilated.h"

#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb___024root.h"

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_static(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_final(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_triggers__stl(Vdirection_display_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__stl(Vdirection_display_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___eval_stl(Vdirection_display_tb___024root* vlSelf);

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_settle(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdirection_display_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vdirection_display_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("direction_display_tb.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdirection_display_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__stl(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdirection_display_tb___024root___act_sequent__TOP__0(Vdirection_display_tb___024root* vlSelf);

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_stl(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdirection_display_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__act(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__nba(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_postponed__TOP(Vdirection_display_tb___024root* vlSelf);

VL_ATTR_COLD void Vdirection_display_tb___024root___eval_postponed(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_postponed\n"); );
    // Body
    Vdirection_display_tb___024root___eval_postponed__TOP(vlSelf);
}

VL_ATTR_COLD void Vdirection_display_tb___024root___ctor_var_reset(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->direction_display_tb__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->direction_display_tb__DOT__direc = VL_RAND_RESET_I(2);
    vlSelf->direction_display_tb__DOT__HEX0 = VL_RAND_RESET_I(7);
    vlSelf->direction_display_tb__DOT__HEX1 = VL_RAND_RESET_I(7);
    vlSelf->direction_display_tb__DOT__HEX2 = VL_RAND_RESET_I(7);
    vlSelf->direction_display_tb__DOT__HEX3 = VL_RAND_RESET_I(7);
    vlSelf->direction_display_tb__DOT____Vstrobe0 = VL_RAND_RESET_I(1);
    }
