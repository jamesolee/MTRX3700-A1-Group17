// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdirection_display_tb__Syms.h"


void Vdirection_display_tb___024root__trace_chg_sub_0(Vdirection_display_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdirection_display_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vdirection_display_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdirection_display_tb___024root*>(voidSelf);
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdirection_display_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdirection_display_tb___024root__trace_chg_sub_0(Vdirection_display_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->direction_display_tb__DOT__enable));
    bufp->chgCData(oldp+1,(vlSelf->direction_display_tb__DOT__direc),2);
    bufp->chgCData(oldp+2,(vlSelf->direction_display_tb__DOT__HEX0),7);
    bufp->chgCData(oldp+3,(vlSelf->direction_display_tb__DOT__HEX1),7);
    bufp->chgCData(oldp+4,(vlSelf->direction_display_tb__DOT__HEX2),7);
    bufp->chgCData(oldp+5,(vlSelf->direction_display_tb__DOT__HEX3),7);
}

void Vdirection_display_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_cleanup\n"); );
    // Init
    Vdirection_display_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdirection_display_tb___024root*>(voidSelf);
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
