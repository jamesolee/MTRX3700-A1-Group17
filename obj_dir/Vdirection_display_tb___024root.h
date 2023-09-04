// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdirection_display_tb.h for the primary calling header

#ifndef VERILATED_VDIRECTION_DISPLAY_TB___024ROOT_H_
#define VERILATED_VDIRECTION_DISPLAY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdirection_display_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdirection_display_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ direction_display_tb__DOT__enable;
    CData/*1:0*/ direction_display_tb__DOT__direc;
    CData/*6:0*/ direction_display_tb__DOT__HEX0;
    CData/*6:0*/ direction_display_tb__DOT__HEX1;
    CData/*6:0*/ direction_display_tb__DOT__HEX2;
    CData/*6:0*/ direction_display_tb__DOT__HEX3;
    CData/*0:0*/ direction_display_tb__DOT____Vstrobe0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdirection_display_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdirection_display_tb___024root(Vdirection_display_tb__Syms* symsp, const char* v__name);
    ~Vdirection_display_tb___024root();
    VL_UNCOPYABLE(Vdirection_display_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
