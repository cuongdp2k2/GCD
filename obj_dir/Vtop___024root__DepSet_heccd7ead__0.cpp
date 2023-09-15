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
    if (vlSelf->top__DOT__dut__DOT__B_reg_en) {
        vlSelf->top__DOT__dut__DOT_____05FB = ((IData)(vlSelf->top__DOT__dut__DOT__B_mux_sel)
                                                ? (IData)(vlSelf->top__DOT__dut__DOT_____05FA)
                                                : (IData)(vlSelf->B_in));
    }
    if (vlSelf->top__DOT__dut__DOT__A_reg_en) {
        vlSelf->top__DOT__dut__DOT_____05FA = ((IData)(vlSelf->top__DOT__dut__DOT__A_mux_sel)
                                                ? (IData)(vlSelf->top__DOT__dut__DOT__Mux_Forward_A)
                                                : (IData)(vlSelf->A_in));
    }
    vlSelf->Output_out = vlSelf->top__DOT__dut__DOT_____05FA;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h056f8dad_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h1a4609e7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h60394cc1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h46a17f13_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h136eaacb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h64167651_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__3) 
                     << 6U) | (((IData)(vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__2) 
                                << 5U) | (((IData)(vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__1) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__0) 
                                            << 3U) 
                                           | (((0U 
                                                == (IData)(vlSelf->top__DOT__dut__DOT_____05FB)) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->top__DOT__dut__DOT_____05FA) 
                                                   < (IData)(vlSelf->top__DOT__dut__DOT_____05FB)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->go_in)))))));
    vlSelf->top__DOT__dut__DOT__A_mux_sel = Vtop__ConstPool__TABLE_h056f8dad_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__A_reg_en = Vtop__ConstPool__TABLE_h1a4609e7_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__B_mux_sel = Vtop__ConstPool__TABLE_h60394cc1_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__B_reg_en = Vtop__ConstPool__TABLE_h46a17f13_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__out_mux_sel = Vtop__ConstPool__TABLE_h136eaacb_0
        [__Vtableidx1];
    vlSelf->Done_out = Vtop__ConstPool__TABLE_h64167651_0
        [__Vtableidx1];
    vlSelf->top__DOT__dut__DOT__Mux_Forward_A = (0xffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__out_mux_sel)
                                                     ? (IData)(vlSelf->top__DOT__dut__DOT_____05FB)
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__dut__DOT_____05FA) 
                                                     - (IData)(vlSelf->top__DOT__dut__DOT_____05FB))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->go_in & 0xfeU))) {
        Verilated::overWidthError("go_in");}
}
#endif  // VL_DEBUG
