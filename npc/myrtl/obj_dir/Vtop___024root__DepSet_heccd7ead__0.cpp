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

void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(IData/*31:0*/ ins);
void Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP(IData/*31:0*/ in, IData/*31:0*/ &ins);
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ top__DOT__reg_waddr;
    top__DOT__reg_waddr = 0;
    IData/*31:0*/ __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins;
    __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csr__DOT__rf__v0;
    __Vdlyvval__top__DOT__csr__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csr__DOT__rf__v0;
    __Vdlyvset__top__DOT__csr__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csr__DOT__rf__v1;
    __Vdlyvval__top__DOT__csr__DOT__rf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csr__DOT__rf__v1;
    __Vdlyvset__top__DOT__csr__DOT__rf__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csr__DOT__rf__v2;
    __Vdlyvval__top__DOT__csr__DOT__rf__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csr__DOT__rf__v2;
    __Vdlyvset__top__DOT__csr__DOT__rf__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csr__DOT__rf__v3;
    __Vdlyvval__top__DOT__csr__DOT__rf__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csr__DOT__rf__v3;
    __Vdlyvset__top__DOT__csr__DOT__rf__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csr__DOT__rf__v4;
    __Vdlyvval__top__DOT__csr__DOT__rf__v4 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csr__DOT__rf__v4;
    __Vdlyvset__top__DOT__csr__DOT__rf__v4 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__csr__DOT__rf__v5;
    __Vdlyvval__top__DOT__csr__DOT__rf__v5 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__csr__DOT__rf__v5;
    __Vdlyvset__top__DOT__csr__DOT__rf__v5 = 0;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(vlSelf->ins);
    __Vdlyvset__top__DOT__csr__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__csr__DOT__rf__v1 = 0U;
    __Vdlyvset__top__DOT__csr__DOT__rf__v2 = 0U;
    __Vdlyvset__top__DOT__csr__DOT__rf__v3 = 0U;
    __Vdlyvset__top__DOT__csr__DOT__rf__v4 = 0U;
    __Vdlyvset__top__DOT__csr__DOT__rf__v5 = 0U;
    __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 0U;
    top__DOT__reg_waddr = (0x1fU & (vlSelf->ins >> 7U));
    Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP(vlSelf->out_dnpc, __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins);
    vlSelf->ins = __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins;
    if ((1U & (IData)(vlSelf->top__DOT__csr_wen))) {
        __Vdlyvval__top__DOT__csr__DOT__rf__v0 = vlSelf->top__DOT____Vcellinp__csr__wdata
            [1U];
        __Vdlyvset__top__DOT__csr__DOT__rf__v0 = 1U;
    }
    if ((2U & (IData)(vlSelf->top__DOT__csr_wen))) {
        __Vdlyvval__top__DOT__csr__DOT__rf__v1 = vlSelf->top__DOT____Vcellinp__csr__wdata
            [1U];
        __Vdlyvset__top__DOT__csr__DOT__rf__v1 = 1U;
    }
    if ((4U & (IData)(vlSelf->top__DOT__csr_wen))) {
        __Vdlyvval__top__DOT__csr__DOT__rf__v2 = vlSelf->top__DOT____Vcellinp__csr__wdata
            [2U];
        __Vdlyvset__top__DOT__csr__DOT__rf__v2 = 1U;
    }
    if ((8U & (IData)(vlSelf->top__DOT__csr_wen))) {
        __Vdlyvval__top__DOT__csr__DOT__rf__v3 = vlSelf->top__DOT____Vcellinp__csr__wdata
            [3U];
        __Vdlyvset__top__DOT__csr__DOT__rf__v3 = 1U;
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__csr_wen))) {
        __Vdlyvval__top__DOT__csr__DOT__rf__v4 = vlSelf->top__DOT____Vcellinp__csr__wdata
            [4U];
        __Vdlyvset__top__DOT__csr__DOT__rf__v4 = 1U;
    }
    if ((0x20U & (IData)(vlSelf->top__DOT__csr_wen))) {
        __Vdlyvval__top__DOT__csr__DOT__rf__v5 = vlSelf->top__DOT____Vcellinp__csr__wdata
            [5U];
        __Vdlyvset__top__DOT__csr__DOT__rf__v5 = 1U;
    }
    if (((8U == (IData)(vlSelf->top__DOT__extop)) | 
         ((9U == (IData)(vlSelf->top__DOT__extop)) 
          | ((1U == (IData)(vlSelf->top__DOT__extop)) 
             | ((2U == (IData)(vlSelf->top__DOT__extop)) 
                | ((0xaU == (IData)(vlSelf->top__DOT__extop)) 
                   | ((7U == (IData)(vlSelf->top__DOT__extop)) 
                      | ((0U == (IData)(vlSelf->top__DOT__extop)) 
                         | (4U == (IData)(vlSelf->top__DOT__extop)))))))))) {
        __Vdlyvval__top__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__csr_write)
                ? vlSelf->top__DOT__csr_rdata : ((IData)(vlSelf->top__DOT__pc_write)
                                                  ? vlSelf->out_snpc
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__extop))
                                                   ? vlSelf->top__DOT__mem_rdata
                                                   : vlSelf->top__DOT__res)));
        __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0 
            = top__DOT__reg_waddr;
    }
    vlSelf->outpc = vlSelf->out_dnpc;
    vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_mask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__cu__DOT__aluop_B = vlSelf->top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__cu__DOT__aluop_I = vlSelf->top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->ins);
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (0xfffff000U & vlSelf->ins);
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->ins) | ((0x800U & 
                                           (vlSelf->ins 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->ins 
                                                >> 0x14U)))));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->ins << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ins 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ins 
                                                      >> 7U)))));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->ins >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 7U))));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[9U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    if (__Vdlyvset__top__DOT__csr__DOT__rf__v0) {
        vlSelf->top__DOT__csr__DOT__rf[0U] = __Vdlyvval__top__DOT__csr__DOT__rf__v0;
    }
    if (__Vdlyvset__top__DOT__csr__DOT__rf__v1) {
        vlSelf->top__DOT__csr__DOT__rf[1U] = __Vdlyvval__top__DOT__csr__DOT__rf__v1;
    }
    if (__Vdlyvset__top__DOT__csr__DOT__rf__v2) {
        vlSelf->top__DOT__csr__DOT__rf[2U] = __Vdlyvval__top__DOT__csr__DOT__rf__v2;
    }
    if (__Vdlyvset__top__DOT__csr__DOT__rf__v3) {
        vlSelf->top__DOT__csr__DOT__rf[3U] = __Vdlyvval__top__DOT__csr__DOT__rf__v3;
    }
    if (__Vdlyvset__top__DOT__csr__DOT__rf__v4) {
        vlSelf->top__DOT__csr__DOT__rf[4U] = __Vdlyvval__top__DOT__csr__DOT__rf__v4;
    }
    if (__Vdlyvset__top__DOT__csr__DOT__rf__v5) {
        vlSelf->top__DOT__csr__DOT__rf[5U] = __Vdlyvval__top__DOT__csr__DOT__rf__v5;
    }
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__extop = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out)
                                : 0xfU);
    if (__Vdlyvset__top__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__regfile__DOT__rf__v0;
        vlSelf->top__DOT__regfile__DOT__rf[0U] = 0U;
    }
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__cu__DOT__aluop_B;
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__cu__DOT__aluop_I;
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__cu__DOT__aluop_I;
    vlSelf->top__DOT____Vcellout__csr__data[5U] = vlSelf->top__DOT__csr__DOT__rf
        [5U];
    vlSelf->top__DOT____Vcellout__csr__data[4U] = vlSelf->top__DOT__csr__DOT__rf
        [4U];
    vlSelf->top__DOT____Vcellout__csr__data[3U] = vlSelf->top__DOT__csr__DOT__rf
        [3U];
    vlSelf->top__DOT____Vcellout__csr__data[2U] = vlSelf->top__DOT__csr__DOT__rf
        [2U];
    vlSelf->top__DOT____Vcellout__csr__data[1U] = vlSelf->top__DOT__csr__DOT__rf
        [1U];
    vlSelf->top__DOT____Vcellout__csr__data[0U] = vlSelf->top__DOT__csr__DOT__rf
        [0U];
    vlSelf->top__DOT__pc_write = ((0U == (IData)(vlSelf->top__DOT__extop)) 
                                  | ((7U == (IData)(vlSelf->top__DOT__extop)) 
                                     | (6U == (IData)(vlSelf->top__DOT__extop))));
    vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key 
        = ((0x70U & (vlSelf->ins >> 8U)) | (IData)(vlSelf->top__DOT__extop));
    vlSelf->top__DOT__csr_write = ((4U == (IData)(vlSelf->top__DOT__extop)) 
                                   & (0x100073U != vlSelf->ins));
    vlSelf->top__DOT__sub = ((IData)(((0x40000000U 
                                       == (0x40007000U 
                                           & vlSelf->ins)) 
                                      & (0xaU == (IData)(vlSelf->top__DOT__extop)))) 
                             | ((6U == (IData)(vlSelf->top__DOT__extop)) 
                                & ((0U == (7U & (vlSelf->ins 
                                                 >> 0xcU))) 
                                   | (1U == (7U & (vlSelf->ins 
                                                   >> 0xcU))))));
    vlSelf->top__DOT__select_num2 = ((6U == (IData)(vlSelf->top__DOT__extop)) 
                                     | (0xaU == (IData)(vlSelf->top__DOT__extop)));
    vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                       == vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__select_num1 = ((IData)(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit)
                                      ? (IData)(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out)
                                      : 0U);
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                       == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__imm = ((IData)(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit)
                              ? vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out
                              : 0U);
    vlSelf->top__DOT____Vcellout__regfile__data[0x1fU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1fU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1eU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1eU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1dU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1dU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1cU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1cU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1bU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1bU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1aU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1aU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x19U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x19U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x18U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x18U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x17U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x17U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x16U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x16U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x15U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x15U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x14U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x14U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x13U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x13U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x12U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x12U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x11U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x11U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x10U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x10U];
    vlSelf->top__DOT____Vcellout__regfile__data[0xfU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xfU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xeU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xeU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xdU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xdU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xcU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xcU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xbU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xbU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xaU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xaU];
    vlSelf->top__DOT____Vcellout__regfile__data[9U] 
        = vlSelf->top__DOT__regfile__DOT__rf[9U];
    vlSelf->top__DOT____Vcellout__regfile__data[8U] 
        = vlSelf->top__DOT__regfile__DOT__rf[8U];
    vlSelf->top__DOT____Vcellout__regfile__data[7U] 
        = vlSelf->top__DOT__regfile__DOT__rf[7U];
    vlSelf->top__DOT____Vcellout__regfile__data[6U] 
        = vlSelf->top__DOT__regfile__DOT__rf[6U];
    vlSelf->top__DOT____Vcellout__regfile__data[5U] 
        = vlSelf->top__DOT__regfile__DOT__rf[5U];
    vlSelf->top__DOT____Vcellout__regfile__data[4U] 
        = vlSelf->top__DOT__regfile__DOT__rf[4U];
    vlSelf->top__DOT____Vcellout__regfile__data[3U] 
        = vlSelf->top__DOT__regfile__DOT__rf[3U];
    vlSelf->top__DOT____Vcellout__regfile__data[2U] 
        = vlSelf->top__DOT__regfile__DOT__rf[2U];
    vlSelf->top__DOT____Vcellout__regfile__data[1U] 
        = vlSelf->top__DOT__regfile__DOT__rf[1U];
    vlSelf->top__DOT____Vcellout__regfile__data[0U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0U];
    vlSelf->out_snpc = ((IData)(4U) + vlSelf->outpc);
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->outpc;
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                       == vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__extop) 
                          == vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__extop) == vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__aluop = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out)
                                : 0U);
    vlSelf->csr_reg[5U] = vlSelf->top__DOT____Vcellout__csr__data
        [5U];
    vlSelf->csr_reg[4U] = vlSelf->top__DOT____Vcellout__csr__data
        [4U];
    vlSelf->csr_reg[3U] = vlSelf->top__DOT____Vcellout__csr__data
        [3U];
    vlSelf->csr_reg[2U] = vlSelf->top__DOT____Vcellout__csr__data
        [2U];
    vlSelf->csr_reg[1U] = vlSelf->top__DOT____Vcellout__csr__data
        [1U];
    vlSelf->csr_reg[0U] = vlSelf->top__DOT____Vcellout__csr__data
        [0U];
    vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key) 
                       == vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key) 
           == vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key) 
                          == vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key) 
              == vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key) 
                          == vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key) 
              == vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mem_mask = ((IData)(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__imm;
    vlSelf->gpr[0x1fU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1fU];
    vlSelf->gpr[0x1eU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1eU];
    vlSelf->gpr[0x1dU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1dU];
    vlSelf->gpr[0x1cU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1cU];
    vlSelf->gpr[0x1bU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1bU];
    vlSelf->gpr[0x1aU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1aU];
    vlSelf->gpr[0x19U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x19U];
    vlSelf->gpr[0x18U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x18U];
    vlSelf->gpr[0x17U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x17U];
    vlSelf->gpr[0x16U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x16U];
    vlSelf->gpr[0x15U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x15U];
    vlSelf->gpr[0x14U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x14U];
    vlSelf->gpr[0x13U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x13U];
    vlSelf->gpr[0x12U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x12U];
    vlSelf->gpr[0x11U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x11U];
    vlSelf->gpr[0x10U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x10U];
    vlSelf->gpr[0xfU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xfU];
    vlSelf->gpr[0xeU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xeU];
    vlSelf->gpr[0xdU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xdU];
    vlSelf->gpr[0xcU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xcU];
    vlSelf->gpr[0xbU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xbU];
    vlSelf->gpr[0xaU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xaU];
    vlSelf->gpr[9U] = vlSelf->top__DOT____Vcellout__regfile__data
        [9U];
    vlSelf->gpr[8U] = vlSelf->top__DOT____Vcellout__regfile__data
        [8U];
    vlSelf->gpr[7U] = vlSelf->top__DOT____Vcellout__regfile__data
        [7U];
    vlSelf->gpr[6U] = vlSelf->top__DOT____Vcellout__regfile__data
        [6U];
    vlSelf->gpr[5U] = vlSelf->top__DOT____Vcellout__regfile__data
        [5U];
    vlSelf->gpr[4U] = vlSelf->top__DOT____Vcellout__regfile__data
        [4U];
    vlSelf->gpr[3U] = vlSelf->top__DOT____Vcellout__regfile__data
        [3U];
    vlSelf->gpr[2U] = vlSelf->top__DOT____Vcellout__regfile__data
        [2U];
    vlSelf->gpr[1U] = vlSelf->top__DOT____Vcellout__regfile__data
        [1U];
    vlSelf->gpr[0U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0U];
    vlSelf->top__DOT__csr_addr = ((0x73U == vlSelf->ins)
                                   ? 5U : ((IData)(vlSelf->top__DOT__csr_write)
                                            ? (7U & 
                                               (vlSelf->ins 
                                                >> 0x14U))
                                            : 7U));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_addr) 
                       == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__csr_addr) == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_addr) 
                          == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_addr) == 
              vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_addr) 
                          == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_addr) == 
              vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_addr) 
                          == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_addr) == 
              vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_addr) 
                          == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_addr) == 
              vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_addr) 
                          == vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__csr_addr) == 
              vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__fake_csr_wen = ((IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__hit)
                                       ? (IData)(vlSelf->top__DOT__get_fake_csr_wen__DOT__i0__DOT__lut_out)
                                       : 0U);
    vlSelf->top__DOT__rs2_value = vlSelf->gpr[(0x1fU 
                                               & (vlSelf->ins 
                                                  >> 0x14U))];
    vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->gpr[(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__rs1_value = vlSelf->gpr[(0x1fU 
                                               & (vlSelf->ins 
                                                  >> 0xfU))];
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[2U] 
        = vlSelf->gpr[(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->gpr[(0x1fU & (vlSelf->ins >> 0x14U))];
    vlSelf->top__DOT__csr_rdata = ((IData)(vlSelf->top__DOT__csr_write)
                                    ? ((5U >= (IData)(vlSelf->top__DOT__csr_addr))
                                        ? vlSelf->csr_reg
                                       [vlSelf->top__DOT__csr_addr]
                                        : 0U) : 0U);
    vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_rdata | vlSelf->top__DOT__rs1_value);
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_num1) 
                       == vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_num1) 
                          == vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_num1) 
                          == vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exu__DOT__num1 = vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_num2) 
                       == vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__select_num2) == 
           vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_num2) 
                          == vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__select_num2) 
              == vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__num2 = ((IData)(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit)
                                         ? vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out
                                         : 0U);
    vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__fake_csr_wdata = vlSelf->top__DOT__get_csr_wdata__DOT__i0__DOT__lut_out;
    if (vlSelf->top__DOT__csr_write) {
        vlSelf->top__DOT__csr_wdata[3U] = vlSelf->top__DOT__fake_csr_wdata;
        vlSelf->top__DOT__csr_wdata[4U] = vlSelf->top__DOT__fake_csr_wdata;
        vlSelf->top__DOT__csr_wdata[5U] = vlSelf->top__DOT__fake_csr_wdata;
        vlSelf->top__DOT____VdfgTmp_h9b1c84bc__0 = vlSelf->top__DOT__fake_csr_wdata;
    } else {
        vlSelf->top__DOT__csr_wdata[3U] = 0U;
        vlSelf->top__DOT__csr_wdata[4U] = 0U;
        vlSelf->top__DOT__csr_wdata[5U] = 0U;
        vlSelf->top__DOT____VdfgTmp_h9b1c84bc__0 = 0U;
    }
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[0U] 
        = ((vlSelf->top__DOT__exu__DOT__num1 < vlSelf->top__DOT__exu__DOT__num2)
            ? 1U : 0U);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__exu__DOT__num1 & vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__exu__DOT__num1 ^ vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__exu__DOT__num1 | vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[4U] 
        = (VL_LTS_III(32, vlSelf->top__DOT__exu__DOT__num1, vlSelf->top__DOT__exu__DOT__num2)
            ? 1U : 0U);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->top__DOT__exu__DOT__num1 << (0x1fU 
                                                & vlSelf->top__DOT__exu__DOT__num2));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[5U] 
        = ((0x40000000U & vlSelf->ins) ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__exu__DOT__num1, 
                                                        (0x1fU 
                                                         & vlSelf->top__DOT__exu__DOT__num2))
            : (vlSelf->top__DOT__exu__DOT__num1 >> 
               (0x1fU & vlSelf->top__DOT__exu__DOT__num2)));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[7U] 
        = ((IData)(vlSelf->top__DOT__sub) ? (vlSelf->top__DOT__exu__DOT__num1 
                                             - vlSelf->top__DOT__exu__DOT__num2)
            : (vlSelf->top__DOT__exu__DOT__num1 + vlSelf->top__DOT__exu__DOT__num2));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                       == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__aluop) 
                          == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__aluop) == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__exu__DOT__alu_res = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit)
                                            ? vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out
                                            : 0U);
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu_res)));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (- (IData)((1U == vlSelf->top__DOT__exu__DOT__alu_res)));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu_res)));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (- (IData)((1U == vlSelf->top__DOT__exu__DOT__alu_res)));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (~ (- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu_res))));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu_res)));
    if ((0x73U == vlSelf->ins)) {
        vlSelf->top__DOT__csr_wen = 7U;
        vlSelf->top__DOT__csr_wdata[0U] = 0U;
        vlSelf->top__DOT__csr_wdata[2U] = 1U;
        vlSelf->top__DOT__csr_wdata[1U] = vlSelf->out_snpc;
    } else {
        vlSelf->top__DOT__csr_wen = vlSelf->top__DOT__fake_csr_wen;
        vlSelf->top__DOT__csr_wdata[0U] = vlSelf->top__DOT____VdfgTmp_h9b1c84bc__0;
        vlSelf->top__DOT__csr_wdata[2U] = vlSelf->top__DOT____VdfgTmp_h9b1c84bc__0;
        vlSelf->top__DOT__csr_wdata[1U] = vlSelf->top__DOT____VdfgTmp_h9b1c84bc__0;
    }
    vlSelf->top__DOT____Vcellinp__csr__wdata[5U] = 
        vlSelf->top__DOT__csr_wdata[5U];
    vlSelf->top__DOT____Vcellinp__csr__wdata[4U] = 
        vlSelf->top__DOT__csr_wdata[4U];
    vlSelf->top__DOT____Vcellinp__csr__wdata[3U] = 
        vlSelf->top__DOT__csr_wdata[3U];
    vlSelf->top__DOT____Vcellinp__csr__wdata[2U] = 
        vlSelf->top__DOT__csr_wdata[2U];
    vlSelf->top__DOT____Vcellinp__csr__wdata[1U] = 
        vlSelf->top__DOT__csr_wdata[1U];
    vlSelf->top__DOT____Vcellinp__csr__wdata[0U] = 
        vlSelf->top__DOT__csr_wdata[0U];
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->ins >> 0xcU)) == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ins >> 0xcU)) == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ins >> 0xcU)) == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ins >> 0xcU)) == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ins >> 0xcU)) == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->ins >> 0xcU)) == vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__exu__DOT__branch_res = ((IData)(vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                               ? vlSelf->top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                               : 0U);
    vlSelf->top__DOT__res = ((6U == (IData)(vlSelf->top__DOT__extop))
                              ? vlSelf->top__DOT__exu__DOT__branch_res
                              : vlSelf->top__DOT__exu__DOT__alu_res);
    vlSelf->out_dnpc = ((0x73U == vlSelf->ins) ? vlSelf->top__DOT__csr_rdata
                         : ((IData)(vlSelf->top__DOT__pc_write)
                             ? ((6U == (IData)(vlSelf->top__DOT__extop))
                                 ? ((0xffffffffU == vlSelf->top__DOT__res)
                                     ? (vlSelf->outpc 
                                        + vlSelf->top__DOT__imm)
                                     : vlSelf->out_snpc)
                                 : vlSelf->top__DOT__res)
                             : vlSelf->out_snpc));
    if (((1U == (IData)(vlSelf->top__DOT__extop)) | 
         (5U == (IData)(vlSelf->top__DOT__extop)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_read_TOP(vlSelf->top__DOT__res, vlSelf->__Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata);
        vlSelf->top__DOT__u_mem__DOT__rdata_w = vlSelf->__Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata;
        if ((5U == (IData)(vlSelf->top__DOT__extop))) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_write_TOP(vlSelf->top__DOT__res, 
                                                                                ((IData)(vlSelf->top__DOT__csr_write)
                                                                                 ? vlSelf->top__DOT__csr_rdata
                                                                                 : vlSelf->top__DOT__rs2_value), (IData)(vlSelf->top__DOT__mem_mask));
        }
    } else {
        vlSelf->top__DOT__u_mem__DOT__rdata_w = 0U;
    }
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_w;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__u_mem__DOT__rdata_w >> 0x10U);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                      >> 8U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[2U] 
        = (0xffffU & vlSelf->top__DOT__u_mem__DOT__rdata_w);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__u_mem__DOT__rdata_w >> 0x18U);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[1U] 
        = (0xffU & (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                    >> 0x10U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[2U] 
        = (0xffU & (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                    >> 8U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__u_mem__DOT__rdata_w);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelf->top__DOT__res) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_h = vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelf->top__DOT__res) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_b = vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_h;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_b;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem_rdata = vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out;
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
                    VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc/top.sv", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc/top.sv", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
