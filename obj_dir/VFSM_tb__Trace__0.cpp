// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFSM_tb__Syms.h"


void VFSM_tb___024root__trace_chg_sub_0(VFSM_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFSM_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_chg_top_0\n"); );
    // Init
    VFSM_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFSM_tb___024root*>(voidSelf);
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFSM_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VFSM_tb___024root__trace_chg_sub_0(VFSM_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->FSM_tb__DOT__KEY),4);
        bufp->chgCData(oldp+1,(vlSelf->FSM_tb__DOT__SW),4);
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelf->FSM_tb__DOT__KEY))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                                    >> 1U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                                    >> 2U))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                                    >> 3U))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+6,(vlSelf->FSM_tb__DOT__HEX0),7);
        bufp->chgCData(oldp+7,(vlSelf->FSM_tb__DOT__HEX1),7);
        bufp->chgCData(oldp+8,(vlSelf->FSM_tb__DOT__HEX2),7);
        bufp->chgCData(oldp+9,(vlSelf->FSM_tb__DOT__HEX3),7);
        bufp->chgIData(oldp+10,((((IData)(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED) 
                                  << 9U) | (IData)(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED))),18);
        bufp->chgBit(oldp+11,(vlSelf->FSM_tb__DOT__DUT__DOT__save));
        bufp->chgBit(oldp+12,(vlSelf->FSM_tb__DOT__DUT__DOT__execute));
        bufp->chgBit(oldp+13,(vlSelf->FSM_tb__DOT__DUT__DOT__reset));
        bufp->chgBit(oldp+14,(vlSelf->FSM_tb__DOT__DUT__DOT__delete));
        bufp->chgBit(oldp+15,((1U == vlSelf->FSM_tb__DOT__DUT__DOT__state)));
        bufp->chgBit(oldp+16,((3U == vlSelf->FSM_tb__DOT__DUT__DOT__state)));
        bufp->chgBit(oldp+17,(vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable));
        bufp->chgCData(oldp+18,(vlSelf->FSM_tb__DOT__DUT__DOT__instruction),4);
        bufp->chgBit(oldp+19,(vlSelf->FSM_tb__DOT__DUT__DOT__empty));
        bufp->chgBit(oldp+20,(vlSelf->FSM_tb__DOT__DUT__DOT__full));
        bufp->chgBit(oldp+21,(vlSelf->FSM_tb__DOT__DUT__DOT__timer));
        bufp->chgIData(oldp+22,(vlSelf->FSM_tb__DOT__DUT__DOT__state),32);
        bufp->chgIData(oldp+23,(vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt),28);
        bufp->chgIData(oldp+24,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count),32);
        bufp->chgBit(oldp+25,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed));
        bufp->chgIData(oldp+26,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count),32);
        bufp->chgBit(oldp+27,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed));
        bufp->chgIData(oldp+28,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count),32);
        bufp->chgBit(oldp+29,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed));
        bufp->chgIData(oldp+30,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count),32);
        bufp->chgBit(oldp+31,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed));
        bufp->chgCData(oldp+32,((3U & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction))),2);
        bufp->chgSData(oldp+33,(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr),9);
        bufp->chgSData(oldp+34,(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr),9);
        bufp->chgCData(oldp+35,((3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                       >> 2U))),2);
        bufp->chgSData(oldp+36,(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED),9);
        bufp->chgSData(oldp+37,(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED),9);
    }
    bufp->chgBit(oldp+38,(vlSelf->FSM_tb__DOT__CLOCK50));
}

void VFSM_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_cleanup\n"); );
    // Init
    VFSM_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFSM_tb___024root*>(voidSelf);
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
