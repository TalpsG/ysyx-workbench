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
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins;
    __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(vlSelf->ins);
    VL_WRITEF("Regfile:\n\nwen:%1#,waddr:%2#,wdata:%8x\n\n",
              1,((8U == (IData)(vlSelf->top__DOT__extop)) 
                 | ((9U == (IData)(vlSelf->top__DOT__extop)) 
                    | ((1U == (IData)(vlSelf->top__DOT__extop)) 
                       | ((2U == (IData)(vlSelf->top__DOT__extop)) 
                          | (0xaU == (IData)(vlSelf->top__DOT__extop)))))),
              5,(0x1fU & (vlSelf->ins >> 7U)),32,((IData)(vlSelf->top__DOT__pc_write)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->outpc)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__extop))
                                                    ? vlSelf->top__DOT__mem_rdata
                                                    : vlSelf->top__DOT__res)));
    __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 0U;
    Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP(vlSelf->out_dnpc, __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins);
    vlSelf->ins = __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins;
    VL_WRITEF("pc:%8x,ins:%8x\n\n",32,vlSelf->out_dnpc,
              32,vlSelf->ins);
    if (((8U == (IData)(vlSelf->top__DOT__extop)) | 
         ((9U == (IData)(vlSelf->top__DOT__extop)) 
          | ((1U == (IData)(vlSelf->top__DOT__extop)) 
             | ((2U == (IData)(vlSelf->top__DOT__extop)) 
                | (0xaU == (IData)(vlSelf->top__DOT__extop))))))) {
        __Vdlyvval__top__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__pc_write) ? 
               ((IData)(4U) + vlSelf->outpc) : ((1U 
                                                 == (IData)(vlSelf->top__DOT__extop))
                                                 ? vlSelf->top__DOT__mem_rdata
                                                 : vlSelf->top__DOT__res));
        __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ins >> 7U));
    }
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__cu__DOT__fake_aluop = vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out;
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
    vlSelf->top__DOT__extop = ((IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out)
                                : 0xfU);
    if (__Vdlyvset__top__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__regfile__DOT__rf__v0;
        vlSelf->top__DOT__regfile__DOT__rf[0U] = 0U;
    }
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__cu__DOT__fake_aluop;
    vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__cu__DOT__fake_aluop;
    vlSelf->outpc = vlSelf->out_dnpc;
    vlSelf->top__DOT__pc_write = ((0U == (IData)(vlSelf->top__DOT__extop)) 
                                  | ((7U == (IData)(vlSelf->top__DOT__extop)) 
                                     | (6U == (IData)(vlSelf->top__DOT__extop))));
    vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key 
        = ((0x70U & (vlSelf->ins >> 8U)) | (IData)(vlSelf->top__DOT__extop));
    vlSelf->top__DOT__sub = ((IData)(((0x40000000U 
                                       == (0x40007000U 
                                           & vlSelf->ins)) 
                                      & (0xaU == (IData)(vlSelf->top__DOT__extop)))) 
                             | (6U == (IData)(vlSelf->top__DOT__extop)));
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
    vlSelf->top__DOT__aluop = ((IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit)
                                ? (IData)(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out)
                                : 0U);
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
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->outpc;
    vlSelf->top__DOT__mem_wdata = vlSelf->gpr[(0x1fU 
                                               & (vlSelf->ins 
                                                  >> 0x14U))];
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[2U] 
        = vlSelf->gpr[(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->gpr[(0x1fU & (vlSelf->ins >> 0x14U))];
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
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__exu__DOT__num1 & vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__exu__DOT__num1 ^ vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->top__DOT__exu__DOT__num1 | vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__exu__DOT__num1 - vlSelf->top__DOT__exu__DOT__num2);
    if ((0x1fU >= (0x1fU & vlSelf->top__DOT__exu__DOT__num2))) {
        vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[5U] 
            = (vlSelf->top__DOT__exu__DOT__num1 << 
               (0x1fU & vlSelf->top__DOT__exu__DOT__num2));
        vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0 
            = (vlSelf->top__DOT__exu__DOT__num1 >> 
               (0x1fU & vlSelf->top__DOT__exu__DOT__num2));
    } else {
        vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[5U] = 0U;
        vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0 = 0U;
    }
    vlSelf->top__DOT__exu__DOT__alu__DOT__res_set = 
        (vlSelf->top__DOT__exu__DOT__num1 - vlSelf->top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0;
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[6U] 
        = ((IData)(vlSelf->top__DOT__sub) ? vlSelf->top__DOT__exu__DOT__alu__DOT__res_set
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
    vlSelf->top__DOT__res = ((IData)(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit)
                              ? vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out
                              : 0U);
    vlSelf->out_dnpc = ((IData)(vlSelf->top__DOT__pc_write)
                         ? vlSelf->top__DOT__res : 
                        ((6U == (IData)(vlSelf->top__DOT__extop))
                          ? (vlSelf->outpc + vlSelf->top__DOT__imm)
                          : ((IData)(4U) + vlSelf->outpc)));
    if (vlSelf->top__DOT__valid) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__pmem_read_TOP(vlSelf->top__DOT__res, vlSelf->__Vtask_top__DOT__u_mem__DOT__pmem_read__2__rdata);
        vlSelf->top__DOT__mem_rdata = vlSelf->__Vtask_top__DOT__u_mem__DOT__pmem_read__2__rdata;
        if ((5U == (IData)(vlSelf->top__DOT__extop))) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__pmem_write_TOP(vlSelf->top__DOT__res, vlSelf->top__DOT__mem_wdata, (IData)(vlSelf->top__DOT__mem_mask));
        }
    } else {
        vlSelf->top__DOT__mem_rdata = 0U;
    }
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
