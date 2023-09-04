// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdirection_display_tb.h for the primary calling header

#include "verilated.h"

#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb__Syms.h"
#include "Vdirection_display_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vdirection_display_tb___024root___eval_initial__TOP__1(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_initial__TOP__1\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_ha2af6fed__0;
    // Body
    __Vtemp_ha2af6fed__0[0U] = 0x2e766364U;
    __Vtemp_ha2af6fed__0[1U] = 0x706c6179U;
    __Vtemp_ha2af6fed__0[2U] = 0x5f646973U;
    __Vtemp_ha2af6fed__0[3U] = 0x74696f6eU;
    __Vtemp_ha2af6fed__0[4U] = 0x69726563U;
    __Vtemp_ha2af6fed__0[5U] = 0x64U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_ha2af6fed__0));
    vlSymsp->_traceDumpOpen();
    vlSelf->direction_display_tb__DOT__enable = 1U;
    vlSelf->direction_display_tb__DOT__direc = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "direction_display_tb.sv", 
                                       31);
    vlSelf->direction_display_tb__DOT__direc = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "direction_display_tb.sv", 
                                       32);
    vlSelf->direction_display_tb__DOT__direc = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "direction_display_tb.sv", 
                                       33);
    vlSelf->direction_display_tb__DOT__direc = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "direction_display_tb.sv", 
                                       35);
    vlSelf->direction_display_tb__DOT__enable = 0U;
    VL_FINISH_MT("direction_display_tb.sv", 36, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdirection_display_tb___024root___dump_triggers__act(Vdirection_display_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdirection_display_tb___024root___eval_triggers__act(Vdirection_display_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdirection_display_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdirection_display_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdirection_display_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
