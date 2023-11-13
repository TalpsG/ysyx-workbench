// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void fetch(int in, int* ins);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP(IData/*31:0*/ in, IData/*31:0*/ &ins) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP\n"); );
    // Body
    int in__Vcvt;
    for (size_t in__Vidx = 0; in__Vidx < 1; ++in__Vidx) in__Vcvt = in;
    int ins__Vcvt;
    fetch(in__Vcvt, &ins__Vcvt);
    ins = ins__Vcvt;
}

extern "C" void ebreak(int ins);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP(IData/*31:0*/ ins) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP\n"); );
    // Body
    int ins__Vcvt;
    for (size_t ins__Vidx = 0; ins__Vidx < 1; ++ins__Vidx) ins__Vcvt = ins;
    ebreak(ins__Vcvt);
}

extern "C" void npc_mem_read(int raddr, int* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    npc_mem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void npc_mem_write(int awaddr, int wdata, char wstrb);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_write_TOP(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_write_TOP\n"); );
    // Body
    int awaddr__Vcvt;
    for (size_t awaddr__Vidx = 0; awaddr__Vidx < 1; ++awaddr__Vidx) awaddr__Vcvt = awaddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wstrb__Vcvt;
    for (size_t wstrb__Vidx = 0; wstrb__Vidx < 1; ++wstrb__Vidx) wstrb__Vcvt = wstrb;
    npc_mem_write(awaddr__Vcvt, wdata__Vcvt, wstrb__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
