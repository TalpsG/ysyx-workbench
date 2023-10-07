#include "utils.h"
#include "macro.h"
#include <cstdio>
#include <cstring>

char mem_trace[200000] = {""};
extern Vtop top;

void write_mtrace(uint32_t addr,uint32_t data) {
  char buf[100];
  sprintf(buf, "write -> pc : %8x ,addr: %8x, data:%8x\n",top.outpc,addr,data);
  strcat(mem_trace, buf);
}

void read_mtrace(uint32_t addr,uint32_t data) {
  char buf[100];
  sprintf(buf, "read  <- pc : %8x ,addr: %8x, data:%8x\n",top.outpc,addr,data);
  strcat(mem_trace, buf);
}
void print_mtrace() {
  printf("%s\n",mem_trace);
}
