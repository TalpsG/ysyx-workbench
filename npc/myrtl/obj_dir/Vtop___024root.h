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
        VL_IN8(rst,0,0);
        VL_OUT8(valid,0,0);
        VL_OUT8(ready,0,0);
        CData/*0:0*/ top__DOT__idu_ready;
        CData/*0:0*/ top__DOT__ifu_valid;
        CData/*4:0*/ top__DOT__rs1;
        CData/*4:0*/ top__DOT__rs2;
        CData/*4:0*/ top__DOT__rd;
        CData/*6:0*/ top__DOT__func7;
        CData/*6:0*/ top__DOT__opcode;
        CData/*2:0*/ top__DOT__func3;
        CData/*2:0*/ top__DOT__select_oprand1;
        CData/*2:0*/ top__DOT__select_oprand2;
        CData/*0:0*/ top__DOT__is_csr;
        CData/*2:0*/ top__DOT__csr_waddr;
        CData/*0:0*/ top__DOT__mem_access;
        CData/*7:0*/ top__DOT__mem_wmask;
        CData/*0:0*/ top__DOT__mem_awready;
        CData/*0:0*/ top__DOT__mem_wready;
        CData/*0:0*/ top__DOT__mem_bvalid;
        CData/*0:0*/ top__DOT__mem_arready;
        CData/*0:0*/ top__DOT__mem_rvalid;
        CData/*0:0*/ top__DOT__mem_finish;
        CData/*5:0*/ top__DOT__csr_write;
        CData/*0:0*/ top__DOT__u_IFU__DOT__arvalid;
        CData/*0:0*/ top__DOT__u_IFU__DOT__arready;
        CData/*0:0*/ top__DOT__u_IFU__DOT__rvalid;
        CData/*0:0*/ top__DOT__u_IFU__DOT__rready;
        CData/*0:0*/ top__DOT__u_IFU__DOT__fetch_flag;
        CData/*0:0*/ top__DOT__u_IFU__DOT__u_INS_MEM__DOT__flag;
        CData/*0:0*/ top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0;
        CData/*0:0*/ top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0;
        CData/*2:0*/ top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out;
        CData/*2:0*/ top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out;
        CData/*3:0*/ top__DOT__u_EXU__DOT__aluop;
        CData/*3:0*/ top__DOT__u_EXU__DOT__B_aluop;
        CData/*3:0*/ top__DOT__u_EXU__DOT__IR_aluop;
        CData/*0:0*/ top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0;
        CData/*3:0*/ top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out;
        CData/*3:0*/ top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out;
        CData/*3:0*/ top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__get_wmask__DOT__i0__DOT__lut_out;
        CData/*1:0*/ top__DOT__u_MEM__DOT__pos;
        CData/*7:0*/ top__DOT__u_MEM__DOT__rdata_b;
        CData/*0:0*/ top__DOT__u_MEM__DOT__write_flag;
        CData/*0:0*/ top__DOT__u_MEM__DOT__read_flag;
        CData/*7:0*/ top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__lut_out;
        CData/*5:0*/ top__DOT__u_WBU__DOT__fake_csr_write;
        CData/*5:0*/ top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out;
        CData/*7:0*/ __VdfgTmp_h77138759__0;
        CData/*0:0*/ __VdfgTmp_h789f0247__0;
        CData/*0:0*/ __VdfgTmp_h78e25041__0;
        CData/*5:0*/ __VdfgTmp_h8328af85__0;
        CData/*3:0*/ __VdfgTmp_h80810b80__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__u_MEM__DOT__rdata_h;
        SData/*15:0*/ top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
        SData/*9:0*/ __VdfgTmp_h7f70c799__0;
        VL_OUT(outpc,31,0);
        VL_OUT(out_dnpc,31,0);
        VL_OUT(out_snpc,31,0);
    };
    struct {
        VL_OUT(ins,31,0);
        IData/*31:0*/ top__DOT__dnpc;
        IData/*31:0*/ top__DOT__imm;
        IData/*31:0*/ top__DOT__reg_wdata;
        IData/*31:0*/ top__DOT__reg_rdata1;
        IData/*31:0*/ top__DOT__reg_rdata2;
        IData/*31:0*/ top__DOT__oprand1;
        IData/*31:0*/ top__DOT__oprand2;
        IData/*31:0*/ top__DOT__exu_res;
        IData/*31:0*/ top__DOT__mem_rdata;
        IData/*31:0*/ top__DOT__fake_csr_wdata;
        IData/*31:0*/ top__DOT__csr_rdata;
        IData/*31:0*/ top__DOT__u_IFU__DOT__pc;
        IData/*31:0*/ top__DOT__u_IFU__DOT__araddr;
        IData/*31:0*/ top__DOT__u_IFU__DOT__rdata;
        IData/*31:0*/ top__DOT__u_IFU__DOT__u_INS_MEM__DOT__rdata_reg;
        IData/*31:0*/ top__DOT__u_IFU__DOT__u_INS_MEM__DOT__delay;
        IData/*31:0*/ top__DOT__u_IFU__DOT__u_INS_MEM__DOT__now;
        IData/*31:0*/ top__DOT__u_IDU__DOT__ins;
        IData/*31:0*/ top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_oprand1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_oprand2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u_EXU__DOT__alu_res;
        IData/*31:0*/ top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u_MEM__DOT__rdata_w;
        IData/*31:0*/ top__DOT__u_MEM__DOT__rdata_reg;
        IData/*31:0*/ top__DOT__u_MEM__DOT__write_now;
        IData/*31:0*/ top__DOT__u_MEM__DOT__write_delay;
        IData/*31:0*/ top__DOT__u_MEM__DOT__read_now;
        IData/*31:0*/ top__DOT__u_MEM__DOT__read_delay;
        IData/*31:0*/ top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(gpr[32],31,0);
        VL_OUT(csr_reg[6],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__u_RegisterFile__data;
        VlUnpacked<CData/*6:0*/, 8> top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 8> top__DOT__get_reg_wdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__get_reg_wdata__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__get_oprand1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__get_oprand1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__get_oprand2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__get_oprand2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 11> top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 11> top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 6> top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 8> top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 8> top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 3> top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__get_wmask__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__get_wmask__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 3> top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*15:0*/, 3> top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*5:0*/, 6> top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__u_CSR__DOT__rf;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__get_csr_rdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__get_csr_rdata__DOT__i0__DOT__data_list;
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
