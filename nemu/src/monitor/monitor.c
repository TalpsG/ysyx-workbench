/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <cpu/cpu.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <debug.h>
#include <trace/itrace.h>
#include <trace/mtrace.h>
#include <trace/dtrace.h>
#include <trace/etrace.h>

//for elf
static char *elf = NULL;
struct func_info *func_head = NULL;
int func_trace = 0;
#include <stdio.h>  
#ifdef CONFIG_FTRACE
#include <unistd.h>  
#include <fcntl.h>  
#include <sys/types.h>  
#include <sys/stat.h> 
#include <sys/mman.h> //mmap函数的必要头文件
#include "elf.h"
#include <trace/difftest.h>
static char *call_buff = "/home/talps/gitrepo/ysyx-workbench/nemu/build/ftrace.txt";
static FILE *f;
void init_callbuff() {
	f = fopen(call_buff,"w");
	if(f == NULL) printf("callbuf init fail\n");
}
void add_callbuf(char *str) {
	fprintf(f,"%s",str);
}
void new_func_info(char *name,Elf32_Addr add,uint32_t size){
  struct func_info *temp = malloc(sizeof(struct func_info));
  strcpy(temp->name, name);
  temp->value = add;
  temp->size = size;
  temp->next = func_head;
  func_head = temp;
}
Elf32_Shdr sp;
static void load_elf(){
  if(elf==NULL){
    printf("no elf file\n");
    return ;
  }
  printf("elf is %s\n",elf);
  Elf32_Ehdr *p = (Elf32_Ehdr *)malloc(sizeof(Elf32_Ehdr));
    int fd = open(elf,O_RDONLY);
    struct stat fs;
    fstat(fd, &fs);
    char *elf = mmap(NULL, fs.st_size, PROT_READ  , MAP_PRIVATE, fd,0);
    close(fd);
    memcpy(p, elf, sizeof(Elf32_Ehdr));

    for(int i=0;i<p->e_shnum;i++){
        memcpy(&sp,elf+p->e_shoff+i*sizeof(Elf32_Shdr),sizeof(Elf32_Shdr));
        if(sp.sh_type == SHT_STRTAB){
            break;
        }
    }
    char *strtab = (char *)(sp.sh_offset+elf);
    for(int i=0;i<p->e_shnum;i++){
        memcpy(&sp,elf+p->e_shoff+i*sizeof(Elf32_Shdr),sizeof(Elf32_Shdr));
        if(sp.sh_type == SHT_SYMTAB){
            int size = sp.sh_size/sp.sh_entsize;
            char *table = elf+sp.sh_offset;
            Elf32_Sym *sym = (Elf32_Sym*)malloc(sizeof(Elf32_Sym));
            for(int i=0;i<size;i++){
                memcpy(sym, table+i*sp.sh_entsize,sp.sh_entsize);
                if(sym->st_info!=18) continue;
				new_func_info(strtab+sym->st_name, sym->st_value, sym->st_size);

            }
            break;
        }
    }
  free(p);
}
#endif
void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
 char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }
	printf("img is %s\n",img_file);
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"readbin"  , required_argument, NULL, 'r'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:r:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'r': img_file= optarg; break;
      case  1: elf = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-r,--readelf=FILE       enable func trace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Init ring buffer of instructions  */
#ifdef CONFIG_ITRACE
  init_itrace();
#endif
  /* Parse arguments. */
  parse_args(argc, argv);
#ifdef CONFIG_FTRACE
	init_callbuff() ;
  load_elf();
#endif
#ifdef CONFIG_MTRACE
  init_mtrace();
#endif
#ifdef CONFIG_DTRACE
	init_dtrace();
#endif
#ifdef CONFIG_ETRACE
	init_etrace();
#endif
  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);
#ifdef DIFFTEST_FOR_NPC
init_difftest_for_npc();
#endif
  /* Initialize the simple debugger. */
  init_sdb();

#ifndef CONFIG_ISA_loongarch32r
  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv,
      MUXDEF(CONFIG_RV64,      "riscv64",
                               "riscv32"),
                               "bad"))) "-pc-linux-gnu"
  ));
#endif

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
