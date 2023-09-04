// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFSM_tb.h for the primary calling header

#include "verilated.h"

#include "VFSM_tb__Syms.h"
#include "VFSM_tb__Syms.h"
#include "VFSM_tb___024root.h"

void VFSM_tb___024root___ctor_var_reset(VFSM_tb___024root* vlSelf);

VFSM_tb___024root::VFSM_tb___024root(VFSM_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFSM_tb___024root___ctor_var_reset(this);
}

void VFSM_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VFSM_tb___024root::~VFSM_tb___024root() {
}
