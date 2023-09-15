// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__dut__DOT__A_data_reg),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__B_data_reg),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__A_op_reg),2);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__B_op_reg),2);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__AsubB),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__A_data),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__B_data),8);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__done));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__A_op),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__B_op),2);
    }
    bufp->chgCData(oldp+10,(vlSelf->data1_i),8);
    bufp->chgCData(oldp+11,(vlSelf->data2_i),8);
    bufp->chgBit(oldp+12,(vlSelf->clk_i));
    bufp->chgCData(oldp+13,(vlSelf->result_o),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
