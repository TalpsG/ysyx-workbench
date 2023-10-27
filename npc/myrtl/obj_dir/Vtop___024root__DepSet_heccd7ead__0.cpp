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
void Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP(IData/*31:0*/ in, IData/*31:0*/ &ins);
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins;
    __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP(vlSelf->ins);
    VL_WRITEF("jump_flag:%1#,exu_res:%8x,branch_flag:%1#,branch_pc:%8x\n",
              1,((0x6fU == (0x7fU & vlSelf->ins)) | 
                 (0x67U == (0x7fU & vlSelf->ins))),
              32,vlSelf->top__DOT__exu_res,1,((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->ins)) 
                                              & vlSelf->top__DOT__exu_res),
              32,(vlSelf->top__DOT__imm + vlSelf->top__DOT__u_IFU__DOT__pc));
    __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    if (((0x37U == (0x7fU & vlSelf->ins)) | ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->ins)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ins)) 
                                                | ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ins)) 
                                                   | ((3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ins)) 
                                                      | ((0x13U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ins)) 
                                                         | (0x33U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ins))))))))) {
        __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0 
            = vlSelf->top__DOT__reg_wdata;
        __Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ins >> 7U));
    }
    if (VL_UNLIKELY(vlSelf->rst)) {
        VL_WRITEF("rst\n");
        vlSelf->top__DOT__u_IFU__DOT__pc = 0x7ffffffcU;
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__u_IFU__DOT__fetch_TOP(vlSelf->out_dnpc, __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins);
        vlSelf->ins = __Vtask_top__DOT__u_IFU__DOT__fetch__0__ins;
        vlSelf->top__DOT__u_IFU__DOT__pc = vlSelf->out_dnpc;
    }
    if (__Vdlyvset__top__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->top__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__top__DOT__u_RegisterFile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_RegisterFile__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem_wmask = vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__B_aluop = vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2U] 
        = ((0x40000000U & vlSelf->ins) ? 8U : 7U);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7U] 
        = ((IData)((0x40000033U == (0x4000007fU & vlSelf->ins)))
            ? 1U : 0U);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand1 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand2 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->ins >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 7U))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->ins << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ins 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ins 
                                                      >> 7U)))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->ins) | ((0x800U & 
                                           (vlSelf->ins 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->ins 
                                                >> 0x14U)))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ins);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ins);
    vlSelf->top__DOT__reg_rdata2 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ins >> 0x14U))];
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
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [(0x1fU & (vlSelf->ins >> 0x14U))];
    vlSelf->outpc = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->out_snpc = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_EXU__DOT__B_aluop;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->ins >> 0xcU)) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__IR_aluop = vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out;
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
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
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
    if ((0x1fU >= vlSelf->top__DOT__oprand2)) {
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->top__DOT__oprand1 >> vlSelf->top__DOT__oprand2);
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3U] 
            = VL_SHIFTRS_III(32,32,32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2);
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4U] 
            = (vlSelf->top__DOT__oprand1 << vlSelf->top__DOT__oprand2);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3U] 
            = (- (vlSelf->top__DOT__oprand1 >> 0x1fU));
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4U] = 0U;
    }
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
    if (((0x63U == (0x7fU & vlSelf->ins)) & ((1U == 
                                              (7U & 
                                               (vlSelf->ins 
                                                >> 0xcU))) 
                                             | ((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ins 
                                                     >> 0xcU))) 
                                                | (7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ins 
                                                       >> 0xcU))))))) {
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__exu_res = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
                                     | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
    } else {
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__exu_res = vlSelf->top__DOT__u_EXU__DOT__alu_res;
    }
    vlSelf->out_dnpc = (((0x6fU == (0x7fU & vlSelf->ins)) 
                         | (0x67U == (0x7fU & vlSelf->ins)))
                         ? vlSelf->top__DOT__exu_res
                         : (((0x63U == (0x7fU & vlSelf->ins)) 
                             & vlSelf->top__DOT__exu_res)
                             ? (vlSelf->top__DOT__imm 
                                + vlSelf->top__DOT__u_IFU__DOT__pc)
                             : vlSelf->out_snpc));
    if ((3U == (0x7fU & vlSelf->ins))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_read_TOP(vlSelf->top__DOT__exu_res, vlSelf->__Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata);
        vlSelf->top__DOT__u_mem__DOT__rdata_w = vlSelf->__Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata;
    } else if ((0x23U == (0x7fU & vlSelf->ins))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_mem__DOT__npc_mem_write_TOP(vlSelf->top__DOT__exu_res, vlSelf->top__DOT__reg_rdata2, (IData)(vlSelf->top__DOT__mem_wmask));
        vlSelf->top__DOT__u_mem__DOT__rdata_w = 0U;
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
        = ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_h = vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & vlSelf->top__DOT__exu_res) 
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
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__mem_rdata;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [6U]));
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
