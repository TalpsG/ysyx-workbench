#include <cstdint>
#include <cstdio>
#include <cstring>
#include <sys/mman.h>
#include "utils.h"
#include "macro.h"
uint8_t mem[0x8000000];
extern const char * elf;
uint32_t instructions[] = {
    0x00000297,  // auipc t0,0                                              
	0x00028823,  // sb  zero,16(t0)
	0x0102c503,  // lbu a0,16(t0)
	0x00100073,  // ebreak (used as nemu_trap)
	0xdeadbeef,  // some data
};
uint32_t *bin = NULL; 
extern "C" void npc_mem_read(uint32_t raddr, uint32_t*rdata) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回给`rdata`
  *rdata = *(uint32_t*)&mem[(raddr&(~0x3u))-MBASE];
  read_mtrace(raddr, *rdata);
}
extern "C" void npc_mem_write(uint32_t waddr, uint32_t wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  uint32_t *p = (uint32_t *)&mem[waddr-MBASE];
  uint32_t mask = 0;
  for (int i = 0; i < 4; i++) {
			if (wmask % 2 == 1) {
			for (int j = 0; j < 8; j++) {
				mask+=(1<<(i*8+j));
			}
			wmask >>=1;
		}
  }
  printf("%8x",mask);
  *p = (wdata & mask);
  write_mtrace(waddr, wdata);
}
extern "C" void fetch(uint32_t in, uint32_t *ins) {
	npc_mem_read(in, ins);
}
int init_mem(int argc,const char **argv) {
	int image_size = 0;
  if(argc==3){
		elf = argv[2];
		printf("loading bin: %s\n",argv[1]);
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