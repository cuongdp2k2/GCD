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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__A_mux_sel));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__dut__DOT__B_mux_sel));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__A_reg_en));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__B_reg_en));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__dut__DOT__out_mux_sel));
    }
    bufp->chgCData(oldp+5,(vlSelf->A_in),8);
    bufp->chgCData(oldp+6,(vlSelf->B_in),8);
    bufp->chgBit(oldp+7,(vlSelf->clk_i));
    bufp->chgBit(oldp+8,(vlSelf->go_in));
    bufp->chgBit(oldp+9,(vlSelf->Done_out));
    bufp->chgCData(oldp+10,(vlSelf->Output_out),8);
    bufp->chgCData(oldp+11,((0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__out_mux_sel)
                                       ? (IData)(vlSelf->top__DOT__dut__DOT_____05FB)
                                       : ((IData)(vlSelf->top__DOT__dut__DOT_____05FA) 
                                          - (IData)(vlSelf->top__DOT__dut__DOT_____05FB))))),8);
    bufp->chgBit(oldp+12,((0U == (IData)(vlSelf->top__DOT__dut__DOT_____05FB))));
    bufp->chgBit(oldp+13,(((IData)(vlSelf->top__DOT__dut__DOT_____05FA) 
                           < (IData)(vlSelf->top__DOT__dut__DOT_____05FB))));
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
}
