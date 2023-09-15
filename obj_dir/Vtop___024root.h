// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(A_in,7,0);
    VL_IN8(B_in,7,0);
    VL_IN8(go_in,0,0);
    VL_OUT8(Done_out,0,0);
    VL_OUT8(Output_out,7,0);
    CData/*7:0*/ top__DOT__dut__DOT_____05FA;
    CData/*7:0*/ top__DOT__dut__DOT_____05FB;
    CData/*0:0*/ top__DOT__dut__DOT__A_mux_sel;
    CData/*0:0*/ top__DOT__dut__DOT__B_mux_sel;
    CData/*0:0*/ top__DOT__dut__DOT__A_reg_en;
    CData/*0:0*/ top__DOT__dut__DOT__B_reg_en;
    CData/*0:0*/ top__DOT__dut__DOT__out_mux_sel;
    CData/*7:0*/ top__DOT__dut__DOT__Mux_Forward_A;
    CData/*0:0*/ top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__3;
    CData/*0:0*/ top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__2;
    CData/*0:0*/ top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__1;
    CData/*0:0*/ top__DOT__dut__DOT__ADMIN__DOT____Vxrand_h96fefc1e__0;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
