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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/paddr.h>
#include <trace/mtrace.h>
#include <stdio.h>
#include <string.h>
#include "sdb.h"
#include <debug.h>
#include <trace/itrace.h>
#include "trace/dtrace.h"
#include "trace/etrace.h"
static int is_batch_mode = false;
void init_regex();
void init_wp_pool();
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args)
{
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args)
{
  if (nemu_state.state == NEMU_STOP)
  {
    // 如果在断点处想要推出程序，就将nemu的state改为quit,这样程序的返回值为0
    nemu_state.state = NEMU_QUIT;
  }
  return -1;
}

// talps writed the following funcs.

static int cmd_si(char *args)
{
  if (args == NULL)
  {
    cpu_exec(1);
    // debug print
    printf("step 1 instruction\n");
    return 0;
  }
  uint64_t num = atoi(args);
  cpu_exec(num);
  // debug print
  printf("step %lu instructions\n", num);
  return 0;
}

static int cmd_info(char *args)
{
  if (args == NULL)
  {
    // print for debug
    printf("u need to give a arg, r for registers or w for watchpoints\n");
    return 0;
  }

  if (strcmp(args, "r") == 0)
  {
    // print for debug
    isa_reg_display();
    return 0;
  }
  else if (strcmp(args, "w") == 0)
  {
    if (!ISDEF(CONFIG_WATCHPOINT))
    {
      printf("watchpoints not support.\nplz tick the building option in menuconfig and make again\n");
      return 0;
    }
#ifdef CONFIG_WATCHPOINT
    print_WPs();
#endif
  }
  else
  {
    printf("info args only can be \'r\' or \'w\'\n");
  }
  return 0;
}

static int cmd_x(char *args)
{
  if (args == NULL)
  {
    printf("plz give a number and a memory address (hex number with 0x beginning)\n");
    return 0;
  }
  // just for debug

  int size = strlen(args);
  int pos = -1;
  for(int i=0;i<size;i++){
    if(args[i]==' '){
      pos = i;
    }
  }

  if (pos == -1)
  {
    printf("u need to give a memory address\n");
    return 0;
  }
  args[pos]='\0';

  // 取出要查看的内存长度
  size = atoi(args+pos+1);

  // 内存地址起始位置
  bool success;
  paddr_t add = expr(args, &success);
  if (!success)
  {
    printf("bad address expression\n");
    return 0;
  }
  printf("size:%d , add : %x\n", size, add);
  uint32_t t = 0;
  while (size != 0)
  {
    if (size >= 4)
    {
      t = paddr_read(add, 4);
      size -= 4;
      printf("%x : %08x\n", add, t);
      add += 4;
    }
    else if (size >= 2)
    {
      t = paddr_read(add, 2);
      size -= 2;
      printf("%x : %04x\n", add, t);
      add += 2;
    }
    else if (size >= 1)
    {
      t = paddr_read(add, 1);
      size -= 1;
      printf("%x : %02x\n", add, t);
      add += 1;
      break;
    }
  }
  return 0;
}

static int cmd_p(char *args)
{
  if (args == NULL)
  {
    printf("need a expr\n");
    return 0;
  }
  bool success = false;
  uint32_t res = expr(args, &success);
  if (success)
    printf("%s = 0x%x\n", args, res);
  else
  {
    printf("illegal expression\n");
  }
  return 0;
}

static int cmd_w(char *args)
{
  if (!ISDEF(CONFIG_WATCHPOINT))
  {
    printf("watchpoints not support.\nplz tick the building option in menuconfig and make again\n");
    return 0;
  }
#ifdef CONFIG_WATCHPOINT
  if (args == NULL)
  {
    printf("need a expression to watch\n");
    return 0;
  }
  bool success = false;
  uint32_t ans = expr(args, &success);
  if (success == false)
  {
    printf("illegal expression\n");
    return 0;
  }
  else
  {
    WP *new = new_wp();
    add_wp(args, new, ans);
  }
#endif

  return 0;
}

static int cmd_d(char *args)
{
  if (!ISDEF(CONFIG_WATCHPOINT))
  {
    printf("watchpoints not support.\nplz tick the building option in menuconfig and make again\n");
    return 0;
  }
#ifdef CONFIG_WATCHPOINT
  if (args == NULL)
  {
    printf("need a id of watchpoint\n");
    return 0;
  }
  int id = atoi(args);
  WP *target = find_wp(id);
  if (target == NULL)
  {
    return 0;
  }
  delete_wp(target);

#endif
  return 0;
}
#ifdef CONFIG_FTRACE
void print_call_buff(){
}
#endif
static int cmd_ftrace(char *args) {
#ifdef CONFIG_FTRACE
  print_call_buff();
#endif // 
  return 0;
}

static int cmd_sym(char *args){
  struct func_info *p = func_head;
  while(p!=NULL){
    printf("name:%12s ,add:0x%08x ,size:%d\n",p->name,p->value,p->size);
    p=p->next;
  }
  return 0;
}
static int cmd_mtrace(char *args){
#ifdef CONFIG_MTRACE
	print_mtrace();
#else
	printf("menuconfig tick MTRACE\n");
#endif
  return 0;
}
static int cmd_itrace(char *args){
#ifdef CONFIG_ITRACE
	print_itrace();
#else
	printf("menuconfig tick ITRACE\n");
#endif
  return 0;
}
static int cmd_dtrace(char *args){
#ifdef CONFIG_DTRACE
	print_dtrace();
#else
	printf("menuconfig tick DTRACE\n");
#endif
  return 0;
}
static int cmd_etrace(char *args){
#ifdef CONFIG_ETRACE
	print_etrace();
#else
	printf("menuconfig tick ETRACE\n");
#endif
  return 0;
}
static int cmd_help(char *args);

static struct
{
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NEMU", cmd_q},

    /* TODO: Add more commands */
    {"si", "step forward [n] instructions of the program,default n is 1", cmd_si},
    {"info", "print the info of watchpoints or registers", cmd_info},
    {"x", "print the hex data from address to address + [n]", cmd_x},
    {"p", "print the value of a expression", cmd_p},
    {"w", "set a watchpoint to a variable or register", cmd_w},
    {"d", "delete a watchpoint", cmd_d},
    {"ftrace", "trace func stack", cmd_ftrace},
    {"sym", "print func table", cmd_sym},
    {"mtrace", "print mem trace", cmd_mtrace},
    {"itrace", "print instructs trace", cmd_itrace},
    {"dtrace", "print device trace", cmd_dtrace},
    {"etrace", "print trap trace", cmd_etrace},

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL)
  {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
    {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else
  {
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(arg, cmd_table[i].name) == 0)
      {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode()
{
  is_batch_mode = true;
}

void sdb_mainloop()
{
  if (is_batch_mode)
  {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL;)
  {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL)
    {
      continue;
    }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end)
    {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(cmd, cmd_table[i].name) == 0)
      {
        if (cmd_table[i].handler(args) < 0)
        {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD)
    {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}

void init_sdb()
{
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
#ifdef CONFIG_WATCHPOINT
  init_wp_pool();
#endif
}
