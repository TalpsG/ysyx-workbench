
#include <cstdlib>
#include <stdio.h>  
#include <unistd.h>  
#include <fcntl.h>  
#include <sys/types.h>  
#include <sys/stat.h> 
#include <sys/mman.h> //mmap函数的必要头文件
#include "elf.h"
#include "string.h"
#include "Vtop.h"
extern Vtop top;
struct func_info{
  char name[32];
  uint32_t value;
  uint32_t size;
  struct func_info * next;
};
struct func_info *func_head;
int func_trace= 0 ;
char *elf = NULL;
char call_buff[300][10000];
int call_buffp=-1;
void init_callbuff() {
  for (int i = 0; i < 200; i++) {
    call_buff[i][0]='\0';
  }
}
void new_func_info(char *name,Elf32_Addr add,uint32_t size){
  struct func_info *temp;
  temp =static_cast<struct func_info*>( malloc(sizeof(struct func_info)));
  strcpy(temp->name, name);
  temp->value = add;
  temp->size = size;
  temp->next = func_head;
  func_head = temp;
}
void check_call(){
  struct func_info *temp = func_head;
  while(temp!=NULL){
    if(top.out_dnpc ==  temp->value){
      char buf[10000]={'\0'};
      sprintf(buf,"%08x :",top.outpc);
      for(int j = 0;j<func_trace;j++){
        strcat(buf," ");
      }
      char tail[100];
      sprintf(tail,"call [%6s@0x%08x]\n",temp->name,temp->value);
      strcat(buf, tail);
	  call_buffp = (call_buffp+1)%300;
	  strcpy(call_buff[call_buffp], buf);
      func_trace++;
      break;
    }
    if((top.ins ^ 0x00008067 )== 0 && temp->value <= top.outpc && (temp->value+temp->size)>= top.outpc){
      func_trace--;
      char buf[10000]={'\0'};
      sprintf(buf,"%08x :",top.outpc);
      for(int j = 0;j<func_trace;j++){
        strcat(buf," ");
      }
      char tail[200];
      sprintf(tail,"ret  [%6s]\n",temp->name);
      strcat(buf, tail);
	  call_buffp = (call_buffp+1)%300;
	  strcpy(call_buff[call_buffp], buf);
      break;
    }
    temp = temp->next;
  }
}
void load_elf(){
  if(elf==NULL){
    printf("no elf file\n");
    return ;
  }
  printf("elf : %s \n",elf);
  Elf32_Ehdr *p = (Elf32_Ehdr *)malloc(sizeof(Elf32_Ehdr));
    int fd = open(elf,O_RDONLY);
    struct stat fs;
    fstat(fd, &fs);
    elf = (char *)mmap(NULL, fs.st_size, PROT_READ  , MAP_PRIVATE, fd,0);
    close(fd);
    memcpy(p, elf, sizeof(Elf32_Ehdr));
    Elf32_Shdr *sp = (Elf32_Shdr *)malloc(sizeof(Elf32_Shdr));
    for(int i=0;i<p->e_shnum;i++){
        memcpy(sp,elf+p->e_shoff+i*sizeof(Elf32_Shdr),sizeof(Elf32_Shdr));
        if(sp->sh_type == SHT_STRTAB){
            break;
        }
    }
    char *strtab = (char *)(sp->sh_offset+elf);
    for(int i=0;i<p->e_shnum;i++){
        memcpy(sp,elf+p->e_shoff+i*sizeof(Elf32_Shdr),sizeof(Elf32_Shdr));
        if(sp->sh_type == SHT_SYMTAB){
            int size = sp->sh_size/sp->sh_entsize;
            char *table = elf+sp->sh_offset;
            Elf32_Sym *sym = (Elf32_Sym*)malloc(sizeof(Elf32_Sym));
            for(int i=0;i<size;i++){
                memcpy(sym, table+i*sp->sh_entsize,sp->sh_entsize);
                if(sym->st_info!=18) continue;
                printf("add:%08x size:%x : %s\n",sym->st_value,sym->st_size,strtab+sym->st_name);
				new_func_info(strtab+sym->st_name, sym->st_value, sym->st_size);
            }
            break;
        }
    }
  free(sp);
  free(p);
}
void print_callbuf() {
	for (int i = 0; i < 300; i++) {
		printf("%s",call_buff[i]);
	}
}