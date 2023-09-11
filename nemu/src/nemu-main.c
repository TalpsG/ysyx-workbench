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

#include <common.h>
#include "monitor/sdb/sdb.h"

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[])
{
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  char buf[65536 + 128];
  uint32_t ans = 0, eval = 0;
  char expression[65536] = "";
  bool success = false;
  FILE *fp = fopen("/home/talps/gitrepo/ysyx-workbench/nemu/tools/gen-expr/test.txt", "r");
  if (fp == NULL)
  {
    printf("open test file failed\n");
    return 0;
  }
  FILE *fault = fopen("/home/talps/gitrepo/ysyx-workbench/nemu/tools/gen-expr/fault.txt", "w");
  while (fgets(buf, 65536 + 128, fp) != NULL)
  {
    sscanf(buf, "%u %s", &ans, expression);
    printf("expression:\n");
    printf("%s\n", expression);
    eval = expr(expression, &success);
    if (success)
    {
      if (eval == ans)
      {
        printf("correct \n");
      }
      else
      {
        fprintf(fault, "%s", buf);
        printf("incorrect \n");
      }
    }
  }

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
