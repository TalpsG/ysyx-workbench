#include "isa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern  CPU_state cpu;
static char difftest_file[] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/difftest.txt";
static FILE *f;
void init_difftest_for_npc() {
  f = fopen(difftest_file, "w+");
}
void add_record() {
  char buf[200] = "";
  char temp[20];
  for (int i = 0; i < 32; i++) {
    sprintf(temp, "%x ",cpu.gpr[i]);
	strcat(buf, temp);
  }
  for (int i = 0; i < 6; i++) {
    unsigned int csr_reg = csr_read(i);
	sprintf(temp, "%x",csr_reg);
  }
  fprintf(f, "%s\n",buf);
  fflush(f);
  //printf("%s\n",buf);
}