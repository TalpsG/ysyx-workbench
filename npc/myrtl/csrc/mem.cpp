#include <bits/types/time_t.h>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <sys/mman.h>
#include "utils.h"
#include "macro.h"
#include "addmap.h"
#include <time.h>
uint8_t mem[0x8000000];
extern const char * elf;
const char *program;
uint32_t instructions[] = {
    0x00000297,  // auipc t0,0                                              
    0x00000597,  // auipc a1,0                                              
	0x00b2aa23,  // sw  a1,20(t0)
	0x0142c583,  // lbu a1,20(t0)
	0x00100073,  // ebreak (used as nemu_trap)
	0xdeadbeef,  // some data
};
uint32_t *bin = NULL; 
extern "C" void npc_mem_read(uint32_t raddr, uint32_t*rdata) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回给`rdata`
  //printf("read,addr:%8x \n",raddr);
  //printf("RTC_ADDR:%8x\n",RTC_ADDR);
  if(raddr == SERIAL_PORT) return;
  static time_t t = 0;
  if (raddr == RTC_ADDR || raddr == RTC_ADDR+4) {
	if (raddr == RTC_ADDR) {
		t = clock();
		*rdata = (uint32_t)t;
	} else {
		*rdata = t>>32;
	}
	return ;
  }
  *rdata = *(uint32_t*)&mem[(raddr&(~0x3u))-MBASE];
#ifdef CONFIG_MTRACE
  read_mtrace(raddr, *rdata);
#endif
}
extern "C" void npc_mem_write(uint32_t waddr, uint32_t wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  //printf("waddr:%8x,SERIAL_PORT:%8x,EQUAL?:%s\n",waddr,SERIAL_PORT,waddr==SERIAL_PORT?"yes":"no");
  if (waddr == SERIAL_PORT) {
	putchar(wdata);
	fflush(stdout);

    return ;
  }
  uint32_t *p = (uint32_t *)&mem[waddr-MBASE];
  uint32_t mask = 0;
  uint32_t mask_temp = wmask;
  for (int i = 0; i < 4; i++) {
		if (wmask % 2 == 1) {
			mask |= ((1<<((i+1)*8))-1);
		}
		wmask >>=1;
  }
  *p &= (~mask);
  *p |= (wdata & mask);
  //printf("wmask:%x\n",wmask);
#ifdef CONFIG_MTRACE
  write_mtrace(waddr, wdata,mask_temp);
#endif
}
extern "C" void fetch(uint32_t in, uint32_t *ins) {
	npc_mem_read(in, ins);
}
int init_mem(int argc,const char **argv) {
	int image_size = 0;
  if(argc>=3){
		elf = argv[2];
		printf("loading bin: %s\n",argv[1]);
		program = argv[1];
		int fd = open(argv[1],O_RDONLY);
		struct stat sb;
		fstat(fd,&sb);
		image_size = sb.st_size;
		bin = static_cast<uint32_t *>(mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0));
		close(fd);
		memcpy(mem, bin, sb.st_size);
		munmap(bin, image_size);
	}else{
		bin = instructions;
		memcpy(mem,bin,20);
		image_size = 20;
	}
	return image_size;
}