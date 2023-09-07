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
#include "sdb.h"
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
  char *n = strtok(args, " ");
  char *addp = strtok(NULL, " ");
  if (addp == NULL)
  {
    printf("u need to give a memory address\n");
    return 0;
  }

  // 取出要查看的内存长度
  int size = atoi(n);

  // 内存地址起始位置
  paddr_t add = 0;
  int len = strlen(addp);
  for (int i = 2; i < len; i++)
  {
    add = add << 4;
    if (isdigit(addp[i]))
    {
      add += addp[i] - 0x30;
    }
    else if (addp[i] > 0x60 && n[i] < 0x67)
    {
      add += addp[i] - 0x51;
    }
    else
    {
      printf("order:%d , %x is not legal in hex\n", i, n[i]);
      return 0;
    }
  }
  printf("size:%d , add : %x\n", size, add);
  char mem[1024] = "";
  char temp[1024];
  uint32_t t = 0;
  while (size != 0)
  {
    if (size > 1024)
    {
      printf("len is too big!\n");
      return 0;
    }
    if (size >= 4)
    {
      t = paddr_read(add, 4);
      size -= 4;
      add += 4;
      sprintf(temp, "%08x", t);
      strcat(mem, temp);
    }
    else if (size >= 2)
    {
      t = paddr_read(add, 2);
      size -= 2;
      add += 2;
      sprintf(temp, "%04x", t);
      strcat(mem, temp);
    }
    else if (size >= 1)
    {
      t = paddr_read(add, 1);
      size -= 1;
      add += 1;
      sprintf(temp, "%02x", t);
      strcat(mem, temp);
    }
    strcat(mem, " ");
  }
  printf("mem : %s\n", mem);
  printf("little endian\n");

  return 0;
}

static int cmd_p(char *args)
{
  return -1;
}

static int cmd_w(char *args)
{
  return -1;
}

static int cmd_d(char *args)
{
  return -1;
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
  init_wp_pool();
}
