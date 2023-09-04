// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_tb.h for the primary calling header

#include "verilated.h"

#include "VFSM_tb__Syms.h"
#include "VFSM_tb___024root.h"

VL_ATTR_COLD void VFSM_tb___024root___eval_static__TOP(VFSM_tb___024root* vlSelf);

VL_ATTR_COLD void VFSM_tb___024root___eval_static(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_static\n"); );
    // Body
    VFSM_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VFSM_tb___024root___eval_static__TOP(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->FSM_tb__DOT__DUT__DOT__state = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count = 0U;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed = 0U;
}

VL_ATTR_COLD void VFSM_tb___024root___eval_final(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void VFSM_tb___024root___eval_triggers__stl(VFSM_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__stl(VFSM_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___eval_stl(VFSM_tb___024root* vlSelf);

VL_ATTR_COLD void VFSM_tb___024root___eval_settle(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VFSM_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VFSM_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("FSM_tb.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VFSM_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__stl(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_h549c705c_0;
extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_h70951755_0;
extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_hfb984b4f_0;
extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_hb923c2b3_0;

VL_ATTR_COLD void VFSM_tb___024root___stl_sequent__TOP__0(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->FSM_tb__DOT__DUT__DOT__full = (1U & (~ 
                                                 (((0xffU 
                                                    & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr)) 
                                                   != 
                                                   (0xffU 
                                                    & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr))) 
                                                  | ((1U 
                                                      & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr) 
                                                         >> 8U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr) 
                                                         >> 8U))))));
    vlSelf->FSM_tb__DOT__DUT__DOT__empty = ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr) 
                                            == (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr));
    vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable = (
                                                   (3U 
                                                    == vlSelf->FSM_tb__DOT__DUT__DOT__state) 
                                                   | (4U 
                                                      == vlSelf->FSM_tb__DOT__DUT__DOT__state));
    if (vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable) {
        if ((2U & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction))) {
            if ((1U & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction))) {
                if ((0U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                  >> 2U)))) {
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
                } else if ((1U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                         >> 2U)))) {
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 8U;
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 2U;
                } else if ((2U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                         >> 2U)))) {
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0xcU;
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 8U;
                } else if ((3U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                         >> 2U)))) {
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0xfU;
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0xfU;
                } else {
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
                    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
                }
            } else if ((0U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
            } else if ((1U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 2U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 8U;
            } else if ((2U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 8U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0xcU;
            } else if ((3U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0xfU;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0xfU;
            } else {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
            }
        } else if ((1U & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction))) {
            if ((0U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                              >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
            } else if ((1U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0x100U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0x100U;
            } else if ((2U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0x180U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0x180U;
            } else if ((3U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                     >> 2U)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0x1e0U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0x1e0U;
            } else {
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
                vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
            }
        } else if ((0U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                 >> 2U)))) {
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
        } else if ((1U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                 >> 2U)))) {
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 8U;
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 8U;
        } else if ((2U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                 >> 2U)))) {
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0xcU;
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0xcU;
        } else if ((3U == (3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                 >> 2U)))) {
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0xfU;
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0xfU;
        } else {
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
            vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
        }
    } else {
        vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = 0U;
        vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = 0U;
    }
    __Vtableidx1 = ((6U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                           << 1U)) | (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable));
    vlSelf->FSM_tb__DOT__HEX0 = VFSM_tb__ConstPool__TABLE_h549c705c_0
        [__Vtableidx1];
    vlSelf->FSM_tb__DOT__HEX1 = VFSM_tb__ConstPool__TABLE_h70951755_0
        [__Vtableidx1];
    vlSelf->FSM_tb__DOT__HEX2 = VFSM_tb__ConstPool__TABLE_hfb984b4f_0
        [__Vtableidx1];
    vlSelf->FSM_tb__DOT__HEX3 = VFSM_tb__ConstPool__TABLE_hb923c2b3_0
        [__Vtableidx1];
}

VL_ATTR_COLD void VFSM_tb___024root___eval_stl(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VFSM_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__act(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge FSM_tb.CLOCK50)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__nba(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge FSM_tb.CLOCK50)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFSM_tb___024root___eval_postponed__TOP(VFSM_tb___024root* vlSelf);

VL_ATTR_COLD void VFSM_tb___024root___eval_postponed(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_postponed\n"); );
    // Body
    VFSM_tb___024root___eval_postponed__TOP(vlSelf);
}

VL_ATTR_COLD void VFSM_tb___024root___ctor_var_reset(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->FSM_tb__DOT__KEY = VL_RAND_RESET_I(4);
    vlSelf->FSM_tb__DOT__SW = VL_RAND_RESET_I(4);
    vlSelf->FSM_tb__DOT__CLOCK50 = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__HEX0 = VL_RAND_RESET_I(7);
    vlSelf->FSM_tb__DOT__HEX1 = VL_RAND_RESET_I(7);
    vlSelf->FSM_tb__DOT__HEX2 = VL_RAND_RESET_I(7);
    vlSelf->FSM_tb__DOT__HEX3 = VL_RAND_RESET_I(7);
    vlSelf->FSM_tb__DOT____Vstrobe0 = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__save = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__execute = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__delete = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__instruction = VL_RAND_RESET_I(4);
    vlSelf->FSM_tb__DOT__DUT__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__timer = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__state = 0;
    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED = VL_RAND_RESET_I(9);
    vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED = VL_RAND_RESET_I(9);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt = VL_RAND_RESET_I(28);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed = VL_RAND_RESET_I(1);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr = VL_RAND_RESET_I(9);
    vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr = VL_RAND_RESET_I(9);
    vlSelf->__Vtrigprevexpr___TOP__FSM_tb__DOT__CLOCK50__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
