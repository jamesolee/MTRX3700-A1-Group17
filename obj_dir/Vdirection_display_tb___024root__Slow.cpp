// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdirection_display_tb.h for the primary calling header

#include "verilated.h"

#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb___024root.h"

void Vdirection_display_tb___024root___ctor_var_reset(Vdirection_display_tb___024root* vlSelf);

Vdirection_display_tb___024root::Vdirection_display_tb___024root(Vdirection_display_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdirection_display_tb___024root___ctor_var_reset(this);
}

void Vdirection_display_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdirection_display_tb___024root::~Vdirection_display_tb___024root() {
}
