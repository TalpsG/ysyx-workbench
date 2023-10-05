#ifndef DD1B04DF_7733_4BFA_946C_24C526BD872D
#define DD1B04DF_7733_4BFA_946C_24C526BD872D

#include <cstddef>
#include <cstdint>
#include<verilated.h>
#include<Vtop.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include "disasm.h"
#include <readline/history.h>
#include <readline/readline.h>
enum state {
  ABORT,
  RUNNING,
  ENDING,
};
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
void sdb_mainloop();
void print_ins();
void init_ringbuf();
void load_elf();
void print_callbuf();
void display_regs();
int init_mem(int argc,const char **argv);
extern "C" {
	void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
	void difftest_regcpy(void *dut, bool direction) ;
	void difftest_exec(uint64_t n);
	void difftest_init(int port);
}
#endif /* DD1B04DF_7733_4BFA_946C_24C526BD872D */
