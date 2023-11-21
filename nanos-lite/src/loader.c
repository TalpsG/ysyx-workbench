#include <proc.h>
#include <elf.h>
#include <ramdisk.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fs.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
static uintptr_t loader(PCB *pcb, const char *filename) {
	int fd = fs_open(filename, 0, 0);
  Elf_Ehdr header_table ;
  fs_read(fd, &header_table, sizeof(header_table));
  size_t file_offset = fs_fileoffset(fd);
  int phnum = header_table.e_phnum;
  assert(*(uint32_t *)&header_table.e_ident == 0x464c457f);
  //测试loader
  for (int i = 0; i < phnum; i++) {
    Elf_Phdr program_table;
    ramdisk_read(&program_table,file_offset+header_table.e_phoff+i*sizeof(Elf_Phdr),sizeof(Elf_Phdr));
	if(program_table.p_type != PT_LOAD) continue;
    size_t addr =  program_table.p_vaddr ;
	size_t p_offset = program_table.p_offset ;
	size_t p_filesz = program_table.p_filesz;
	size_t p_memsz= program_table.p_memsz;

	ramdisk_read((void*)addr,file_offset+ p_offset,p_filesz);
	printf("%d %d\n",p_memsz,p_filesz);
	memset((void*)(addr+file_offset+ p_filesz),0,p_memsz - p_filesz);
  }
  fs_close(fd);
  return (uintptr_t)header_table.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

