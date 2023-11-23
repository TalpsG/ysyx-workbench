#include <proc.h>
#include <elf.h>
#include <unistd.h>
#include <fs.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
static uintptr_t loader(PCB *pcb, const char *filename) {
	Elf_Ehdr ehdr;
	int fd = fs_open(filename,0,0);
  // check valid elf
  fs_read(fd, &ehdr, sizeof(ehdr));
  assert((*(uint32_t *)ehdr.e_ident == 0x464c457f));
	printf("phoff:%p\n",ehdr.e_phoff);
  //Elf_Phdr phdr[ehdr.e_phnum];
  //ramdisk_read(phdr, ehdr.e_phoff, sizeof(Elf_Phdr)*ehdr.e_phnum);
  //for (int i = 0; i < ehdr.e_phnum; i++) {
    //if (phdr[i].p_type == PT_LOAD) {
      //ramdisk_read((void*)phdr[i].p_vaddr, phdr[i].p_offset, phdr[i].p_memsz);
      //// set .bss with zeros
      //memset((void*)(phdr[i].p_vaddr+phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz);
	  //printf("%p %p %p\n",phdr[i].p_vaddr,phdr[i].p_filesz,phdr[i].p_memsz);
    //}
  //}
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

