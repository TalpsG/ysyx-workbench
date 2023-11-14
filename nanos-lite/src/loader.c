#include <proc.h>
#include <elf.h>
#include <ramdisk.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
char mem[1000000];
static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf32_Ehdr header_table ;
  memset(mem, 0, 1000000);
  ramdisk_read(&header_table, 0, sizeof(Elf32_Ehdr));
  int phnum = header_table.e_phnum;
  //测试loader
  printf("\nready move\n");
  size_t start = (size_t)&ramdisk_start;
  printf("start %p\n",(void*)start);
  for (int i = 0; i < phnum; i++) {
    Elf32_Phdr program_table;
    ramdisk_read(&program_table,header_table.e_phoff+i*sizeof(Elf32_Phdr),sizeof(Elf32_Phdr));
	if(program_table.p_type != PT_LOAD) continue;
    size_t addr =  program_table.p_vaddr ;
	size_t p_offset = program_table.p_offset ;
	size_t p_filesz = program_table.p_filesz;
	printf("vaddr:%p offset %p\n",(void*)addr,(void*)p_offset);
	void *mem_addr = mem+addr-0x83000000;
	printf("mem_addr:%p\n",(void*)mem_addr);
	ramdisk_read(mem_addr,p_offset,p_filesz);
	printf("finish %d\n",i);
  }
  return (uintptr_t)header_table.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

