#include "utils.h"
#include "macro.h"
#include <cstdio>
#include <cstring>
#include "macro.h"
char mem_trace[] = "/home/talps/gitrepo/ysyx-workbench/npc/trace/mtrace.txt";
FILE *f;
extern Vtop top;

void init_mtrace() {
	f = fopen(mem_trace,"w+");
	if(f == NULL) printf("mtrace init fail\n");
}

void write_mtrace(uint32_t addr,uint32_t data ,int len) {
  fprintf(f, "write -> pc : %8x ,addr: %8x, data:%8x  ,len:%d\n",top.outpc,addr,data,len);
  fflush(f);
  //printf( "write -> pc : %8x ,addr: %8x, data:%8x  ,len:%d\n",top.outpc,addr,data,len);
}

void read_mtrace(uint32_t addr,uint32_t data ) {
  fprintf(f, "read  <- pc : %8x ,addr: %8x, data:%8x\n",top.outpc,addr,data);
  //printf( "read  <- pc : %8x ,addr: %8x, data:%8x\n",top.outpc,addr,data);
  fflush(f);
}
void print_mtrace() {
	//char cmd[50] ;
	//sprintf(cmd, "cat %s",mem_trace);
	//system(cmd);
}
