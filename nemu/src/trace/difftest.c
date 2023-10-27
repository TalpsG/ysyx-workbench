#include "isa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern  CPU_state cpu;
extern  char *img_file ;
static char difftest_file[100] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/trace/";
static FILE *f;
void init_difftest_for_npc() {
	char *filename = strrchr(img_file, '/')+1;
	strcat(difftest_file, filename);
	strcat(difftest_file, ".txt");
	printf("\n%s\n",difftest_file);
  f = fopen(difftest_file, "w+");
}
void add_record() {
  char buf[400] = "";
  char temp[20];
  sprintf(temp, "%x ",cpu.pc);
  strcat(buf, temp);
  for (int i = 0; i < 32; i++) {
    sprintf(temp, "%x ",cpu.gpr[i]);
	strcat(buf, temp);
  }
  for (int i = 0; i < 6; i++) {
    unsigned int csr_reg = csr_read(i);
	sprintf(temp, "%x ",csr_reg);
	strcat(buf, temp);
  }
  fprintf(f, "%s\n",buf);
  fflush(f);
  //printf("%s\n",buf);
}