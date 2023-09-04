// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFSM_tb__Syms.h"


VL_ATTR_COLD void VFSM_tb___024root__trace_init_sub__TOP__0(VFSM_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("FSM_tb ");
    tracep->declBus(c+1,"KEY", false,-1, 3,0);
    tracep->declBus(c+2,"SW", false,-1, 3,0);
    tracep->declBit(c+39,"CLOCK50", false,-1);
    tracep->declBus(c+7,"HEX0", false,-1, 6,0);
    tracep->declBus(c+8,"HEX1", false,-1, 6,0);
    tracep->declBus(c+9,"HEX2", false,-1, 6,0);
    tracep->declBus(c+10,"HEX3", false,-1, 6,0);
    tracep->declBus(c+11,"LEDR", false,-1, 17,0);
    tracep->pushNamePrefix("DUT ");
    tracep->declBus(c+1,"KEY", false,-1, 3,0);
    tracep->declBus(c+2,"SW", false,-1, 3,0);
    tracep->declBit(c+39,"CLOCK50", false,-1);
    tracep->declBus(c+10,"HEX3", false,-1, 6,0);
    tracep->declBus(c+9,"HEX2", false,-1, 6,0);
    tracep->declBus(c+8,"HEX1", false,-1, 6,0);
    tracep->declBus(c+7,"HEX0", false,-1, 6,0);
    tracep->declBus(c+11,"LEDR", false,-1, 17,0);
    tracep->declBit(c+12,"save", false,-1);
    tracep->declBit(c+13,"execute", false,-1);
    tracep->declBit(c+14,"reset", false,-1);
    tracep->declBit(c+15,"delete", false,-1);
    tracep->declBit(c+16,"write_enable", false,-1);
    tracep->declBit(c+17,"read_enable", false,-1);
    tracep->declBit(c+18,"timer_enable", false,-1);
    tracep->declBus(c+19,"instruction", false,-1, 3,0);
    tracep->declBit(c+20,"empty", false,-1);
    tracep->declBit(c+21,"full", false,-1);
    tracep->declBit(c+22,"timer", false,-1);
    tracep->declBus(c+23,"state", false,-1, 31,0);
    tracep->pushNamePrefix("u_clock ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+18,"enable", false,-1);
    tracep->declBit(c+22,"timer", false,-1);
    tracep->declBus(c+24,"clk_cnt", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_debounce0 ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+3,"button", false,-1);
    tracep->declBit(c+15,"button_pressed", false,-1);
    tracep->declBus(c+40,"delay_val", false,-1, 31,0);
    tracep->declBus(c+25,"count", false,-1, 31,0);
    tracep->declBit(c+26,"new_button_pressed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_debounce1 ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+4,"button", false,-1);
    tracep->declBit(c+14,"button_pressed", false,-1);
    tracep->declBus(c+40,"delay_val", false,-1, 31,0);
    tracep->declBus(c+27,"count", false,-1, 31,0);
    tracep->declBit(c+28,"new_button_pressed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_debounce2 ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+5,"button", false,-1);
    tracep->declBit(c+13,"button_pressed", false,-1);
    tracep->declBus(c+40,"delay_val", false,-1, 31,0);
    tracep->declBus(c+29,"count", false,-1, 31,0);
    tracep->declBit(c+30,"new_button_pressed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_debounce3 ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+6,"button", false,-1);
    tracep->declBit(c+12,"button_pressed", false,-1);
    tracep->declBus(c+40,"delay_val", false,-1, 31,0);
    tracep->declBus(c+31,"count", false,-1, 31,0);
    tracep->declBit(c+32,"new_button_pressed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_direction ");
    tracep->declBit(c+18,"enable", false,-1);
    tracep->declBus(c+33,"direc", false,-1, 1,0);
    tracep->declBus(c+7,"HEX0", false,-1, 6,0);
    tracep->declBus(c+8,"HEX1", false,-1, 6,0);
    tracep->declBus(c+9,"HEX2", false,-1, 6,0);
    tracep->declBus(c+10,"HEX3", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_fifo ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+16,"we", false,-1);
    tracep->declBit(c+17,"re", false,-1);
    tracep->declBit(c+15,"del", false,-1);
    tracep->declBus(c+2,"data_in", false,-1, 3,0);
    tracep->declBus(c+19,"data_out", false,-1, 3,0);
    tracep->declBit(c+20,"empty", false,-1);
    tracep->declBit(c+21,"full", false,-1);
    tracep->declBus(c+41,"a_width", false,-1, 31,0);
    tracep->declBus(c+34,"r_ptr", false,-1, 8,0);
    tracep->declBus(c+35,"w_ptr", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_torque ");
    tracep->declBit(c+18,"enable", false,-1);
    tracep->declBus(c+33,"instruction", false,-1, 1,0);
    tracep->declBus(c+36,"torque", false,-1, 1,0);
    tracep->declBus(c+37,"left_LED", false,-1, 8,0);
    tracep->declBus(c+38,"right_LED", false,-1, 8,0);
    tracep->declBus(c+42,"zero", false,-1, 3,0);
    tracep->declBus(c+43,"quart", false,-1, 3,0);
    tracep->declBus(c+44,"half", false,-1, 3,0);
    tracep->declBus(c+45,"three_quart", false,-1, 3,0);
    tracep->declBus(c+46,"full", false,-1, 3,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VFSM_tb___024root__trace_init_top(VFSM_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_init_top\n"); );
    // Body
    VFSM_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFSM_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFSM_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFSM_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFSM_tb___024root__trace_register(VFSM_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VFSM_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VFSM_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VFSM_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFSM_tb___024root__trace_full_sub_0(VFSM_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFSM_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_full_top_0\n"); );
    // Init
    VFSM_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFSM_tb___024root*>(voidSelf);
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFSM_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFSM_tb___024root__trace_full_sub_0(VFSM_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFSM_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFSM_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->FSM_tb__DOT__KEY),4);
    bufp->fullCData(oldp+2,(vlSelf->FSM_tb__DOT__SW),4);
    bufp->fullBit(oldp+3,((1U & (IData)(vlSelf->FSM_tb__DOT__KEY))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                                 >> 1U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                                 >> 2U))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->FSM_tb__DOT__KEY) 
                                 >> 3U))));
    bufp->fullCData(oldp+7,(vlSelf->FSM_tb__DOT__HEX0),7);
    bufp->fullCData(oldp+8,(vlSelf->FSM_tb__DOT__HEX1),7);
    bufp->fullCData(oldp+9,(vlSelf->FSM_tb__DOT__HEX2),7);
    bufp->fullCData(oldp+10,(vlSelf->FSM_tb__DOT__HEX3),7);
    bufp->fullIData(oldp+11,((((IData)(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED) 
                               << 9U) | (IData)(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED))),18);
    bufp->fullBit(oldp+12,(vlSelf->FSM_tb__DOT__DUT__DOT__save));
    bufp->fullBit(oldp+13,(vlSelf->FSM_tb__DOT__DUT__DOT__execute));
    bufp->fullBit(oldp+14,(vlSelf->FSM_tb__DOT__DUT__DOT__reset));
    bufp->fullBit(oldp+15,(vlSelf->FSM_tb__DOT__DUT__DOT__delete));
    bufp->fullBit(oldp+16,((1U == vlSelf->FSM_tb__DOT__DUT__DOT__state)));
    bufp->fullBit(oldp+17,((3U == vlSelf->FSM_tb__DOT__DUT__DOT__state)));
    bufp->fullBit(oldp+18,(vlSelf->FSM_tb__DOT__DUT__DOT__timer_enable));
    bufp->fullCData(oldp+19,(vlSelf->FSM_tb__DOT__DUT__DOT__instruction),4);
    bufp->fullBit(oldp+20,(vlSelf->FSM_tb__DOT__DUT__DOT__empty));
    bufp->fullBit(oldp+21,(vlSelf->FSM_tb__DOT__DUT__DOT__full));
    bufp->fullBit(oldp+22,(vlSelf->FSM_tb__DOT__DUT__DOT__timer));
    bufp->fullIData(oldp+23,(vlSelf->FSM_tb__DOT__DUT__DOT__state),32);
    bufp->fullIData(oldp+24,(vlSelf->FSM_tb__DOT__DUT__DOT__u_clock__DOT__clk_cnt),28);
    bufp->fullIData(oldp+25,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__count),32);
    bufp->fullBit(oldp+26,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce0__DOT__new_button_pressed));
    bufp->fullIData(oldp+27,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__count),32);
    bufp->fullBit(oldp+28,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce1__DOT__new_button_pressed));
    bufp->fullIData(oldp+29,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__count),32);
    bufp->fullBit(oldp+30,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce2__DOT__new_button_pressed));
    bufp->fullIData(oldp+31,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__count),32);
    bufp->fullBit(oldp+32,(vlSelf->FSM_tb__DOT__DUT__DOT__u_debounce3__DOT__new_button_pressed));
    bufp->fullCData(oldp+33,((3U & (IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction))),2);
    bufp->fullSData(oldp+34,(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__r_ptr),9);
    bufp->fullSData(oldp+35,(vlSelf->FSM_tb__DOT__DUT__DOT__u_fifo__DOT__w_ptr),9);
    bufp->fullCData(oldp+36,((3U & ((IData)(vlSelf->FSM_tb__DOT__DUT__DOT__instruction) 
                                    >> 2U))),2);
    bufp->fullSData(oldp+37,(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__left_LED),9);
    bufp->fullSData(oldp+38,(vlSelf->FSM_tb__DOT__DUT__DOT____Vcellout__u_torque__right_LED),9);
    bufp->fullBit(oldp+39,(vlSelf->FSM_tb__DOT__CLOCK50));
    bufp->fullIData(oldp+40,(2U),32);
    bufp->fullIData(oldp+41,(8U),32);
    bufp->fullCData(oldp+42,(0U),4);
    bufp->fullCData(oldp+43,(2U),4);
    bufp->fullCData(oldp+44,(8U),4);
    bufp->fullCData(oldp+45,(0xcU),4);
    bufp->fullCData(oldp+46,(0xfU),4);
}
