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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char is_too_long = 0;
static char buf[65536] = "";
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
    "#include <stdio.h>\n"
    "int main() { "
    "  unsigned result = %s; "
    "  printf(\"%%u\", result); "
    "  return 0; "
    "}";
static int buf_p = 0;
uint32_t gen_rand_expr_with_ret();
void gen(char c)
{
  buf[buf_p++] = c;
  buf[buf_p] = '\0';
}
int choose(int n)
{
  return rand() % (n);
}
void gen_num()
{
  if ((65535 - buf_p) < 11)
  {
    is_too_long = 1;
    return;
  }
  uint32_t temp = rand() & 0xffffffff;
  char num[65536];
  sprintf(num, "%uu", temp);
  memcpy(buf + buf_p, num, strlen(num));
  buf_p += strlen(num);
  buf[buf_p] = '\0';
}

void gen_rand_op()
{
  if ((65535 - buf_p) < 11)
  {
    is_too_long = 1;
    return;
  }
  int t = rand() & 3;
  char op = '\0';
  switch (t)
  {
  case 0:
    op = '+';
    break;
  case 1:
    op = '-';
    break;
  case 2:
    op = '*';
    break;
  case 3:
    op = '/';
    break;
  }
  buf[buf_p++] = op;
  buf[buf_p] = '\0';
}
static void gen_rand_expr()
{
  if ((65535 - buf_p) < 11)
  {
    is_too_long = 1;
  }
  switch (choose(3))
  {
  case 0:
    gen_num();
    break;
  case 1:
    gen('(');
    gen_rand_expr();
    gen(')');
    break;
  default:
    gen_rand_expr();
    gen_rand_op();
    gen_rand_expr();
  }
}

int main(int argc, char *argv[])
{
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1)
  {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i++)
  {
    buf_p = 0;
    gen_rand_expr();
    if (is_too_long == 1)
    {
      is_too_long = 0;
      i--;
      continue;
    }
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);
    // printf("%s\n", code_buf);

    int ret = system("gcc -Werror /tmp/.code.c -o /tmp/.expr");
    if (ret != 0)
    {
      i--;
      continue;
    }

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    // ret = fscanf只是为了接收fscanf的返回值，否则由于Werror编译选项会报错
    ret = fscanf(fp, "%d", &result);

    ret = pclose(fp);
    if (ret != 0)
    {
      i--;
      continue;
    }
    printf("%u %s\n", result, buf);
  }
  return 0;
}
