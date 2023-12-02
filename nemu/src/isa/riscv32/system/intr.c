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
#include <stdio.h>
#include "trace/etrace.h"
extern CPU_state cpu;
word_t csr_read(word_t index) {
	switch (index)
	{
        case 0x300:
			//printf("read mstatus:%8x pc:%8x\n",mstatus,cpu.pc);
			return cpu.csr.mstatus;
        case 0x341:
			return cpu.csr.mepc;
        case 0x342:
			return cpu.csr.mcause;
        case 0x305:
			return cpu.csr.mtvec;
        default:
          return 0;
	}
	return 0;
}
word_t csr_write(word_t index,word_t data) {
	switch (index)
	{
        case 0x300:
			//printf("read mstatus:%8x data:%8x\n",mstatus,data);
          cpu.csr.mstatus = data;break;
        case 0x341:
          cpu.csr.mepc= data;break;
        case 0x342:
          cpu.csr.mcause = data;break;
        case 0x305:
          cpu.csr.mtvec = data;break;
	}
	return 0;
}
void MRET() {
  cpu.csr.mstatus &= ~(1<<3); \
  cpu.csr.mstatus |= ((cpu.csr.mstatus&(1<<7))>>4); \
  cpu.csr.mstatus |= (1<<7); \
  cpu.csr.mstatus &= ~((1<<11)+(1<<12)); \
}
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr.mcause = NO;
  cpu.csr.mepc = epc;
  cpu.csr.mstatus &= ~(1<<7);
  cpu.csr.mstatus |= ((cpu.csr.mstatus&(1<<3))<<4);
  cpu.csr.mstatus &= ~(1<<3);
  cpu.csr.mstatus |= ((1<<11)+(1<<12));
  
#ifdef CONFIG_ETRACE
  char buf[100];
  sprintf(buf, "pc:%8x,mcause:%d,handler_addr:%8x\n",epc,mcause,mtvec);
  add_etrace(buf);
#endif
  return cpu.csr.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

