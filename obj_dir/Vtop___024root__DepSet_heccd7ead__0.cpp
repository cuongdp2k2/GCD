// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__B_op_reg = vlSelf->top__DOT__dut__DOT__B_op;
    vlSelf->top__DOT__dut__DOT__A_op_reg = vlSelf->top__DOT__dut__DOT__A_op;
    vlSelf->top__DOT__dut__DOT__AsubB = (0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__A_data) 
                                                  - (IData)(vlSelf->top__DOT__dut__DOT__B_data)));
    vlSelf->top__DOT__dut__DOT__B_data_reg = vlSelf->top__DOT__dut__DOT__B_data;
    vlSelf->top__DOT__dut__DOT__A_data_reg = vlSelf->top__DOT__dut__DOT__A_data;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__B_data = ((0U == (IData)(vlSelf->top__DOT__dut__DOT__B_op_reg))
                                           ? (IData)(vlSelf->data2_i)
                                           : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__B_op_reg))
                                               ? (IData)(vlSelf->top__DOT__dut__DOT__A_data_reg)
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__dut__DOT__B_op_reg))
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__B_data_reg)
                                                   : 0U)));
    vlSelf->top__DOT__dut__DOT__A_data = ((0U == (IData)(vlSelf->top__DOT__dut__DOT__A_op_reg))
                                           ? (IData)(vlSelf->top__DOT__dut__DOT__AsubB)
                                           : ((3U == (IData)(vlSelf->top__DOT__dut__DOT__A_op_reg))
                                               ? (IData)(vlSelf->top__DOT__dut__DOT__A_data_reg)
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__dut__DOT__A_op_reg))
                                                   ? (IData)(vlSelf->top__DOT__dut__DOT__B_data_reg)
                                                   : (IData)(vlSelf->data1_i))));
    if (((IData)(vlSelf->top__DOT__dut__DOT__A_data) 
         > (IData)(vlSelf->top__DOT__dut__DOT__B_data))) {
        vlSelf->top__DOT__dut__DOT__B_op = 2U;
        vlSelf->top__DOT__dut__DOT__A_op = 0U;
        vlSelf->top__DOT__dut__DOT__done = 0U;
    } else if (((IData)(vlSelf->top__DOT__dut__DOT__B_data) 
                > (IData)(vlSelf->top__DOT__dut__DOT__A_data))) {
        vlSelf->top__DOT__dut__DOT__B_op = 1U;
        vlSelf->top__DOT__dut__DOT__A_op = 2U;
        vlSelf->top__DOT__dut__DOT__done = 0U;
    } else if (((((IData)(vlSelf->top__DOT__dut__DOT__A_data) 
                  == (IData)(vlSelf->top__DOT__dut__DOT__B_data)) 
                 | (0U == (IData)(vlSelf->top__DOT__dut__DOT__B_data))) 
                | (1U == (IData)(vlSelf->top__DOT__dut__DOT__B_data)))) {
        vlSelf->top__DOT__dut__DOT__B_op = 0U;
        vlSelf->top__DOT__dut__DOT__A_op = 1U;
        vlSelf->top__DOT__dut__DOT__done = 1U;
    }
    vlSelf->result_o = ((IData)(vlSelf->top__DOT__dut__DOT__done)
                         ? (((0U == (IData)(vlSelf->top__DOT__dut__DOT__B_data_reg)) 
                             | (0U == (IData)(vlSelf->top__DOT__dut__DOT__A_data_reg)))
                             ? 0U : (0xffU & ((1U == (IData)(vlSelf->top__DOT__dut__DOT__B_data_reg))
                                               ? (IData)(vlSelf->top__DOT__dut__DOT__B_data_reg)
                                               : (IData)(vlSelf->top__DOT__dut__DOT__A_data))))
                         : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
