// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP(IData/*31:0*/ ins);
void Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_write_TOP(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read__1__rdata;
    __Vtask_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read__1__rdata = 0;
    IData/*31:0*/ __Vdly__ins;
    __Vdly__ins = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_IFU__DOT__pc;
    __Vdly__top__DOT__u_IFU__DOT__pc = 0;
    CData/*0:0*/ __Vdly__top__DOT__ifu_valid;
    __Vdly__top__DOT__ifu_valid = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_IFU__DOT__now;
    __Vdly__top__DOT__u_IFU__DOT__now = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_IFU__DOT__state;
    __Vdly__top__DOT__u_IFU__DOT__state = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_IDU__DOT__state;
    __Vdly__top__DOT__u_IDU__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__mem_write;
    __Vdly__top__DOT__mem_write = 0;
    CData/*0:0*/ __Vdly__top__DOT__mem_read;
    __Vdly__top__DOT__mem_read = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__mem_finish;
    __Vdly__top__DOT__mem_finish = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_WBU__DOT__read_state;
    __Vdly__top__DOT__u_WBU__DOT__read_state = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_WBU__DOT__write_state;
    __Vdly__top__DOT__u_WBU__DOT__write_state = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_WBU__DOT__read_now;
    __Vdly__top__DOT__u_WBU__DOT__read_now = 0;
    CData/*0:0*/ __Vdly__top__DOT__mem_rready;
    __Vdly__top__DOT__mem_rready = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_WBU__DOT__write_now;
    __Vdly__top__DOT__u_WBU__DOT__write_now = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_DNPC__DOT__state;
    __Vdly__top__DOT__u_DNPC__DOT__state = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_CSR__DOT__rf__v0;
    __Vdlyvval__top__DOT__u_CSR__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_CSR__DOT__rf__v0;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_CSR__DOT__rf__v1;
    __Vdlyvval__top__DOT__u_CSR__DOT__rf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_CSR__DOT__rf__v1;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_CSR__DOT__rf__v2;
    __Vdlyvval__top__DOT__u_CSR__DOT__rf__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_CSR__DOT__rf__v2;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_CSR__DOT__rf__v3;
    __Vdlyvval__top__DOT__u_CSR__DOT__rf__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_CSR__DOT__rf__v3;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_CSR__DOT__rf__v4;
    __Vdlyvval__top__DOT__u_CSR__DOT__rf__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_CSR__DOT__rf__v4;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_CSR__DOT__rf__v5;
    __Vdlyvval__top__DOT__u_CSR__DOT__rf__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_CSR__DOT__rf__v5;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v5 = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__awaddr_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__awaddr_temp = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__wvalid_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__wvalid_temp = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_ARBITER__DOT__wstrb_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__wstrb_temp = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__wdata_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__wdata_temp = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__bready_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__bready_temp = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__araddr_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__araddr_temp = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__rready_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__rready_temp = 0;
    CData/*2:0*/ __Vdly__top__DOT__u_ARBITER__DOT__state;
    __Vdly__top__DOT__u_ARBITER__DOT__state = 0;
    IData/*31:0*/ __Vdly__top__DOT__ifu_rdata;
    __Vdly__top__DOT__ifu_rdata = 0;
    CData/*0:0*/ __Vdly__top__DOT__ifu_rvalid;
    __Vdly__top__DOT__ifu_rvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready;
    __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready = 0;
    CData/*0:0*/ __Vdly__top__DOT__mem_rvalid;
    __Vdly__top__DOT__mem_rvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__mem_bvalid;
    __Vdly__top__DOT__mem_bvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__arready;
    __Vdly__top__DOT__u_ARBITER__DOT__arready = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__rvalid;
    __Vdly__top__DOT__u_ARBITER__DOT__rvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__awready;
    __Vdly__top__DOT__u_ARBITER__DOT__awready = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__wready;
    __Vdly__top__DOT__u_ARBITER__DOT__wready = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_ARBITER__DOT__bvalid;
    __Vdly__top__DOT__u_ARBITER__DOT__bvalid = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state = 0;
    CData/*1:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg = 0;
    IData/*31:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg = 0;
    CData/*7:0*/ __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg = 0;
    // Body
    __Vdly__top__DOT__u_WBU__DOT__write_now = vlSelf->top__DOT__u_WBU__DOT__write_now;
    __Vdly__top__DOT__mem_rready = vlSelf->top__DOT__mem_rready;
    __Vdly__top__DOT__u_WBU__DOT__read_now = vlSelf->top__DOT__u_WBU__DOT__read_now;
    __Vdly__top__DOT__u_WBU__DOT__write_state = vlSelf->top__DOT__u_WBU__DOT__write_state;
    __Vdly__top__DOT__u_WBU__DOT__read_state = vlSelf->top__DOT__u_WBU__DOT__read_state;
    __Vdly__top__DOT__mem_finish = vlSelf->top__DOT__mem_finish;
    __Vdly__top__DOT__mem_read = vlSelf->top__DOT__mem_read;
    __Vdly__top__DOT__mem_write = vlSelf->top__DOT__mem_write;
    __Vdly__top__DOT__u_IDU__DOT__state = vlSelf->top__DOT__u_IDU__DOT__state;
    Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP(vlSelf->top__DOT__u_IDU__DOT__ins);
    __Vdly__top__DOT__u_DNPC__DOT__state = vlSelf->top__DOT__u_DNPC__DOT__state;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v1 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v2 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v3 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v4 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v5 = 0U;
    __Vdly__top__DOT__u_IFU__DOT__state = vlSelf->top__DOT__u_IFU__DOT__state;
    __Vdly__top__DOT__u_IFU__DOT__now = vlSelf->top__DOT__u_IFU__DOT__now;
    __Vdly__top__DOT__ifu_valid = vlSelf->top__DOT__ifu_valid;
    __Vdly__ins = vlSelf->ins;
    __Vdly__top__DOT__u_IFU__DOT__pc = vlSelf->top__DOT__u_IFU__DOT__pc;
    __Vdly__top__DOT__mem_bvalid = vlSelf->top__DOT__mem_bvalid;
    __Vdly__top__DOT__mem_rvalid = vlSelf->top__DOT__mem_rvalid;
    __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready = vlSelf->top__DOT__u_ARBITER__DOT__ifu_arready;
    __Vdly__top__DOT__ifu_rvalid = vlSelf->top__DOT__ifu_rvalid;
    __Vdly__top__DOT__ifu_rdata = vlSelf->top__DOT__ifu_rdata;
    __Vdly__top__DOT__u_ARBITER__DOT__state = vlSelf->top__DOT__u_ARBITER__DOT__state;
    __Vdly__top__DOT__u_ARBITER__DOT__rready_temp = vlSelf->top__DOT__u_ARBITER__DOT__rready_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__araddr_temp = vlSelf->top__DOT__u_ARBITER__DOT__araddr_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__bready_temp = vlSelf->top__DOT__u_ARBITER__DOT__bready_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__wdata_temp = vlSelf->top__DOT__u_ARBITER__DOT__wdata_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__wstrb_temp = vlSelf->top__DOT__u_ARBITER__DOT__wstrb_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__wvalid_temp = vlSelf->top__DOT__u_ARBITER__DOT__wvalid_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__awaddr_temp = vlSelf->top__DOT__u_ARBITER__DOT__awaddr_temp;
    __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp 
        = vlSelf->top__DOT__u_ARBITER__DOT__arvalid_temp;
    __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay;
    __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now 
        = vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now;
    __Vdly__top__DOT__u_ARBITER__DOT__bvalid = vlSelf->top__DOT__u_ARBITER__DOT__bvalid;
    __Vdly__top__DOT__u_ARBITER__DOT__wready = vlSelf->top__DOT__u_ARBITER__DOT__wready;
    __Vdly__top__DOT__u_ARBITER__DOT__awready = vlSelf->top__DOT__u_ARBITER__DOT__awready;
    __Vdly__top__DOT__u_ARBITER__DOT__rvalid = vlSelf->top__DOT__u_ARBITER__DOT__rvalid;
    __Vdly__top__DOT__u_ARBITER__DOT__arready = vlSelf->top__DOT__u_ARBITER__DOT__arready;
    if (vlSelf->top__DOT__mem_finish) {
        __Vdly__top__DOT__mem_finish = 0U;
    }
    if (vlSelf->top__DOT__ifu_valid) {
        __Vdly__top__DOT__u_DNPC__DOT__state = 1U;
        __Vdly__top__DOT__ifu_valid = 0U;
    }
    if ((1U & (IData)(vlSelf->top__DOT__csr_write))) {
        __Vdlyvval__top__DOT__u_CSR__DOT__rf__v0 = vlSelf->top__DOT__fake_csr_wdata;
        __Vdlyvset__top__DOT__u_CSR__DOT__rf__v0 = 1U;
    }
    if ((2U & (IData)(vlSelf->top__DOT__csr_write))) {
        __Vdlyvval__top__DOT__u_CSR__DOT__rf__v1 = 
            ((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
              ? vlSelf->out_snpc : vlSelf->top__DOT__fake_csr_wdata);
        __Vdlyvset__top__DOT__u_CSR__DOT__rf__v1 = 1U;
    }
    if ((4U & (IData)(vlSelf->top__DOT__csr_write))) {
        __Vdlyvval__top__DOT__u_CSR__DOT__rf__v2 = 
            ((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
              ? 1U : vlSelf->top__DOT__fake_csr_wdata);
        __Vdlyvset__top__DOT__u_CSR__DOT__rf__v2 = 1U;
    }
    if ((8U & (IData)(vlSelf->top__DOT__csr_write))) {
        __Vdlyvval__top__DOT__u_CSR__DOT__rf__v3 = vlSelf->top__DOT__fake_csr_wdata;
        __Vdlyvset__top__DOT__u_CSR__DOT__rf__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__csr_write))) {
        __Vdlyvval__top__DOT__u_CSR__DOT__rf__v4 = vlSelf->top__DOT__fake_csr_wdata;
        __Vdlyvset__top__DOT__u_CSR__DOT__rf__v4 = 1U;
    }
    if ((0x20U & (IData)(vlSelf->top__DOT__csr_write))) {
        __Vdlyvval__top__DOT__u_CSR__DOT__rf__v5 = vlSelf->top__DOT__fake_csr_wdata;
        __Vdlyvset__top__DOT__u_CSR__DOT__rf__v5 = 1U;
    }
    if (vlSelf->top__DOT__ifu_rvalid) {
        __Vdly__ins = vlSelf->top__DOT__ifu_rdata;
    }
    if ((1U & (((3U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                | (0x23U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)))
                ? ((IData)(vlSelf->top__DOT__mem_rvalid)
                    ? vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h9b1bdd9c__0
                    : 0U) : vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h9b1bdd9c__0))) {
        __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->top__DOT__reg_wdata;
        __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 7U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ARBITER__DOT__rdata = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__arready = 1U;
        __Vdly__top__DOT__u_ARBITER__DOT__rvalid = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__awready = 1U;
        __Vdly__top__DOT__u_ARBITER__DOT__wready = 1U;
        __Vdly__top__DOT__u_ARBITER__DOT__bvalid = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state = 2U;
        __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state = 2U;
    } else {
        if ((2U == (IData)(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state))) {
            if (((((~ (IData)(vlSelf->top__DOT__u_ARBITER__DOT__rvalid)) 
                   & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__arvalid)) 
                  & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__arready)) 
                 & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__rready))) {
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg 
                    = vlSelf->top__DOT__u_ARBITER__DOT__araddr;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state = 1U;
                __Vdly__top__DOT__u_ARBITER__DOT__arready = 0U;
            } else {
                __Vdly__top__DOT__u_ARBITER__DOT__rvalid = 0U;
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state))) {
            if ((vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay 
                 == vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now)) {
                Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read_TOP(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg, __Vtask_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read__1__rdata);
                vlSelf->top__DOT__u_ARBITER__DOT__rdata 
                    = __Vtask_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_read__1__rdata;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__rvalid = 1U;
                __Vdly__top__DOT__u_ARBITER__DOT__arready = 1U;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state = 2U;
            } else {
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now 
                    = ((IData)(1U) + vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now);
                __Vdly__top__DOT__u_ARBITER__DOT__rvalid = 0U;
            }
        } else {
            __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state = 2U;
        }
        if ((2U == (IData)(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state))) {
            if (((((((~ (IData)(vlSelf->top__DOT__u_ARBITER__DOT__bvalid)) 
                     & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__wvalid)) 
                    & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__wready)) 
                   & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__awready)) 
                  & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__awvalid)) 
                 & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__bready))) {
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state = 1U;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg 
                    = vlSelf->top__DOT__u_ARBITER__DOT__wdata;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg 
                    = vlSelf->top__DOT__u_ARBITER__DOT__awaddr;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg 
                    = vlSelf->top__DOT__u_ARBITER__DOT__wstrb;
            } else {
                __Vdly__top__DOT__u_ARBITER__DOT__bvalid = 0U;
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state))) {
            if ((vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay 
                 == vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now)) {
                Vtop___024root____Vdpiimwrap_top__DOT__u_ARBITER__DOT__u_MEM__DOT__npc_mem_write_TOP(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg, vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg, (IData)(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg));
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__bvalid = 1U;
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state = 2U;
            } else {
                __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now 
                    = ((IData)(1U) + vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now);
            }
        } else {
            __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state = 2U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__awaddr_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__wvalid_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__wstrb_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__wdata_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__bready_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__araddr_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__rready_temp = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__state = 0U;
        __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp = 0U;
        __Vdly__top__DOT__u_WBU__DOT__read_state = 2U;
        __Vdly__top__DOT__u_WBU__DOT__write_state = 2U;
        __Vdly__top__DOT__u_WBU__DOT__read_now = 0U;
        vlSelf->top__DOT__mem_araddr = 0U;
        vlSelf->top__DOT__mem_arvalid = 0U;
        __Vdly__top__DOT__mem_rready = 0U;
        vlSelf->top__DOT__mem_bready = 0U;
        vlSelf->top__DOT__mem_awvalid = 0U;
        vlSelf->top__DOT__mem_wdata = 0U;
        vlSelf->top__DOT__mem_awaddr = 0U;
        vlSelf->top__DOT__mem_wvalid = 0U;
        vlSelf->top__DOT__mem_pos = 0U;
        __Vdly__top__DOT__u_IFU__DOT__pc = 0x7ffffffcU;
        vlSelf->top__DOT__ifu_arvalid = 0U;
        vlSelf->top__DOT__ifu_rready = 0U;
        __Vdly__top__DOT__ifu_valid = 0U;
        __Vdly__top__DOT__u_IFU__DOT__now = 0U;
        __Vdly__top__DOT__u_IFU__DOT__state = 0U;
        vlSelf->top__DOT__u_WBU__DOT__read_delay = 0U;
        vlSelf->top__DOT__u_WBU__DOT__write_delay = 0U;
        vlSelf->top__DOT__u_IFU__DOT__delay = 0U;
        __Vdly__top__DOT__u_DNPC__DOT__state = 1U;
        vlSelf->top__DOT__dnpc = 0x80000000U;
        vlSelf->top__DOT__idu_ready = 0U;
        vlSelf->top__DOT__u_IDU__DOT__ins = 0U;
        __Vdly__top__DOT__u_IDU__DOT__state = 0U;
    } else {
        if ((4U & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__state))) {
            if ((2U & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__state))) {
                __Vdly__top__DOT__u_ARBITER__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__state))) {
                __Vdly__top__DOT__u_ARBITER__DOT__state = 0U;
            } else {
                __Vdly__top__DOT__ifu_rdata = 0U;
                __Vdly__top__DOT__ifu_rvalid = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready = 0U;
                vlSelf->top__DOT__mem_rdata = 0U;
                __Vdly__top__DOT__mem_rvalid = 0U;
                __Vdly__top__DOT__mem_bvalid = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__state))) {
                if (((IData)(vlSelf->top__DOT__u_ARBITER__DOT__rvalid) 
                     | (IData)(vlSelf->top__DOT__u_ARBITER__DOT__bvalid))) {
                    __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready 
                        = vlSelf->top__DOT__u_ARBITER__DOT__ifu_arready;
                    __Vdly__top__DOT__ifu_rdata = vlSelf->top__DOT__u_ARBITER__DOT__rdata;
                    __Vdly__top__DOT__ifu_rvalid = vlSelf->top__DOT__u_ARBITER__DOT__rvalid;
                    vlSelf->top__DOT__u_ARBITER__DOT__arvalid 
                        = vlSelf->top__DOT__u_ARBITER__DOT__arvalid_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__araddr 
                        = vlSelf->top__DOT__u_ARBITER__DOT__araddr_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__rready 
                        = vlSelf->top__DOT__u_ARBITER__DOT__rready_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__awvalid 
                        = vlSelf->top__DOT__u_ARBITER__DOT__awvalid_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__awaddr 
                        = vlSelf->top__DOT__u_ARBITER__DOT__awaddr_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__wvalid 
                        = vlSelf->top__DOT__u_ARBITER__DOT__wvalid_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__wstrb 
                        = vlSelf->top__DOT__u_ARBITER__DOT__wstrb_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__wdata 
                        = vlSelf->top__DOT__u_ARBITER__DOT__wdata_temp;
                    vlSelf->top__DOT__u_ARBITER__DOT__bready 
                        = vlSelf->top__DOT__u_ARBITER__DOT__bready_temp;
                    __Vdly__top__DOT__u_ARBITER__DOT__state = 2U;
                }
            } else if (((IData)(vlSelf->top__DOT__u_ARBITER__DOT__rvalid) 
                        | (IData)(vlSelf->top__DOT__u_ARBITER__DOT__bvalid))) {
                vlSelf->top__DOT__mem_rdata = vlSelf->top__DOT__u_ARBITER__DOT__rdata;
                __Vdly__top__DOT__mem_rvalid = vlSelf->top__DOT__u_ARBITER__DOT__rvalid;
                __Vdly__top__DOT__mem_bvalid = vlSelf->top__DOT__u_ARBITER__DOT__bvalid;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 4U;
                vlSelf->top__DOT__u_ARBITER__DOT__arvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__araddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__rready = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awaddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wstrb = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wdata = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__bready = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__u_ARBITER__DOT__state))) {
            if (((IData)(vlSelf->top__DOT__u_ARBITER__DOT__rvalid) 
                 | (IData)(vlSelf->top__DOT__u_ARBITER__DOT__bvalid))) {
                __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready 
                    = vlSelf->top__DOT__u_ARBITER__DOT__ifu_arready;
                __Vdly__top__DOT__ifu_rdata = vlSelf->top__DOT__u_ARBITER__DOT__rdata;
                __Vdly__top__DOT__ifu_rvalid = vlSelf->top__DOT__u_ARBITER__DOT__rvalid;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 4U;
                vlSelf->top__DOT__u_ARBITER__DOT__arvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__araddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__rready = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awaddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wstrb = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wdata = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__bready = 0U;
            }
        } else if ((1U & ((~ (IData)(vlSelf->top__DOT__u_ARBITER__DOT__rvalid)) 
                          & (~ (IData)(vlSelf->top__DOT__u_ARBITER__DOT__bvalid))))) {
            if (((IData)(vlSelf->top__DOT__u_ARBITER__DOT__mem_access) 
                 & (IData)(vlSelf->top__DOT__ifu_arvalid))) {
                __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp 
                    = vlSelf->top__DOT__mem_arvalid;
                __Vdly__top__DOT__u_ARBITER__DOT__awaddr_temp 
                    = vlSelf->top__DOT__mem_awaddr;
                __Vdly__top__DOT__u_ARBITER__DOT__wvalid_temp 
                    = vlSelf->top__DOT__mem_wvalid;
                __Vdly__top__DOT__u_ARBITER__DOT__wstrb_temp 
                    = vlSelf->top__DOT__mem_wstrb;
                __Vdly__top__DOT__u_ARBITER__DOT__wdata_temp 
                    = vlSelf->top__DOT__mem_wdata;
                __Vdly__top__DOT__u_ARBITER__DOT__bready_temp 
                    = vlSelf->top__DOT__mem_bready;
                __Vdly__top__DOT__u_ARBITER__DOT__araddr_temp 
                    = vlSelf->top__DOT__mem_araddr;
                __Vdly__top__DOT__u_ARBITER__DOT__rready_temp 
                    = vlSelf->top__DOT__mem_rready;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 3U;
                vlSelf->top__DOT__u_ARBITER__DOT__arvalid 
                    = vlSelf->top__DOT__ifu_arvalid;
                vlSelf->top__DOT__u_ARBITER__DOT__araddr 
                    = vlSelf->top__DOT__ifu_araddr;
                vlSelf->top__DOT__u_ARBITER__DOT__rready 
                    = vlSelf->top__DOT__ifu_rready;
                vlSelf->top__DOT__u_ARBITER__DOT__awvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awaddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wstrb = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wdata = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__bready = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp 
                    = vlSelf->top__DOT__mem_arvalid;
            } else if (vlSelf->top__DOT__ifu_arvalid) {
                vlSelf->top__DOT__u_ARBITER__DOT__arvalid 
                    = vlSelf->top__DOT__ifu_arvalid;
                vlSelf->top__DOT__u_ARBITER__DOT__araddr 
                    = vlSelf->top__DOT__ifu_araddr;
                vlSelf->top__DOT__u_ARBITER__DOT__rready 
                    = vlSelf->top__DOT__ifu_rready;
                vlSelf->top__DOT__u_ARBITER__DOT__awvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awaddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wstrb = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wdata = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__bready = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 1U;
            } else if (vlSelf->top__DOT__u_ARBITER__DOT__mem_access) {
                vlSelf->top__DOT__u_ARBITER__DOT__arvalid 
                    = vlSelf->top__DOT__mem_arvalid;
                vlSelf->top__DOT__u_ARBITER__DOT__araddr 
                    = vlSelf->top__DOT__mem_araddr;
                vlSelf->top__DOT__u_ARBITER__DOT__rready 
                    = vlSelf->top__DOT__mem_rready;
                vlSelf->top__DOT__u_ARBITER__DOT__awvalid 
                    = vlSelf->top__DOT__mem_awvalid;
                vlSelf->top__DOT__u_ARBITER__DOT__awaddr 
                    = vlSelf->top__DOT__mem_awaddr;
                vlSelf->top__DOT__u_ARBITER__DOT__wvalid 
                    = vlSelf->top__DOT__mem_wvalid;
                vlSelf->top__DOT__u_ARBITER__DOT__wstrb 
                    = vlSelf->top__DOT__mem_wstrb;
                vlSelf->top__DOT__u_ARBITER__DOT__wdata 
                    = vlSelf->top__DOT__mem_wdata;
                vlSelf->top__DOT__u_ARBITER__DOT__bready 
                    = vlSelf->top__DOT__mem_bready;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 2U;
            } else {
                vlSelf->top__DOT__u_ARBITER__DOT__arvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__araddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__rready = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__awaddr = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wvalid = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wstrb = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__wdata = 0U;
                vlSelf->top__DOT__u_ARBITER__DOT__bready = 0U;
                __Vdly__top__DOT__u_ARBITER__DOT__state = 0U;
            }
        }
        if ((2U == (IData)(vlSelf->top__DOT__u_WBU__DOT__read_state))) {
            if (vlSelf->top__DOT__mem_read) {
                __Vdly__top__DOT__u_WBU__DOT__read_state = 0U;
            }
        } else if ((0U == (IData)(vlSelf->top__DOT__u_WBU__DOT__read_state))) {
            if ((vlSelf->top__DOT__u_WBU__DOT__read_now 
                 == vlSelf->top__DOT__u_WBU__DOT__read_delay)) {
                vlSelf->top__DOT__mem_araddr = vlSelf->top__DOT__exu_res;
                vlSelf->top__DOT__mem_pos = (3U & vlSelf->top__DOT__exu_res);
                vlSelf->top__DOT__mem_arvalid = 1U;
                __Vdly__top__DOT__mem_rready = 1U;
                __Vdly__top__DOT__u_WBU__DOT__read_now = 0U;
                __Vdly__top__DOT__u_WBU__DOT__read_state = 1U;
            } else {
                __Vdly__top__DOT__u_WBU__DOT__read_now 
                    = ((IData)(1U) + vlSelf->top__DOT__u_WBU__DOT__read_now);
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__u_WBU__DOT__read_state))) {
            if (((IData)(vlSelf->top__DOT__mem_rvalid) 
                 & (IData)(vlSelf->top__DOT__mem_rready))) {
                __Vdly__top__DOT__mem_finish = 1U;
                __Vdly__top__DOT__u_WBU__DOT__read_state = 2U;
                __Vdly__top__DOT__u_WBU__DOT__read_now = 0U;
                vlSelf->top__DOT__mem_araddr = 0U;
                vlSelf->top__DOT__mem_arvalid = 0U;
                __Vdly__top__DOT__mem_rready = 0U;
            }
        } else {
            __Vdly__top__DOT__u_WBU__DOT__read_state = 2U;
        }
        if ((2U == (IData)(vlSelf->top__DOT__u_WBU__DOT__write_state))) {
            if (vlSelf->top__DOT__mem_write) {
                __Vdly__top__DOT__u_WBU__DOT__write_state = 0U;
            }
        } else if ((0U == (IData)(vlSelf->top__DOT__u_WBU__DOT__write_state))) {
            if ((vlSelf->top__DOT__u_WBU__DOT__write_now 
                 == vlSelf->top__DOT__u_WBU__DOT__write_delay)) {
                vlSelf->top__DOT__mem_awvalid = 1U;
                vlSelf->top__DOT__mem_awaddr = vlSelf->top__DOT__exu_res;
                vlSelf->top__DOT__mem_wdata = vlSelf->top__DOT__reg_rdata2;
                vlSelf->top__DOT__mem_wstrb = vlSelf->top__DOT__mem_wmask;
                vlSelf->top__DOT__mem_bready = 1U;
                __Vdly__top__DOT__u_WBU__DOT__write_now = 0U;
                vlSelf->top__DOT__mem_wvalid = 1U;
                __Vdly__top__DOT__u_WBU__DOT__write_state = 1U;
            } else {
                __Vdly__top__DOT__u_WBU__DOT__write_now 
                    = ((IData)(1U) + vlSelf->top__DOT__u_WBU__DOT__write_now);
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__u_WBU__DOT__write_state))) {
            if (vlSelf->top__DOT__mem_bvalid) {
                __Vdly__top__DOT__mem_finish = 1U;
                __Vdly__top__DOT__u_WBU__DOT__write_state = 2U;
                vlSelf->top__DOT__mem_awvalid = 0U;
                vlSelf->top__DOT__mem_bready = 0U;
                vlSelf->top__DOT__mem_wvalid = 0U;
                vlSelf->top__DOT__mem_wdata = 0U;
                __Vdly__top__DOT__u_WBU__DOT__write_now = 0U;
                vlSelf->top__DOT__mem_awaddr = 0U;
            }
        } else {
            __Vdly__top__DOT__u_WBU__DOT__write_state = 2U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__u_IFU__DOT__state))) {
            __Vdly__top__DOT__u_IFU__DOT__pc = vlSelf->top__DOT__dnpc;
            vlSelf->top__DOT__ifu_araddr = vlSelf->top__DOT__dnpc;
            __Vdly__top__DOT__u_IFU__DOT__now = 0U;
            __Vdly__top__DOT__u_IFU__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->top__DOT__u_IFU__DOT__state))) {
            if ((vlSelf->top__DOT__u_IFU__DOT__delay 
                 == vlSelf->top__DOT__u_IFU__DOT__now)) {
                vlSelf->top__DOT__ifu_arvalid = 1U;
                vlSelf->top__DOT__ifu_rready = 1U;
                __Vdly__top__DOT__u_IFU__DOT__state = 2U;
                __Vdly__top__DOT__u_IFU__DOT__now = 0U;
            } else {
                __Vdly__top__DOT__u_IFU__DOT__now = 
                    ((IData)(1U) + vlSelf->top__DOT__u_IFU__DOT__now);
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__u_IFU__DOT__state))) {
            if (vlSelf->top__DOT__ifu_rvalid) {
                __Vdly__ins = vlSelf->top__DOT__ifu_rdata;
                vlSelf->top__DOT__ifu_arvalid = 0U;
                vlSelf->top__DOT__ifu_rready = 0U;
                vlSelf->top__DOT__ifu_araddr = 0U;
                __Vdly__top__DOT__ifu_valid = 1U;
                __Vdly__top__DOT__u_IFU__DOT__state = 2U;
            }
            if (vlSelf->top__DOT__idu_ready) {
                __Vdly__top__DOT__u_IFU__DOT__state = 0U;
            }
        } else {
            __Vdly__top__DOT__u_IFU__DOT__state = 0U;
        }
        if ((1U == (IData)(vlSelf->top__DOT__u_DNPC__DOT__state))) {
            vlSelf->top__DOT__dnpc = ((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                       ? vlSelf->top__DOT__u_CSR__DOT__rf
                                      [5U] : ((0x30200073U 
                                               == vlSelf->top__DOT__u_IDU__DOT__ins)
                                               ? vlSelf->top__DOT__u_CSR__DOT__rf
                                              [1U] : 
                                              (((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                                | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__ins)))
                                                ? vlSelf->top__DOT__exu_res
                                                : (
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                                    & vlSelf->top__DOT__exu_res)
                                                    ? 
                                                   (vlSelf->top__DOT__imm 
                                                    + vlSelf->top__DOT__u_IFU__DOT__pc)
                                                    : vlSelf->out_snpc))));
            __Vdly__top__DOT__u_DNPC__DOT__state = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__u_IDU__DOT__state))) {
            vlSelf->top__DOT__idu_ready = 0U;
            if (vlSelf->top__DOT__ifu_valid) {
                vlSelf->top__DOT__u_IDU__DOT__ins = vlSelf->ins;
                __Vdly__top__DOT__u_IDU__DOT__state 
                    = (((3U == (0x7fU & vlSelf->ins)) 
                        | (0x23U == (0x7fU & vlSelf->ins)))
                        ? 2U : 1U);
                __Vdly__top__DOT__mem_write = (0x23U 
                                               == (0x7fU 
                                                   & vlSelf->ins));
                __Vdly__top__DOT__mem_read = (3U == 
                                              (0x7fU 
                                               & vlSelf->ins));
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__u_IDU__DOT__state))) {
            vlSelf->top__DOT__idu_ready = 1U;
            vlSelf->top__DOT__u_IDU__DOT__ins = 0U;
            __Vdly__top__DOT__u_IDU__DOT__state = 0U;
        } else if ((2U == (IData)(vlSelf->top__DOT__u_IDU__DOT__state))) {
            if (vlSelf->top__DOT__mem_finish) {
                vlSelf->top__DOT__idu_ready = 1U;
                __Vdly__top__DOT__u_IDU__DOT__state = 0U;
                vlSelf->top__DOT__u_IDU__DOT__ins = 0U;
            } else {
                if (vlSelf->top__DOT__mem_read) {
                    __Vdly__top__DOT__mem_read = 0U;
                }
                if (vlSelf->top__DOT__mem_write) {
                    __Vdly__top__DOT__mem_write = 0U;
                }
            }
        } else {
            __Vdly__top__DOT__u_IDU__DOT__state = 0U;
        }
    }
    if (__Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->top__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
    vlSelf->top__DOT__u_ARBITER__DOT__arready = __Vdly__top__DOT__u_ARBITER__DOT__arready;
    vlSelf->top__DOT__u_ARBITER__DOT__awready = __Vdly__top__DOT__u_ARBITER__DOT__awready;
    vlSelf->top__DOT__u_ARBITER__DOT__wready = __Vdly__top__DOT__u_ARBITER__DOT__wready;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg;
    vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg 
        = __Vdly__top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg;
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1fU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1fU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1eU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1eU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1dU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1dU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1cU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1cU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1bU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1bU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1aU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1aU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x19U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x19U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x18U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x18U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x17U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x17U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x16U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x16U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x15U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x15U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x14U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x14U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x13U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x13U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x12U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x12U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x11U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x11U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x10U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x10U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xfU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xfU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xeU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xeU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xdU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xdU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xcU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xcU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xbU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xbU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xaU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xaU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[9U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [9U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[8U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [8U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[7U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [7U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[6U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [6U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[5U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [5U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[4U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [4U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[3U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [3U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[2U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[1U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [1U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0U];
    vlSelf->gpr[0x1fU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1fU];
    vlSelf->gpr[0x1eU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1eU];
    vlSelf->gpr[0x1dU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1dU];
    vlSelf->gpr[0x1cU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1cU];
    vlSelf->gpr[0x1bU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1bU];
    vlSelf->gpr[0x1aU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1aU];
    vlSelf->gpr[0x19U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x19U];
    vlSelf->gpr[0x18U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x18U];
    vlSelf->gpr[0x17U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x17U];
    vlSelf->gpr[0x16U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x16U];
    vlSelf->gpr[0x15U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x15U];
    vlSelf->gpr[0x14U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x14U];
    vlSelf->gpr[0x13U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x13U];
    vlSelf->gpr[0x12U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x12U];
    vlSelf->gpr[0x11U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x11U];
    vlSelf->gpr[0x10U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x10U];
    vlSelf->gpr[0xfU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xfU];
    vlSelf->gpr[0xeU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xeU];
    vlSelf->gpr[0xdU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xdU];
    vlSelf->gpr[0xcU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xcU];
    vlSelf->gpr[0xbU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xbU];
    vlSelf->gpr[0xaU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xaU];
    vlSelf->gpr[9U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [9U];
    vlSelf->gpr[8U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [8U];
    vlSelf->gpr[7U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [7U];
    vlSelf->gpr[6U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [6U];
    vlSelf->gpr[5U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [5U];
    vlSelf->gpr[4U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [4U];
    vlSelf->gpr[3U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [3U];
    vlSelf->gpr[2U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [2U];
    vlSelf->gpr[1U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [1U];
    vlSelf->gpr[0U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0U];
    vlSelf->top__DOT__u_ARBITER__DOT__arvalid_temp 
        = __Vdly__top__DOT__u_ARBITER__DOT__arvalid_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__awaddr_temp = __Vdly__top__DOT__u_ARBITER__DOT__awaddr_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__wvalid_temp = __Vdly__top__DOT__u_ARBITER__DOT__wvalid_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__wstrb_temp = __Vdly__top__DOT__u_ARBITER__DOT__wstrb_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__wdata_temp = __Vdly__top__DOT__u_ARBITER__DOT__wdata_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__bready_temp = __Vdly__top__DOT__u_ARBITER__DOT__bready_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__araddr_temp = __Vdly__top__DOT__u_ARBITER__DOT__araddr_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__rready_temp = __Vdly__top__DOT__u_ARBITER__DOT__rready_temp;
    vlSelf->top__DOT__u_ARBITER__DOT__state = __Vdly__top__DOT__u_ARBITER__DOT__state;
    vlSelf->top__DOT__u_ARBITER__DOT__ifu_arready = __Vdly__top__DOT__u_ARBITER__DOT__ifu_arready;
    vlSelf->top__DOT__u_ARBITER__DOT__rvalid = __Vdly__top__DOT__u_ARBITER__DOT__rvalid;
    vlSelf->top__DOT__u_ARBITER__DOT__bvalid = __Vdly__top__DOT__u_ARBITER__DOT__bvalid;
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__mem_rdata;
    vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__mem_rdata >> 0x10U);
    vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & (vlSelf->top__DOT__mem_rdata >> 8U));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[2U] 
        = (0xffffU & vlSelf->top__DOT__mem_rdata);
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__mem_rdata >> 0x18U);
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[1U] 
        = (0xffU & (vlSelf->top__DOT__mem_rdata >> 0x10U));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[2U] 
        = (0xffU & (vlSelf->top__DOT__mem_rdata >> 8U));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__mem_rdata);
    vlSelf->top__DOT__mem_bvalid = __Vdly__top__DOT__mem_bvalid;
    vlSelf->top__DOT__u_WBU__DOT__read_state = __Vdly__top__DOT__u_WBU__DOT__read_state;
    vlSelf->top__DOT__u_WBU__DOT__write_state = __Vdly__top__DOT__u_WBU__DOT__write_state;
    vlSelf->top__DOT__u_WBU__DOT__read_now = __Vdly__top__DOT__u_WBU__DOT__read_now;
    vlSelf->top__DOT__mem_rvalid = __Vdly__top__DOT__mem_rvalid;
    vlSelf->top__DOT__mem_rready = __Vdly__top__DOT__mem_rready;
    vlSelf->top__DOT__u_WBU__DOT__write_now = __Vdly__top__DOT__u_WBU__DOT__write_now;
    vlSelf->top__DOT__u_IFU__DOT__now = __Vdly__top__DOT__u_IFU__DOT__now;
    vlSelf->top__DOT__u_IFU__DOT__state = __Vdly__top__DOT__u_IFU__DOT__state;
    vlSelf->top__DOT__ifu_rvalid = __Vdly__top__DOT__ifu_rvalid;
    vlSelf->top__DOT__ifu_rdata = __Vdly__top__DOT__ifu_rdata;
    vlSelf->top__DOT__u_ARBITER__DOT__mem_access = 
        ((IData)(vlSelf->top__DOT__mem_arvalid) | (IData)(vlSelf->top__DOT__mem_awvalid));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                       == vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                          == vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                          == vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                          == vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__RDATA__DOT__rdata_b = vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                       == vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                          == vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__mem_pos) 
                          == vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__RDATA__DOT__rdata_h = vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__RDATA__DOT__rdata_b;
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b));
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__RDATA__DOT__rdata_h;
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h));
    vlSelf->top__DOT__u_DNPC__DOT__state = __Vdly__top__DOT__u_DNPC__DOT__state;
    if (__Vdlyvset__top__DOT__u_CSR__DOT__rf__v0) {
        vlSelf->top__DOT__u_CSR__DOT__rf[0U] = __Vdlyvval__top__DOT__u_CSR__DOT__rf__v0;
    }
    if (__Vdlyvset__top__DOT__u_CSR__DOT__rf__v1) {
        vlSelf->top__DOT__u_CSR__DOT__rf[1U] = __Vdlyvval__top__DOT__u_CSR__DOT__rf__v1;
    }
    if (__Vdlyvset__top__DOT__u_CSR__DOT__rf__v2) {
        vlSelf->top__DOT__u_CSR__DOT__rf[2U] = __Vdlyvval__top__DOT__u_CSR__DOT__rf__v2;
    }
    if (__Vdlyvset__top__DOT__u_CSR__DOT__rf__v3) {
        vlSelf->top__DOT__u_CSR__DOT__rf[3U] = __Vdlyvval__top__DOT__u_CSR__DOT__rf__v3;
    }
    if (__Vdlyvset__top__DOT__u_CSR__DOT__rf__v4) {
        vlSelf->top__DOT__u_CSR__DOT__rf[4U] = __Vdlyvval__top__DOT__u_CSR__DOT__rf__v4;
    }
    if (__Vdlyvset__top__DOT__u_CSR__DOT__rf__v5) {
        vlSelf->top__DOT__u_CSR__DOT__rf[5U] = __Vdlyvval__top__DOT__u_CSR__DOT__rf__v5;
    }
    vlSelf->top__DOT__u_IFU__DOT__pc = __Vdly__top__DOT__u_IFU__DOT__pc;
    vlSelf->out_dnpc = vlSelf->top__DOT__dnpc;
    vlSelf->csr_reg[0U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [0U];
    vlSelf->csr_reg[1U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [1U];
    vlSelf->csr_reg[2U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [2U];
    vlSelf->csr_reg[3U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [3U];
    vlSelf->csr_reg[4U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [4U];
    vlSelf->csr_reg[5U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [5U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[5U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[4U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[3U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[2U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[1U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[5U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[0U];
    vlSelf->outpc = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->out_snpc = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->top__DOT__u_IDU__DOT__state = __Vdly__top__DOT__u_IDU__DOT__state;
    vlSelf->top__DOT__mem_finish = __Vdly__top__DOT__mem_finish;
    vlSelf->top__DOT__mem_read = __Vdly__top__DOT__mem_read;
    vlSelf->top__DOT__mem_write = __Vdly__top__DOT__mem_write;
    vlSelf->top__DOT__ifu_valid = __Vdly__top__DOT__ifu_valid;
    vlSelf->ins = __Vdly__ins;
    vlSelf->ready = vlSelf->top__DOT__idu_ready;
    vlSelf->valid = vlSelf->top__DOT__ifu_valid;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0x14U)) 
                       == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0x14U)) 
                          == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0x14U)) 
                          == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0x14U)) 
                          == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0x14U)) 
                          == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0x14U)) 
                          == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__csr_rdata = vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__reg_rdata2 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                   >> 0x14U))];
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                              >> 0xcU)) == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem_wmask = vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                              >> 0x14U)) == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0x14U)) == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0x14U)) == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0x14U)) == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0x14U)) == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0x14U)) == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_WBU__DOT__fake_csr_write = vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__is_csr = ((0x73U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                & (0U != (7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                >> 0xcU))));
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                   >> 0xfU))];
    vlSelf->top__DOT__reg_rdata1 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                   >> 0xfU))];
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                              >> 0xcU)) == vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem_rdata_final = vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                              >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__B_aluop = vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2U] 
        = ((0x40000000U & vlSelf->top__DOT__u_IDU__DOT__ins)
            ? 8U : 7U);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7U] 
        = ((IData)((0x40000033U == (0x4000007fU & vlSelf->top__DOT__u_IDU__DOT__ins)))
            ? 1U : 0U);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                   >> 0xfU))];
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                   >> 0x14U))];
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                       == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand1 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                       == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand2 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                >> 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                      >> 7U))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                >> 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                         >> 7U)))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                >> 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__u_IDU__DOT__ins) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->top__DOT__u_IDU__DOT__ins);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->top__DOT__u_IDU__DOT__ins);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csr_rdata;
    vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h9b1bdd9c__0 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
           | ((0x17U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
              | ((0x6fU == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                 | ((0x67U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                    | ((3U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                       | ((0x13U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                          | ((0x33U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                             | (IData)(vlSelf->top__DOT__is_csr))))))));
    vlSelf->top__DOT__csr_write = ((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                    ? 0U : ((0x73U 
                                             == vlSelf->top__DOT__u_IDU__DOT__ins)
                                             ? 6U : 
                                            ((IData)(vlSelf->top__DOT__is_csr)
                                              ? (IData)(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write)
                                              : 0U)));
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_rdata | vlSelf->top__DOT__reg_rdata1);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__mem_rdata_final;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_EXU__DOT__B_aluop;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                              >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__IR_aluop = vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand1) 
                       == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand1) 
                          == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand1) 
                          == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__oprand1 = vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                       == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                              >> 0xcU)) == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                 >> 0xcU)) == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__fake_csr_wdata = vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
           == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
              == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
              == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__aluop = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit)
                                            ? (IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out)
                                            : 0U);
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand2) 
                       == vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand2) 
                          == vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__oprand2 = vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0U] 
        = ((vlSelf->top__DOT__oprand1 == vlSelf->top__DOT__oprand2)
            ? 1U : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[1U] 
        = ((vlSelf->top__DOT__oprand1 < vlSelf->top__DOT__oprand2)
            ? 1U : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                         (0x1fU & vlSelf->top__DOT__oprand2));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__oprand1 >> (0x1fU & vlSelf->top__DOT__oprand2));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4U] 
        = ((0x1fU >= vlSelf->top__DOT__oprand2) ? (vlSelf->top__DOT__oprand1 
                                                   << vlSelf->top__DOT__oprand2)
            : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[5U] 
        = (VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
            ? 1U : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->top__DOT__oprand1 & vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->top__DOT__oprand1 | vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->top__DOT__oprand1 ^ vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->top__DOT__oprand1 - vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->top__DOT__oprand1 + vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                       == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__u_EXU__DOT__alu_res = vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out;
    if (((0x63U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
         & ((1U == (7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                          >> 0xcU))) | ((5U == (7U 
                                                & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                   >> 0xcU))) 
                                        | (7U == (7U 
                                                  & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                     >> 0xcU))))))) {
        vlSelf->top__DOT__exu_res = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
                                     | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
    } else {
        vlSelf->top__DOT__exu_res = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
    }
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                       == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__reg_wdata = vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/top.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/top.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
