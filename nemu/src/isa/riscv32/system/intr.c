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
static uint32_t mcause=0;
static uint32_t mtvec=0;
static uint32_t mepc=0;
static uint32_t mstatus=0;
word_t csr_read(word_t index) {
	switch (index)
	{
        case 0:
			//printf("read mstatus:%8x pc:%8x\n",mstatus,cpu.pc);
			return mstatus;
        case 1:
			return mepc;
        case 2:
			return mcause;
        case 5:
			return mtvec;
        default:
          return 0;
	}
	return 0;
}
word_t csr_write(word_t index,word_t data) {
	switch (index)
	{
        case 0:
			//printf("read mstatus:%8x data:%8x\n",mstatus,data);
          mstatus = data;break;
        case 1:
          mepc= data;break;
        case 2:
          mcause = data;break;
        case 5:
          mtvec = data;break;
	}
	return 0;
}
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  mcause = NO;
  mepc =epc;
#ifdef CONFIG_ETRACE
  char buf[100];
  sprintf(buf, "pc:%8x,mcause:%d,handler_addr:%8x\n",epc,mcause,mtvec);
  add_etrace(buf);
#endif
  return mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

void print_csr() {
  printf("id:0 mstatus:%8x\n",mstatus);
  printf("id:1 mepc   :%8x\n",mepc);
  printf("id:2 mcause :%8x\n",mcause);
  printf("id:3 mtvec  :%8x\n",mtvec);
}