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
#include <trace/etrace.h>
word_t csr_read(uint32_t index) {
  switch (index) {
	        case 0x300:
			return cpu.csr.mstatus.val;
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
          cpu.csr.mstatus.val = data;break;
        case 0x341:
          cpu.csr.mepc= data;break;
        case 0x342:
          cpu.csr.mcause = data;break;
        case 0x305:
          cpu.csr.mtvec = data;break;
	}
	return 0;
}
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
   cpu.csr.mepc = epc;
   cpu.csr.mcause = NO;
   cpu.csr.mstatus.bit.MPIE = cpu.csr.mstatus.bit.MIE;
   cpu.csr.mstatus.bit.MIE = 0;
#ifdef CONFIG_ETRACE
  char buf[100];
  sprintf(buf, "interrupt pc:%8x,mcause:%d,handler_addr:%8x\n",cpu.csr.mepc,cpu.csr.mcause,cpu.csr.mtvec);
  add_etrace(buf);
#endif
  return cpu.csr.mtvec;
}
void MRET() {
	cpu.csr.mstatus.bit.MIE = cpu.csr.mstatus.bit.MPIE;
	cpu.csr.mstatus.bit.MPIE = 1;
}
word_t isa_query_intr() {
  return INTR_EMPTY;
}
