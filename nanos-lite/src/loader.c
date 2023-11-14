#include <proc.h>
#include <elf.h>
//#include <stdio.h>
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
//static char img[] = "/home/talps/gitrepo/ysyx-workbench/nanos-lite/build/ramdisk.img";
static uintptr_t loader(PCB *pcb, const char *filename) {
  // loader 把elf文件中每个seg都加载进nanos
  //int fd = open(img,O_RDONLY);
  //if (fd == -1) {
    //printf("elf file read fail\n");
	//return 0;
  //}
  //struct stat fs;
  //fstat(fd, &fs);
  //char *elf = (char*)malloc(fs.st_size);
  //read(fd, elf, fs.st_size);
  //Elf32_Ehdr *header_table= (Elf32_Ehdr*)elf;
  //Elf32_Phdr *program_table = (Elf32_Phdr *)(elf+header_table->e_phoff);
  //int phnum = header_table->e_phnum;
  //printf("sizeof(Elf32_Phdr):%d,phentsize:%d\n",sizeof(Elf32_Phdr),header_table->e_phentsize);
  //for (int i = 0; i < phnum; i++) {
	//if(program_table[i].p_type != PT_LOAD) continue;
    //size_t addr =  program_table[i].p_vaddr;
	//size_t p_offset = program_table[i].p_offset;
	//size_t p_filesz = program_table[i].p_filesz;
	//size_t p_memsz = program_table[i].p_memsz;
	//ramdisk_write(elf+p_offset, addr, p_filesz);
	//ramdisk_set(0, addr+p_filesz,0,p_memsz-p_filesz);
  //}
  //return (uintptr_t)header_table->e_entry;
  return 0;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

