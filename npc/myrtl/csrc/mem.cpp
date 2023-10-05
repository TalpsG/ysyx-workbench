#include <cstdint>
char mem[0x80000000];
extern "C" void pmem_read(int raddr, int *rdata) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回给`rdata`
  *rdata = *(uint32_t*)&mem[raddr&(~0x3u)];
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  uint32_t *p = (uint32_t *)&mem[waddr];
  *p |= (wdata & wmask);
}
extern "C" void fetch(int in, int *ins) {
	pmem_read(in, ins);
}