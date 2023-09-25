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
    VL_IN8(clk,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(ins,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ top__DOT__ifu__DOT__temp;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(regfile[32],31,0);
    VlUnpacked<IData/*31:0*/, 32> top__DOT__regdata;
    VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__exu____pinNumber11;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__exu__DOT____Vcellout__rfile____pinNumber4;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__exu__DOT__rfile__DOT__rf;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
