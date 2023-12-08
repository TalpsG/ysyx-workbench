/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <trace/mtrace.h>
#include <trace/itrace.h>
#include <trace/dtrace.h>
#include <trace/etrace.h>
#include <trace/record.h>
// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

static void restart() {
  /* Set the initial program counter. */
  //pc启动时置为固定值
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
  cpu.csr.mstatus.val= 0x1800;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  /*
  RESET_VECTOR是PMEM_LEFT+PC复位值，PC复位值为0,所以RESET_VECTOR就是PMEM_LEFT
  PMEM_LEFT展开就是CONFIG_MBASE,而guest_to_host(addr)的返回值是 pmem + addr - CONFIG_MBASE 
  所以最终memcpy(dest,src,size)中的dest就是pmem数组的起始地址

  */ 


  /* Initialize this virtual computer system. */
  //初始化寄存器
  restart();
#ifdef CONFIG_MTRACE
	init_mtrace();
#endif
#ifdef CONFIG_ITRACE
	init_itrace();
#endif
#ifdef CONFIG_DTRACE
	init_dtrace();
#endif
#ifdef CONFIG_ETRACE
	init_etrace();
#endif
}
