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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*3:0*/ top__DOT__extop;
        CData/*0:0*/ top__DOT__pc_write;
        CData/*0:0*/ top__DOT__select_num2;
        CData/*0:0*/ top__DOT__sub;
        CData/*1:0*/ top__DOT__select_num1;
        CData/*2:0*/ top__DOT__aluop;
        CData/*7:0*/ top__DOT__mem_mask;
        CData/*4:0*/ top__DOT__reg_waddr;
        CData/*0:0*/ top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__cu__DOT__aluop_I;
        CData/*2:0*/ top__DOT__cu__DOT__aluop_B;
        CData/*6:0*/ top__DOT__cu__DOT____Vcellinp__get_mem_mask__key;
        CData/*7:0*/ top__DOT__cu__DOT__get_mask__DOT__i0__DOT__lut_out;
        CData/*1:0*/ top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__lut_out;
        CData/*2:0*/ top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__lut_out;
        CData/*2:0*/ top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_OUT(outpc,31,0);
        VL_OUT(out_dnpc,31,0);
        VL_OUT(out_snpc,31,0);
        VL_OUT(ins,31,0);
        IData/*31:0*/ top__DOT__imm;
        IData/*31:0*/ top__DOT__res;
        IData/*31:0*/ top__DOT__mem_rdata;
        IData/*31:0*/ top__DOT__mem_wdata;
        IData/*31:0*/ top__DOT__reg_wdata;
        IData/*31:0*/ top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__exu__DOT__num1;
        IData/*31:0*/ top__DOT__exu__DOT__num2;
        IData/*31:0*/ top__DOT__exu__DOT__alu_res;
        IData/*31:0*/ top__DOT__exu__DOT__branch_res;
        IData/*31:0*/ top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0;
        IData/*31:0*/ top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __Vtask_top__DOT__u_mem__DOT__npc_mem_read__2__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(gpr[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__regfile__data;
        VlUnpacked<CData/*3:0*/, 10> top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 9> top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 9> top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__rf;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__cu__DOT__get_mask__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cu__DOT__get_mask__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 8> top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 8> top__DOT__cu__DOT__get_aluop_I__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 4> top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 4> top__DOT__cu__DOT__get_aluop_B__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 3> top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__exu__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 8> top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list;
    };
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
