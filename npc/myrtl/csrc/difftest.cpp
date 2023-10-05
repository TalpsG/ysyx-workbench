#include "stdlib.h"
#include <cstdint>
extern "C" {
	void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction);
	void difftest_regcpy(void *dut, bool direction) ;
	void difftest_exec(uint64_t n);
	void difftest_init(int port);
}