#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "verilated.h"
#include <Vtop.h>
#include "utils.h"
#include "macro.h"

state npc_state = RUNNING;
extern Vtop top;
unsigned int watchpoint = 0;
void single_cycle();
void display_regs();
void print_ringbuf();
void print_callbuf();
extern char ringbuffer[200][100];
extern long long cycles;
static int is_batch_mode = false;
static int cmd_c (char *args){
	while (1) {
		if (watchpoint == top.outpc) {
			printf("catch watchpoint\n");
            break;
		}
		if (npc_state == ENDING || npc_state == ABORT) {
			printf(npc_state == ABORT?"npc is abort \n":"Program is executed successfully\n");
			return 0;
		}
		single_cycle();
	}
	return 0;
}
static int cmd_q (char *args){
	printf("cycles:%lld\n",cycles);
	if(npc_state == ABORT) std::exit(1);
	std::exit(0);
}
static int cmd_si (char *args){
	if (npc_state == ENDING || npc_state == ABORT) {
		printf(npc_state == ABORT?"npc is abort \n":"npc is ending\n");
		return 0;
	}
	if (args == NULL) {
		single_cycle();
		print_ins();
		return 0;
	}
	int steps = atoi(args);
	for (int i = 0; i < steps; i++) {
		if (watchpoint == top.outpc) {
			printf("catch watchpoint\n");
            break;
		}
		single_cycle();
	}
	return 0;
}
static int cmd_i (char *args){
	if (args == NULL) {
		printf("default display regs\n");
		display_regs();
		printf("pc: %8x\n",top.outpc);
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
static int cmd_itrace (char *args){
#ifdef CONFIG_FTRACE
	print_ringbuf();
#else
	printf("undefined ITRACE\n");
#endif
	return 0;
}
static int cmd_ftrace(char *args){
#ifdef CONFIG_FTRACE
	print_callbuf();
#else
	printf("undefined FTRACE\n");
#endif
	return 0;
}
static int cmd_mtrace(char *args){
#ifdef CONFIG_MTRACE
	print_mtrace();
#else
	printf("undefined MTRACE\n");
#endif
	return 0;
}
static int cmd_w(char *args){
	printf("%s\n",args);
	sscanf(args, "%x",&watchpoint);
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
    {"x","display mems",cmd_x},
    {"itrace","display ins",cmd_itrace},
    {"ftrace","display call",cmd_ftrace},
    {"mtrace","display memtrace",cmd_mtrace},
    {"w","watchpoint",cmd_w},
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