// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_tb.h for the primary calling header

#include "verilated.h"

#include "VFSM_tb__Syms.h"
#include "VFSM_tb___024root.h"

VlCoroutine VFSM_tb___024root___eval_initial__TOP__0(VFSM_tb___024root* vlSelf);
VlCoroutine VFSM_tb___024root___eval_initial__TOP__1(VFSM_tb___024root* vlSelf);
VlCoroutine VFSM_tb___024root___eval_initial__TOP__2(VFSM_tb___024root* vlSelf);

void VFSM_tb___024root___eval_initial(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VFSM_tb___024root___eval_initial__TOP__0(vlSelf);
    VFSM_tb___024root___eval_initial__TOP__1(vlSelf);
    VFSM_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__FSM_tb__DOT__CLOCK50__0 
        = vlSelf->FSM_tb__DOT__CLOCK50;
}

VL_INLINE_OPT VlCoroutine VFSM_tb___024root___eval_initial__TOP__0(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    while (1U) {
        vlSelf->FSM_tb__DOT____Vstrobe0 = 1U;
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "FSM_tb.sv", 
                                           23);
    }
}

VL_INLINE_OPT VlCoroutine VFSM_tb___024root___eval_initial__TOP__1(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "FSM_tb.sv", 
                                           27);
        vlSelf->FSM_tb__DOT__CLOCK50 = (1U & (~ (IData)(vlSelf->FSM_tb__DOT__CLOCK50)));
    }
}

void VFSM_tb___024root___eval_act(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_h549c705c_0;
extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_h70951755_0;
extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_hfb984b4f_0;
extern const VlUnpacked<CData/*6:0*/, 8> VFSM_tb__ConstPool__TABLE_hb923c2b3_0;

VL_INLINE_OPT void VFSM_tb___024root___nba_sequent__TOP__0(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__state;
    __Vdly__FSM_tb__DOT__DUT__DOT__state = 0;
    IData/*27:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt = 0;
    CData/*0:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed = 0;
    IData/*31:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count = 0;
    CData/*0:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed = 0;
    IData/*31:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count = 0;
    CData/*0:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed = 0;
    IData/*31:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count = 0;
    CData/*0:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed = 0;
    IData/*31:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count = 0;
    SData/*8:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr = 0;
    SData/*8:0*/ __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr = 0;
    CData/*7:0*/ __Vdlyvdim0__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0;
    __Vdlyvdim0__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvval__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0;
    __Vdlyvval__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0;
    __Vdlyvset__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 = 0;
    // Body
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt;
    __Vdlyvset__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 = 0U;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr;
    __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr 
        = vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr;
    __Vdly__FSM_tb__DOT__DUT__DOT__state = vlSelf->FSM_tb__DOT__DUT__DOT__state;
    if (vlSelf->FSM_tb__DOT__DUT__DOT__reset) {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr = 0U;
        __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr = 0U;
    } else {
        if (vlSelf->FSM_tb__DOT__DUT__DOT__delete) {
            __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr 
                = (0x1ffU & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr) 
                             - (IData)(1U)));
        } else if (((1U == vlSelf->FSM_tb__DOT__DUT__DOT__state) 
                    & (~ (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__full)))) {
            __Vdlyvval__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 
                = vlSelf->FSM_tb__DOT__SW;
            __Vdlyvset__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 = 1U;
            __Vdlyvdim0__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0 
                = (0xffU & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr));
            __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr)));
        }
        if ((1U & (~ (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__delete)))) {
            if (((3U == vlSelf->FSM_tb__DOT__DUT__DOT__state) 
                 & (~ (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__empty)))) {
                vlSelf->FSM_tb__DOT__DUT__DOT__instruction 
                    = vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram
                    [(0xffU & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr))];
                __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr)));
            }
        }
    }
    if ((0U == vlSelf->FSM_tb__DOT__DUT__DOT__state)) {
        __Vdly__FSM_tb__DOT__DUT__DOT__state = ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__save)
                                                 ? 1U
                                                 : 0U);
    } else if ((1U == vlSelf->FSM_tb__DOT__DUT__DOT__state)) {
        __Vdly__FSM_tb__DOT__DUT__DOT__state = ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__reset)
                                                 ? 0U
                                                 : 2U);
    } else if ((2U == vlSelf->FSM_tb__DOT__DUT__DOT__state)) {
        __Vdly__FSM_tb__DOT__DUT__DOT__state = ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__reset)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__save)
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__execute) 
                                                   | (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__full))
                                                   ? 3U
                                                   : 2U)));
    } else if ((3U == vlSelf->FSM_tb__DOT__DUT__DOT__state)) {
        __Vdly__FSM_tb__DOT__DUT__DOT__state = ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__reset)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__timer)
                                                  ? 4U
                                                  : 3U));
    } else if ((4U == vlSelf->FSM_tb__DOT__DUT__DOT__state)) {
        __Vdly__FSM_tb__DOT__DUT__DOT__state = (((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__empty) 
                                                 | (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__reset))
                                                 ? 0U
                                                 : 3U);
    }
    vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr;
    if (__Vdlyvset__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0) {
        vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram[__Vdlyvdim0__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0] 
            = __Vdlyvval__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram__v0;
    }
    vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr;
    vlSelf->FSM_tb__DOT__DUT__DOT__state = __Vdly__FSM_tb__DOT__DUT__DOT__state;
    if (((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) >> 3U)) 
         != (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed))) {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed 
            = (1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                     >> 3U));
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count = 0U;
    } else if ((2U == vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count)) {
        vlSelf->FSM_tb__DOT__DUT__DOT__save = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed;
    } else {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count 
            = ((IData)(1U) + vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count);
    }
    if (((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) >> 2U)) 
         != (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed))) {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed 
            = (1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                     >> 2U));
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count = 0U;
    } else if ((2U == vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count)) {
        vlSelf->FSM_tb__DOT__DUT__DOT__execute = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed;
    } else {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count 
            = ((IData)(1U) + vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count);
    }
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
    if (((1U & (IData)(vlSelf->FSM_tb__DOT__KEY)) != (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed))) {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed 
            = (1U & (IData)(vlSelf->FSM_tb__DOT__KEY));
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count = 0U;
    } else if ((2U == vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count)) {
        vlSelf->FSM_tb__DOT__DUT__DOT__delete = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed;
    } else {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count 
            = ((IData)(1U) + vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count);
    }
    if (((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) >> 1U)) 
         != (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed))) {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed 
            = (1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                     >> 1U));
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count = 0U;
    } else if ((2U == vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count)) {
        vlSelf->FSM_tb__DOT__DUT__DOT__reset = vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed;
    } else {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count 
            = ((IData)(1U) + vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count);
    }
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count;
    if (vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable) {
        if ((0x2faf07fU == vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt)) {
            vlSelf->FSM_tb__DOT__DUT__DOT__timer = 1U;
            __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt = 0U;
        } else {
            __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt 
                = (0xfffffffU & ((IData)(1U) + vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt));
            vlSelf->FSM_tb__DOT__DUT__DOT__timer = 0U;
        }
    } else {
        __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt = 0U;
        vlSelf->FSM_tb__DOT__DUT__DOT__timer = 0U;
    }
    vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt;
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
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed;
    vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count 
        = __Vdly__FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count;
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

void VFSM_tb___024root___eval_nba(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFSM_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VFSM_tb___024root___eval_triggers__act(VFSM_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__act(VFSM_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VFSM_tb___024root___timing_resume(VFSM_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___dump_triggers__nba(VFSM_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VFSM_tb___024root___eval_postponed(VFSM_tb___024root* vlSelf);

void VFSM_tb___024root___eval(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VFSM_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VFSM_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("FSM_tb.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VFSM_tb___024root___timing_resume(vlSelf);
                VFSM_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VFSM_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("FSM_tb.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VFSM_tb___024root___eval_nba(vlSelf);
        }
    }
    VFSM_tb___024root___eval_postponed(vlSelf);
}

void VFSM_tb___024root___timing_resume(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void VFSM_tb___024root___eval_debug_assertions(VFSM_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
