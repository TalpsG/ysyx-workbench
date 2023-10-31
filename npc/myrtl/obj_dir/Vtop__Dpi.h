// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/IDU.sv:32:32
    extern void ebreak(int ins);
    // DPI import at /home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/INS_MEM.sv:115:32
    extern void npc_mem_read(int raddr, int* rdata);
    // DPI import at /home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/INS_MEM.sv:119:32
    extern void npc_mem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
