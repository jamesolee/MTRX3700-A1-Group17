// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdirection_display_tb.h for the primary calling header

#include "verilated.h"

#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb___024root.h"

VlCoroutine Vdirection_display_tb___024root___eval_initial__TOP__0(Vdirection_display_tb___024root* vlSelf);
VlCoroutine Vdirection_display_tb___024root___eval_initial__TOP__1(Vdirection_display_tb___024root* vlSelf);

void Vdirection_display_tb___024root___eval_initial(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_initial\n"); );
    // Body
    Vdirection_display_tb___024root___eval_initial__TOP__0(vlSelf);
    Vdirection_display_tb___024root___eval_initial__TOP__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vdirection_display_tb___024root___eval_initial__TOP__0(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    while (1U) {
        vlSelf->direction_display_tb__DOT____Vstrobe0 = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "direction_display_tb.sv", 
                                           20);
    }
}

extern const VlUnpacked<CData/*6:0*/, 8> Vdirection_display_tb__ConstPool__TABLE_h549c705c_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vdirection_display_tb__ConstPool__TABLE_h70951755_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vdirection_display_tb__ConstPool__TABLE_hfb984b4f_0;
extern const VlUnpacked<CData/*6:0*/, 8> Vdirection_display_tb__ConstPool__TABLE_hb923c2b3_0;

VL_INLINE_OPT void Vdirection_display_tb___024root___act_sequent__TOP__0(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->direction_display_tb__DOT__direc) 
                     << 1U) | (IData)(vlSelf->direction_display_tb__DOT__enable));
    vlSelf->direction_display_tb__DOT__HEX0 = Vdirection_display_tb__ConstPool__TABLE_h549c705c_0
        [__Vtableidx1];
    vlSelf->direction_display_tb__DOT__HEX1 = Vdirection_display_tb__ConstPool__TABLE_h70951755_0
        [__Vtableidx1];
    vlSelf->direction_display_tb__DOT__HEX2 = Vdirection_display_tb__ConstPool__TABLE_hfb984b4f_0
        [__Vtableidx1];
    vlSelf->direction_display_tb__DOT__HEX3 = Vdirection_display_tb__ConstPool__TABLE_hb923c2b3_0
        [__Vtableidx1];
}

void Vdirection_display_tb___024root___eval_act(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vdirection_display_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdirection_display_tb___024root___eval_nba(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdirection_display_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdirection_display_tb___024root___eval_triggers__act(Vdirection_display_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__act(Vdirection_display_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdirection_display_tb___024root___timing_resume(Vdirection_display_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__nba(Vdirection_display_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___eval_postponed(Vdirection_display_tb___024root* vlSelf);

void Vdirection_display_tb___024root___eval(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vdirection_display_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdirection_display_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("direction_display_tb.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vdirection_display_tb___024root___timing_resume(vlSelf);
                Vdirection_display_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdirection_display_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("direction_display_tb.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdirection_display_tb___024root___eval_nba(vlSelf);
        }
    }
    Vdirection_display_tb___024root___eval_postponed(vlSelf);
}

void Vdirection_display_tb___024root___timing_resume(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vdirection_display_tb___024root___eval_debug_assertions(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
