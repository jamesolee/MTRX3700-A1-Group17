// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdirection_display_tb__Syms.h"


VL_ATTR_COLD void Vdirection_display_tb___024root__trace_init_sub__TOP__0(Vdirection_display_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("direction_display_tb ");
    tracep->declBit(c+1,"enable", false,-1);
    tracep->declBus(c+2,"direc", false,-1, 1,0);
    tracep->declBus(c+3,"HEX0", false,-1, 6,0);
    tracep->declBus(c+4,"HEX1", false,-1, 6,0);
    tracep->declBus(c+5,"HEX2", false,-1, 6,0);
    tracep->declBus(c+6,"HEX3", false,-1, 6,0);
    tracep->pushNamePrefix("DUT ");
    tracep->declBit(c+1,"enable", false,-1);
    tracep->declBus(c+2,"direc", false,-1, 1,0);
    tracep->declBus(c+3,"HEX0", false,-1, 6,0);
    tracep->declBus(c+4,"HEX1", false,-1, 6,0);
    tracep->declBus(c+5,"HEX2", false,-1, 6,0);
    tracep->declBus(c+6,"HEX3", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdirection_display_tb___024root__trace_init_top(Vdirection_display_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_init_top\n"); );
    // Body
    Vdirection_display_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdirection_display_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdirection_display_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdirection_display_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdirection_display_tb___024root__trace_register(Vdirection_display_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdirection_display_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdirection_display_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdirection_display_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdirection_display_tb___024root__trace_full_sub_0(Vdirection_display_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdirection_display_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_full_top_0\n"); );
    // Init
    Vdirection_display_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdirection_display_tb___024root*>(voidSelf);
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdirection_display_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdirection_display_tb___024root__trace_full_sub_0(Vdirection_display_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->direction_display_tb__DOT__enable));
    bufp->fullCData(oldp+2,(vlSelf->direction_display_tb__DOT__direc),2);
    bufp->fullCData(oldp+3,(vlSelf->direction_display_tb__DOT__HEX0),7);
    bufp->fullCData(oldp+4,(vlSelf->direction_display_tb__DOT__HEX1),7);
    bufp->fullCData(oldp+5,(vlSelf->direction_display_tb__DOT__HEX2),7);
    bufp->fullCData(oldp+6,(vlSelf->direction_display_tb__DOT__HEX3),7);
}
