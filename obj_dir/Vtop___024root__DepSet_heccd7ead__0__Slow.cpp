// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__3 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__2 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__0 
        = (1U & VL_RAND_RESET_I(1));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h056f8dad_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h1a4609e7_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h60394cc1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h46a17f13_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h136eaacb_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h64167651_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->Output_out = vlSelf->top__DOT__dut__DOT_____05FA;
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A_in = VL_RAND_RESET_I(8);
    vlSelf->B_in = VL_RAND_RESET_I(8);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->go_in = VL_RAND_RESET_I(1);
    vlSelf->Done_out = VL_RAND_RESET_I(1);
    vlSelf->Output_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT_____05FA = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT_____05FB = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__A_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__B_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__A_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__B_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__out_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__Mux_Forward_A = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
