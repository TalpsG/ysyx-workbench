#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <readline/readline.h>
#include <readline/history.h>
#include "verilated.h"
#include <Vtop.h>
extern void single_cycle();
extern void display_regs();

static int is_batch_mode = false;
static int cmd_c (char *args){
  while (1) {
	single_cycle();
  }
  return 0;
}
static int cmd_q (char *args){
	exit(0);
	return 0;
}
static int cmd_si (char *args){
	if (args == NULL) {
		single_cycle();
		return 0;
	}
	int steps = atoi(args);
	for (int i = 0; i < steps; i++) {
		single_cycle();
	}
	return 0;
}
static int cmd_i (char *args){
	if (args == NULL) {
		printf("default display regs\n");
		display_regs();
		return 0;
	}
	if (strcmp(args, "r")) {
		display_regs();
	} else {
		printf("not support watchpoints\n");
	}
	return 0;
}
static int cmd_x (char *args){
	printf("not support cmd x\n");
	return 0;
}
static struct {
	const char *name;
	const char *description;
	int (*handler)(char *);
} cmd_table[] = {
    {"c","Continue",cmd_c},
    {"q","quit npc",cmd_q},
	{"si","step forward n inst",cmd_si},
    {"i","display regs",cmd_i},
    {"x","display mems",cmd_x}
};
#define NR_CMD (sizeof(cmd_table)/sizeof(cmd_table[0]))
static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
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