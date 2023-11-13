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
        CData/*0:0*/ top__DOT__ifu_arvalid;
        CData/*0:0*/ top__DOT__ifu_rvalid;
        CData/*1:0*/ top__DOT__ifu_rresp;
        CData/*0:0*/ top__DOT__ifu_rready;
        CData/*2:0*/ top__DOT__select_oprand1;
        CData/*2:0*/ top__DOT__select_oprand2;
        CData/*0:0*/ top__DOT__pc_write;
        CData/*0:0*/ top__DOT__mem_write;
        CData/*0:0*/ top__DOT__mem_read;
        CData/*0:0*/ top__DOT__is_csr;
        CData/*0:0*/ top__DOT__mem_valid;
        CData/*7:0*/ top__DOT__mem_wmask;
        CData/*0:0*/ top__DOT__mem_awvalid;
        CData/*0:0*/ top__DOT__mem_awready;
        CData/*0:0*/ top__DOT__mem_wvalid;
        CData/*7:0*/ top__DOT__mem_wstrb;
        CData/*0:0*/ top__DOT__mem_wready;
        CData/*0:0*/ top__DOT__mem_bready;
        CData/*0:0*/ top__DOT__mem_bvalid;
        CData/*1:0*/ top__DOT__mem_bresp;
        CData/*0:0*/ top__DOT__mem_arvalid;
        CData/*0:0*/ top__DOT__mem_arready;
        CData/*0:0*/ top__DOT__mem_rvalid;
        CData/*0:0*/ top__DOT__mem_rready;
        CData/*1:0*/ top__DOT__mem_rresp;
        CData/*0:0*/ top__DOT__mem_finish;
        CData/*5:0*/ top__DOT__csr_write;
        CData/*1:0*/ top__DOT__mem_pos;
        CData/*1:0*/ top__DOT__u_IFU__DOT__state;
        CData/*0:0*/ top__DOT__u_IDU__DOT__fake_reg_write;
        CData/*1:0*/ top__DOT__u_IDU__DOT__state;
        CData/*0:0*/ top__DOT__u_IDU__DOT__read_flag;
        CData/*0:0*/ top__DOT__u_IDU__DOT__write_flag;
        CData/*0:0*/ top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__get_reg_wdata__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__get_oprand1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__get_oprand2__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__u_EXU__DOT__aluop;
        CData/*3:0*/ top__DOT__u_EXU__DOT__B_aluop;
        CData/*3:0*/ top__DOT__u_EXU__DOT__IR_aluop;
        CData/*0:0*/ top__DOT__u_EXU__DOT__neg;
        CData/*0:0*/ top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit;
        CData/*3:0*/ top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit;
        CData/*7:0*/ top__DOT__get_wmask__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__get_wmask__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit;
        CData/*5:0*/ top__DOT__u_WBU__DOT__fake_csr_write;
        CData/*1:0*/ top__DOT__u_WBU__DOT__read_state;
        CData/*1:0*/ top__DOT__u_WBU__DOT__write_state;
    };
    struct {
        CData/*5:0*/ top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u_DNPC__DOT__state;
        CData/*0:0*/ top__DOT__get_csr_rdata__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__ifu_arready;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__ifu_awready;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__ifu_wready;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__ifu_bvalid;
        CData/*1:0*/ top__DOT__u_ARBITER__DOT__ifu_bresp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__awvalid_temp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__wvalid_temp;
        CData/*7:0*/ top__DOT__u_ARBITER__DOT__wstrb_temp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__bready_temp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__arvalid_temp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__rready_temp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__arvalid;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__arready;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__rready;
        CData/*1:0*/ top__DOT__u_ARBITER__DOT__rresp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__rvalid;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__awvalid;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__awready;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__wvalid;
        CData/*7:0*/ top__DOT__u_ARBITER__DOT__wstrb;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__wready;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__bready;
        CData/*1:0*/ top__DOT__u_ARBITER__DOT__bresp;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__bvalid;
        CData/*2:0*/ top__DOT__u_ARBITER__DOT__state;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__mem_access;
        CData/*7:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_flag;
        CData/*0:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_flag;
        CData/*1:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state;
        CData/*1:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state;
        CData/*7:0*/ top__DOT__RDATA__DOT__rdata_b;
        CData/*7:0*/ top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__RDATA__DOT__rdata_h;
        SData/*15:0*/ top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
        VL_OUT(outpc,31,0);
        VL_OUT(out_dnpc,31,0);
        VL_OUT(out_snpc,31,0);
        VL_OUT(ins,31,0);
        IData/*31:0*/ top__DOT__dnpc;
        IData/*31:0*/ top__DOT__ifu_araddr;
        IData/*31:0*/ top__DOT__ifu_rdata;
        IData/*31:0*/ top__DOT__imm;
        IData/*31:0*/ top__DOT__reg_wdata;
        IData/*31:0*/ top__DOT__reg_rdata1;
        IData/*31:0*/ top__DOT__reg_rdata2;
        IData/*31:0*/ top__DOT__oprand1;
        IData/*31:0*/ top__DOT__oprand2;
        IData/*31:0*/ top__DOT__exu_res;
        IData/*31:0*/ top__DOT__mem_raddr;
        IData/*31:0*/ top__DOT__mem_rdata;
        IData/*31:0*/ top__DOT__mem_waddr;
        IData/*31:0*/ top__DOT__mem_awaddr;
        IData/*31:0*/ top__DOT__mem_wdata;
        IData/*31:0*/ top__DOT__mem_araddr;
    };
    struct {
        IData/*31:0*/ top__DOT__fake_csr_wdata;
        IData/*31:0*/ top__DOT__csr_rdata;
        IData/*31:0*/ top__DOT__mem_rdata_final;
        IData/*31:0*/ top__DOT__u_IFU__DOT__pc;
        IData/*31:0*/ top__DOT__u_IFU__DOT__delay;
        IData/*31:0*/ top__DOT__u_IFU__DOT__now;
        IData/*31:0*/ top__DOT__u_IDU__DOT__ins;
        IData/*31:0*/ top__DOT__u_IDU__DOT__immI;
        IData/*31:0*/ top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_oprand1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_oprand2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u_EXU__DOT__alu_res;
        IData/*31:0*/ top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u_WBU__DOT__read_delay;
        IData/*31:0*/ top__DOT__u_WBU__DOT__read_now;
        IData/*31:0*/ top__DOT__u_WBU__DOT__write_delay;
        IData/*31:0*/ top__DOT__u_WBU__DOT__write_now;
        IData/*31:0*/ top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__awaddr_temp;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__wdata_temp;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__araddr_temp;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__araddr;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__rdata;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__awaddr;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__wdata;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg;
        IData/*31:0*/ top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg;
        IData/*31:0*/ top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(gpr[32],31,0);
        VL_OUT(csr_reg[6],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT____Vcellout__u_RegisterFile__data;
        VlUnpacked<QData/*38:0*/, 8> top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 8> top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 9> top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 8> top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 8> top__DOT__get_reg_wdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__get_reg_wdata__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__u_RegisterFile__DOT__rf;
        VlUnpacked<QData/*34:0*/, 3> top__DOT__get_oprand1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__get_oprand1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__get_oprand1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 2> top__DOT__get_oprand2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__get_oprand2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__get_oprand2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 11> top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 11> top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 11> top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 6> top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<CData/*3:0*/, 6> top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 8> top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 8> top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 3> top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 3> top__DOT__get_wmask__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__get_wmask__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__get_wmask__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 2> top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 6> top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*5:0*/, 6> top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__u_CSR__DOT__rf;
        VlUnpacked<QData/*34:0*/, 6> top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__get_csr_rdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> top__DOT__get_csr_rdata__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 4> top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 4> top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*17:0*/, 3> top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*15:0*/, 3> top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 5> top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
