#include "utils.h"
#include "macro.h"
#include <cstdio>
#include <cstring>

char mem_trace[200][100];
int mtrace_p = -1;
extern Vtop top;

void init_mtrace() {
  for (int i = 0; i < 200; i++) {
    mem_trace[i][0]='\0';
  }
}

void write_mtrace(uint32_t addr,uint32_t data) {
  char buf[100];
  sprintf(buf, "write -> pc : %8x ,addr: %8x, data:%8x\n",top.outpc,addr,data);
  mtrace_p = (mtrace_p +1)%200;
  strcpy(mem_trace[mtrace_p], buf);
}

void read_mtrace(uint32_t addr,uint32_t data) {
  char buf[100];
  sprintf(buf, "read  <- pc : %8x ,addr: %8x, data:%8x\n",top.outpc,addr,data);
  mtrace_p = (mtrace_p +1)%200;
  strcpy(mem_trace[mtrace_p], buf);
}
void print_mtrace() {
	for (int i = 0; i < 200; i++) {
		printf("%s",mem_trace[i]);
	}
}
