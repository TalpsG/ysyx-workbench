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
void Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read__0__rdata;
    __Vtask_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read__0__rdata = 0;
    IData/*31:0*/ __Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata;
    __Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_IFU__DOT__arvalid;
    __Vdly__top__DOT__u_IFU__DOT__arvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_IFU__DOT__arready;
    __Vdly__top__DOT__u_IFU__DOT__arready = 0;
    CData/*0:0*/ __Vdly__top__DOT__u_IFU__DOT__rvalid;
    __Vdly__top__DOT__u_IFU__DOT__rvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__idu_ready;
    __Vdly__top__DOT__idu_ready = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
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
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP(vlSelf->top__DOT__u_IDU__DOT__ins);
    __Vdly__top__DOT__idu_ready = vlSelf->top__DOT__idu_ready;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v1 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v2 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v3 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v4 = 0U;
    __Vdlyvset__top__DOT__u_CSR__DOT__rf__v5 = 0U;
    __Vdly__top__DOT__u_IFU__DOT__arvalid = vlSelf->top__DOT__u_IFU__DOT__arvalid;
    __Vdly__top__DOT__u_IFU__DOT__arready = vlSelf->top__DOT__u_IFU__DOT__arready;
    __Vdly__top__DOT__u_IFU__DOT__rvalid = vlSelf->top__DOT__u_IFU__DOT__rvalid;
    __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdly__top__DOT__idu_ready = (1U & ((~ ((IData)(vlSelf->valid) 
                                             & (IData)(vlSelf->top__DOT__idu_ready))) 
                                         & ((~ (IData)(vlSelf->top__DOT__mem_access)) 
                                            | (IData)(vlSelf->top__DOT__mem_finish))));
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
    if (vlSelf->top__DOT__u_mem__DOT__delay_write) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_write_TOP(vlSelf->top__DOT__u_mem__DOT__delay_waddr, vlSelf->top__DOT__u_mem__DOT__delay_wdata, (IData)(vlSelf->top__DOT__u_mem__DOT__delay_wmask));
        vlSelf->top__DOT__u_mem__DOT__delay_write = 0U;
    }
    __Vdly__top__DOT__u_IFU__DOT__arready = (1U & ((IData)(vlSelf->rst) 
                                                   | (~ 
                                                      (((IData)(vlSelf->top__DOT__u_IFU__DOT__arready) 
                                                        & (IData)(vlSelf->top__DOT__u_IFU__DOT__arvalid)) 
                                                       & (IData)(vlSelf->top__DOT__u_IFU__DOT__rready)))));
    if (((0x37U == (IData)(vlSelf->top__DOT__opcode)) 
         | ((0x17U == (IData)(vlSelf->top__DOT__opcode)) 
            | ((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
               | ((0x67U == (IData)(vlSelf->top__DOT__opcode)) 
                  | ((3U == (IData)(vlSelf->top__DOT__opcode)) 
                     | ((0x13U == (IData)(vlSelf->top__DOT__opcode)) 
                        | ((0x33U == (IData)(vlSelf->top__DOT__opcode)) 
                           | (IData)(vlSelf->top__DOT__is_csr))))))))) {
        __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->top__DOT__reg_wdata;
        __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->top__DOT__rd;
    }
    vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__wready = 0U;
    vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__awready 
        = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->top__DOT__u_mem__DOT__pos = ((IData)(vlSelf->top__DOT__mem_access)
                                          ? (3U & vlSelf->top__DOT__exu_res)
                                          : 0U);
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__bresp = 0U;
        vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__bvalid = 0U;
        vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__wdata_reg = 0U;
        vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__awaddr_reg = 0U;
        vlSelf->top__DOT__u_IFU__DOT__rresp = 0U;
        __Vdly__top__DOT__u_IFU__DOT__rvalid = 0U;
    } else if (((((~ (IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)) 
                  & (IData)(vlSelf->top__DOT__u_IFU__DOT__arready)) 
                 & (IData)(vlSelf->top__DOT__u_IFU__DOT__arvalid)) 
                & (IData)(vlSelf->top__DOT__u_IFU__DOT__rready))) {
        vlSelf->top__DOT__u_IFU__DOT__rresp = 0U;
        __Vdly__top__DOT__u_IFU__DOT__rvalid = 1U;
    } else {
        __Vdly__top__DOT__u_IFU__DOT__rvalid = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__araddr_reg = 0U;
    } else if (((((~ (IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)) 
                  & (IData)(vlSelf->top__DOT__u_IFU__DOT__arready)) 
                 & (IData)(vlSelf->top__DOT__u_IFU__DOT__arvalid)) 
                & (IData)(vlSelf->top__DOT__u_IFU__DOT__rready))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read_TOP(vlSelf->top__DOT__u_IFU__DOT__araddr, __Vtask_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read__0__rdata);
        vlSelf->top__DOT__u_IFU__DOT__rdata = __Vtask_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read__0__rdata;
    }
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
    if (__Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->top__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
    vlSelf->ins = vlSelf->top__DOT__u_IFU__DOT__rdata;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                  >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                     >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                     >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                     >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                     >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                     >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__mem_finish = vlSelf->top__DOT__mem_access;
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
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->top__DOT__u_CSR__DOT__rf
                                            [5U])));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__u_CSR__DOT__rf
                                            [4U])));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__u_CSR__DOT__rf
                                            [3U])));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__u_CSR__DOT__rf
                                            [2U])));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[4U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__u_CSR__DOT__rf
                                            [1U])));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[5U] 
        = (QData)((IData)(vlSelf->top__DOT__u_CSR__DOT__rf
                          [0U]));
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
    if (vlSelf->top__DOT__mem_access) {
        if ((3U == (IData)(vlSelf->top__DOT__opcode))) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__u_INS_MEM__DOT__npc_mem_read_TOP(vlSelf->top__DOT__exu_res, __Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata);
            vlSelf->top__DOT__u_mem__DOT__rdata_w = __Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata;
            vlSelf->top__DOT__u_mem__DOT__delay_raddr 
                = vlSelf->top__DOT__exu_res;
            vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                = vlSelf->top__DOT__u_mem__DOT__rdata_w;
            vlSelf->top__DOT__u_mem__DOT__delay_read = 1U;
        } else if ((0x23U == (IData)(vlSelf->top__DOT__opcode))) {
            vlSelf->top__DOT__u_mem__DOT__rdata_w = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_waddr 
                = vlSelf->top__DOT__exu_res;
            vlSelf->top__DOT__u_mem__DOT__delay_wdata 
                = vlSelf->top__DOT__reg_rdata2;
            vlSelf->top__DOT__u_mem__DOT__delay_wmask 
                = vlSelf->top__DOT__mem_wmask;
            vlSelf->top__DOT__u_mem__DOT__delay_rdata = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_write = 1U;
        } else {
            vlSelf->top__DOT__u_mem__DOT__rdata_w = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_waddr = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_wdata = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_wmask = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_rdata = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_read = 0U;
            vlSelf->top__DOT__u_mem__DOT__delay_write = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_IFU__DOT__pc = 0x7ffffffcU;
        vlSelf->top__DOT__u_IFU__DOT__araddr = 0U;
        __Vdly__top__DOT__u_IFU__DOT__arvalid = 0U;
        vlSelf->top__DOT__u_IFU__DOT__rready = 0U;
    } else if (vlSelf->top__DOT__u_IFU__DOT__arvalid) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
             & (IData)(vlSelf->top__DOT__idu_ready))) {
            __Vdly__top__DOT__u_IFU__DOT__arvalid = 0U;
            vlSelf->top__DOT__u_IFU__DOT__rready = 0U;
            vlSelf->top__DOT__u_IFU__DOT__araddr = 0U;
        } else if (((IData)(vlSelf->top__DOT__u_IFU__DOT__arready) 
                    & (IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid))) {
            vlSelf->top__DOT__u_IFU__DOT__pc = vlSelf->out_dnpc;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__pc = vlSelf->out_dnpc;
        __Vdly__top__DOT__u_IFU__DOT__arvalid = 1U;
        vlSelf->top__DOT__u_IFU__DOT__araddr = vlSelf->out_dnpc;
        vlSelf->top__DOT__u_IFU__DOT__rready = 1U;
    }
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
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
           == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
              == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
              == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
              == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
           == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
              == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
              == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                              >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__csr_rdata = vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_w)));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_w;
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
    vlSelf->top__DOT__u_IFU__DOT__arvalid = __Vdly__top__DOT__u_IFU__DOT__arvalid;
    vlSelf->top__DOT__u_IFU__DOT__arready = __Vdly__top__DOT__u_IFU__DOT__arready;
    vlSelf->top__DOT__idu_ready = __Vdly__top__DOT__idu_ready;
    vlSelf->top__DOT__u_IFU__DOT__rvalid = __Vdly__top__DOT__u_IFU__DOT__rvalid;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[0U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->top__DOT__csr_rdata)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csr_rdata;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__pair_list[0U] 
        = (0x20000U | (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                       >> 0x10U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__pair_list[1U] 
        = (0x10000U | (0xffffU & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                                  >> 8U)));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__pair_list[2U] 
        = (0xffffU & vlSelf->top__DOT__u_mem__DOT__delay_rdata);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[0U] 
        = (0x300U | (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                     >> 0x18U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[1U] 
        = (0x200U | (0xffU & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                              >> 0x10U)));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[2U] 
        = (0x100U | (0xffU & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                              >> 8U)));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[3U] 
        = (0xffU & vlSelf->top__DOT__u_mem__DOT__delay_rdata);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
           >> 0x10U);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                      >> 8U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[2U] 
        = (0xffffU & vlSelf->top__DOT__u_mem__DOT__delay_rdata);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
           >> 0x18U);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[1U] 
        = (0xffU & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                    >> 0x10U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[2U] 
        = (0xffU & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                    >> 8U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__u_mem__DOT__delay_rdata);
    vlSelf->ready = vlSelf->top__DOT__idu_ready;
    vlSelf->outpc = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__u_IFU__DOT__pc)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->out_snpc = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_IFU__DOT__pc;
    if (vlSelf->top__DOT__u_IFU__DOT__rvalid) {
        vlSelf->valid = 1U;
        vlSelf->top__DOT__u_IDU__DOT__ins = vlSelf->top__DOT__u_IFU__DOT__rdata;
        vlSelf->top__DOT__csr_waddr = (7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                             >> 0x14U));
        vlSelf->top__DOT__func3 = (7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                         >> 0xcU));
        vlSelf->top__DOT__rs2 = (0x1fU & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                          >> 0x14U));
        vlSelf->top__DOT__rs1 = (0x1fU & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                          >> 0xfU));
        vlSelf->top__DOT__rd = (0x1fU & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                         >> 7U));
        vlSelf->top__DOT__func7 = (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                   >> 0x19U);
        vlSelf->top__DOT__opcode = (0x7fU & vlSelf->top__DOT__u_IFU__DOT__rdata);
    } else {
        vlSelf->valid = 0U;
        vlSelf->top__DOT__u_IDU__DOT__ins = 0U;
        vlSelf->top__DOT__csr_waddr = 0U;
        vlSelf->top__DOT__func3 = 0U;
        vlSelf->top__DOT__rs2 = 0U;
        vlSelf->top__DOT__rs1 = 0U;
        vlSelf->top__DOT__rd = 0U;
        vlSelf->top__DOT__func7 = 0U;
        vlSelf->top__DOT__opcode = 0U;
    }
    vlSelf->top__DOT__u_IDU__DOT__immU = (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                            ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                               >> 0xcU)
                                            : 0U) << 0xcU);
    vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0 
        = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
           & (vlSelf->top__DOT__u_IFU__DOT__rdata >> 0x1eU));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6U] 
        = (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
             ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                >> 0xcU) : 0U) << 0xcU);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7U] 
        = (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
             ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                >> 0xcU) : 0U) << 0xcU);
    vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0 
        = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
           & (vlSelf->top__DOT__u_IFU__DOT__rdata >> 0x1fU));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_h = vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_b = vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[4U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->out_snpc)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[5U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->out_snpc)));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr_waddr) == 
           vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_waddr) 
              == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_waddr) 
              == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_waddr) 
              == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_waddr) 
              == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_waddr) 
              == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                       == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_WBU__DOT__fake_csr_write = vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immU)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[7U] 
        = (0x3700000000ULL | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immU)));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[2U] 
        = (0x50U | ((IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0)
                     ? 8U : 7U));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2U] 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0)
            ? 8U : 7U);
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__func3) == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem_wmask = vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__B_aluop = vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__reg_rdata2 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs2];
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs2];
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__reg_rdata1 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__mem_access = ((~ (IData)(vlSelf->top__DOT__mem_finish)) 
                                    & ((3U == (IData)(vlSelf->top__DOT__opcode)) 
                                       | (0x23U == (IData)(vlSelf->top__DOT__opcode))));
    if (((0x33U == (IData)(vlSelf->top__DOT__opcode)) 
         & (IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0))) {
        vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[7U] = 1U;
        vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7U] = 1U;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[7U] = 0U;
        vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7U] = 0U;
    }
    vlSelf->top__DOT__is_csr = ((0x73U == (IData)(vlSelf->top__DOT__opcode)) 
                                & (0U != (IData)(vlSelf->top__DOT__func3)));
    vlSelf->top__DOT__u_EXU__DOT__neg = ((0x63U == (IData)(vlSelf->top__DOT__opcode)) 
                                         & ((1U == (IData)(vlSelf->top__DOT__func3)) 
                                            | ((5U 
                                                == (IData)(vlSelf->top__DOT__func3)) 
                                               | (7U 
                                                  == (IData)(vlSelf->top__DOT__func3)))));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand1 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand2 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[1U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->top__DOT__func7) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->top__DOT__rd))))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[3U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                               << 0xcU) 
                                              | ((0xfffff800U 
                                                  & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                                      << 0xbU) 
                                                     & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                        << 4U))) 
                                                 | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                       ? 
                                                      (0x3fU 
                                                       & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                          >> 0x19U))
                                                       : 0U) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                         ? 
                                                        (0xfU 
                                                         & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                            >> 8U))
                                                         : 0U) 
                                                       << 1U)))))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[5U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                               << 0x14U) 
                                              | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                       >> 0xcU))
                                                    : 0U) 
                                                  << 0xcU) 
                                                 | ((0x7ff800U 
                                                     & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                                         << 0xbU) 
                                                        & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                           >> 9U))) 
                                                    | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                         ? 
                                                        (0x3ffU 
                                                         & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                            >> 0x15U))
                                                         : 0U) 
                                                       << 1U)))))));
    vlSelf->top__DOT__u_IDU__DOT__immI = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                           << 0xcU) 
                                          | ((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                              ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                 >> 0x14U)
                                              : 0U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                         ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                            >> 0x14U) : 0U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
            << 0xcU) | (((IData)(vlSelf->top__DOT__func7) 
                         << 5U) | (IData)(vlSelf->top__DOT__rd)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                         ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                            >> 0x14U) : 0U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
            << 0xcU) | ((0xfffff800U & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                         << 0xbU) & 
                                        (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                         << 4U))) | 
                        ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                            ? (0x3fU & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                        >> 0x19U)) : 0U) 
                          << 5U) | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                      ? (0xfU & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                 >> 8U))
                                      : 0U) << 1U))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                         ? (vlSelf->top__DOT__u_IFU__DOT__rdata 
                            >> 0x14U) : 0U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
            << 0x14U) | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                            ? (0xffU & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                        >> 0xcU)) : 0U) 
                          << 0xcU) | ((0x7ff800U & 
                                       (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                         << 0xbU) & 
                                        (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                         >> 9U))) | 
                                      (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                         ? (0x3ffU 
                                            & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                               >> 0x15U))
                                         : 0U) << 1U))));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[0U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h)));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h)))));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_h;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b)));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                                              >> 7U)))) 
                            << 8U) | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b))));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_b;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[2U] 
        = (0x630U | (IData)(vlSelf->top__DOT__u_EXU__DOT__B_aluop));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_EXU__DOT__B_aluop;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__reg_rdata2));
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__reg_rdata1)));
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__reg_rdata1)));
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->top__DOT__csr_rdata 
                                             | vlSelf->top__DOT__reg_rdata1))));
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_rdata | vlSelf->top__DOT__reg_rdata1);
    vlSelf->top__DOT__csr_write = ((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                    ? 0U : ((0x73U 
                                             == vlSelf->top__DOT__u_IDU__DOT__ins)
                                             ? 6U : 
                                            ((IData)(vlSelf->top__DOT__is_csr)
                                              ? (IData)(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write)
                                              : 0U)));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__IR_aluop = vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__select_oprand1) 
           == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__select_oprand1) 
              == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__select_oprand1) 
              == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
              [2U]));
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
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__select_oprand2) 
           == vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__select_oprand2) 
              == vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[4U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem_rdata = vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__fake_csr_wdata = vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[0U] 
        = (0x330U | (IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[1U] 
        = (0x130U | (IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__imm)));
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[3U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__mem_rdata)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__mem_rdata;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
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
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
           == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
              == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[0U] 
        = (0xa00000000ULL | (QData)((IData)(((vlSelf->top__DOT__oprand1 
                                              == vlSelf->top__DOT__oprand2)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[1U] 
        = (0x900000000ULL | (QData)((IData)(((vlSelf->top__DOT__oprand1 
                                              < vlSelf->top__DOT__oprand2)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[2U] 
        = (0x800000000ULL | (QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                           (0x1fU 
                                                            & vlSelf->top__DOT__oprand2)))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[3U] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->top__DOT__oprand1 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__oprand2)))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(((0x1fU 
                                              >= vlSelf->top__DOT__oprand2)
                                              ? (vlSelf->top__DOT__oprand1 
                                                 << vlSelf->top__DOT__oprand2)
                                              : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[5U] 
        = (0x500000000ULL | (QData)((IData)((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[6U] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->top__DOT__oprand1 
                                             & vlSelf->top__DOT__oprand2))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[7U] 
        = (0x300000000ULL | (QData)((IData)((vlSelf->top__DOT__oprand1 
                                             | vlSelf->top__DOT__oprand2))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[8U] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->top__DOT__oprand1 
                                             ^ vlSelf->top__DOT__oprand2))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[9U] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->top__DOT__oprand1 
                                             - vlSelf->top__DOT__oprand2))));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[0xaU] 
        = (QData)((IData)((vlSelf->top__DOT__oprand1 
                           + vlSelf->top__DOT__oprand2)));
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
    if (vlSelf->top__DOT__u_EXU__DOT__neg) {
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
        vlSelf->top__DOT__exu_res = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
                                     | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
    } else {
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__exu_res = vlSelf->top__DOT__u_EXU__DOT__alu_res;
    }
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__reg_wdata = vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out;
    vlSelf->out_dnpc = ((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                         ? vlSelf->top__DOT__u_CSR__DOT__rf
                        [5U] : ((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                 ? vlSelf->top__DOT__u_CSR__DOT__rf
                                [1U] : (((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                                         | (0x67U == (IData)(vlSelf->top__DOT__opcode)))
                                         ? vlSelf->top__DOT__exu_res
                                         : (((0x63U 
                                              == (IData)(vlSelf->top__DOT__opcode)) 
                                             & vlSelf->top__DOT__exu_res)
                                             ? (vlSelf->top__DOT__imm 
                                                + vlSelf->top__DOT__u_IFU__DOT__pc)
                                             : vlSelf->out_snpc))));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[1U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->top__DOT__exu_res)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[2U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__exu_res)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->top__DOT__exu_res)));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[7U] 
        = (0x3700000000ULL | (QData)((IData)(vlSelf->top__DOT__exu_res)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
