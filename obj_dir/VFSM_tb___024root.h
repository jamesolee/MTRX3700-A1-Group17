// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFSM_tb.h for the primary calling header

#ifndef VERILATED_VFSM_TB___024ROOT_H_
#define VERILATED_VFSM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VFSM_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFSM_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ FSM_tb__DOT__CLOCK50;
    CData/*3:0*/ FSM_tb__DOT__KEY;
    CData/*3:0*/ FSM_tb__DOT__SW;
    CData/*6:0*/ FSM_tb__DOT__HEX0;
    CData/*6:0*/ FSM_tb__DOT__HEX1;
    CData/*6:0*/ FSM_tb__DOT__HEX2;
    CData/*6:0*/ FSM_tb__DOT__HEX3;
    CData/*0:0*/ FSM_tb__DOT____Vstrobe0;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__save;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__execute;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__reset;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__delete;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__timer_enable;
    CData/*3:0*/ FSM_tb__DOT__DUT__DOT__instruction;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__empty;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__full;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__timer;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed;
    CData/*0:0*/ FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed;
    CData/*0:0*/ __Vtrigprevexpr___TOP__FSM_tb__DOT__CLOCK50__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED;
    SData/*8:0*/ FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED;
    SData/*8:0*/ FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr;
    SData/*8:0*/ FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr;
    IData/*31:0*/ FSM_tb__DOT__DUT__DOT__state;
    IData/*27:0*/ FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt;
    IData/*31:0*/ FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count;
    IData/*31:0*/ FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count;
    IData/*31:0*/ FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count;
    IData/*31:0*/ FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 256> FSM_tb__DOT__DUT__DOT__u_fifo__DOT__ram;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFSM_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFSM_tb___024root(VFSM_tb__Syms* symsp, const char* v__name);
    ~VFSM_tb___024root();
    VL_UNCOPYABLE(VFSM_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
