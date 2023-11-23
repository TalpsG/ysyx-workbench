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
  fs_lseek(fd, ehdr.e_phoff, SEEK_SET);
  assert((*(uint32_t *)ehdr.e_ident == 0x464c457f));
  Elf_Phdr phdr[ehdr.e_phnum];
  fs_read(fd,phdr,sizeof(Elf_Phdr)*ehdr.e_phnum);
  for (int i = 0; i < ehdr.e_phnum; i++) {
    if (phdr[i].p_type == PT_LOAD) {
		fs_lseek(fd, phdr[i].p_offset,SEEK_SET);
		fs_read(fd,(void *)phdr[i].p_vaddr,phdr[i].p_filesz);
		// set .bss with zeros
		memset((void*)(phdr[i].p_vaddr+phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz);
    }
  }
  return ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

