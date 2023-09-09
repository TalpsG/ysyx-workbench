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
uint32_t gen_num()
{
  if ((65535 - buf_p) < 11)
  {
    is_too_long = 1;
    return 1;
  }
  uint32_t temp = rand() & 0xffffffff;
  char num[65536];
  sprintf(num, "%uu", temp);
  memcpy(buf + buf_p, num, strlen(num));
  buf_p += strlen(num);
  buf[buf_p] = '\0';
  return temp;
}

int gen_rand_op()
{
  if ((65535 - buf_p) < 11)
  {
    is_too_long = 1;
    return 1;
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
  return t;
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
    int op = gen_rand_op();
    if (op == 3)
    {
      int now = buf_p;
      uint32_t div = gen_rand_expr_with_ret();
      while (div == 0)
      {
        buf_p = now;
        div = gen_rand_expr_with_ret();
      }
    }
    else
    {
      gen_rand_expr();
    }
  }
}

uint32_t gen_rand_expr_with_ret()
{
  if ((65535 - buf_p) < 11)
  {
    is_too_long = 1;
    return 1;
  }
  uint32_t res = 0;
  switch (choose(3))
  {
  case 0:
    res = gen_num();
    return res;
  case 1:
    gen('(');
    res = gen_rand_expr_with_ret();
    gen(')');
    return res;
    break;
  default:
    uint32_t first = gen_rand_expr_with_ret(), second = 0;
    int op = gen_rand_op();
    if (op == 3)
    {
      int now = buf_p;
      while (second == 0)
      {
        buf_p = now;
        second = gen_rand_expr_with_ret();
      }
    }
    else
    {
      second = gen_rand_expr_with_ret();
    }
    switch (op)
    {
    case 0:
      res = first + second;
      break;
    case 1:
      res = first - second;
      break;
    case 2:
      res = first * second;
      break;
    case 3:
      res = first / second;
      break;
    }
  }
  return res;
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
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
