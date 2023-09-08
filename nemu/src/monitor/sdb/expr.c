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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum
{
  TK_NOTYPE = 256,
  TK_EQ,

  /* TODO: Add more token types */
  TK_MUL,
  TK_DIV,
  TK_MINUS,
  TK_PLUS,
  TK_BRACKET_L,
  TK_BRACKET_R,
  TK_NUM_D, // decimal
  TK_NUM_H, // hex

};

static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE}, // spaces
    {"\\+", TK_PLUS},  // plus `\\`其实是一个`\` 因为字符串内要转译一下
    {"==", TK_EQ},     // equal

    /*
      talps
     */
    {"-", TK_MINUS}, // minus
    {"\\*", TK_MUL},
    {"/", TK_DIV},
    {"\\(", TK_BRACKET_L},
    {"\\)", TK_BRACKET_R},
    {"\\b[0-9]+\\b", TK_NUM_D},
    {"\\b0x[0-9a-f]+\\b", TK_NUM_H},
    //{"\\b\\d+(?=\\s+)|(?<=\\s+)\\d+\\b", TK_NUM_D},
    //{"\\b0x[0-9a-f]+(?=\\s+)|(?<=\\s+)0x[0-9a-f]+\\b", TK_NUM_H},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++)
  {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0)
    {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token
{
  int type;
  char str[32];
} Token;

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static bool make_token(char *e)
{
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0')
  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if (rules[i].token_type == TK_NOTYPE)
          break;
        tokens[nr_token].type = rules[i].token_type;
        switch (rules[i].token_type)
        {
        case TK_PLUS:
          strcpy(tokens[nr_token++].str, "+");
          break;
        case TK_MUL:
          strcpy(tokens[nr_token++].str, "*");
          break;
        case TK_DIV:
          strcpy(tokens[nr_token++].str, "/");
          break;
        case TK_EQ:
          strcpy(tokens[nr_token++].str, "==");
          break;
        case TK_MINUS:
          strcpy(tokens[nr_token++].str, "-");
          break;
        case TK_BRACKET_L:
          strcpy(tokens[nr_token++].str, "(");
          break;
        case TK_BRACKET_R:
          strcpy(tokens[nr_token++].str, ")");
          break;
        case TK_NUM_D:
          strncpy(tokens[nr_token++].str, substr_start, substr_len);
          tokens[nr_token].str[substr_len] = '\0';
          break;
        case TK_NUM_H:
          strncpy(tokens[nr_token++].str, substr_start, substr_len);
          tokens[nr_token].str[substr_len] = '\0';
          break;
        }
        break;
      }
    }

    if (i == NR_REGEX)
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
bool check_parentheses(int p, int q)
{
  // 处理括号匹配的问题
  if (tokens[p].type == TK_BRACKET_L && tokens[q].type == TK_BRACKET_R)
  {
    if ((q - p) < 2)
    {
      Log("q: %d , p: %d\n there must be 1 token in a bracket\n", p, q);
      assert(0);
    }
    int stack = 0;
    for (int i = p + 1; i <= q; i++)
    {
      if (i == q && tokens[i].type == TK_BRACKET_R && stack == 0)
      {
        return true;
      }
      if (i != q && tokens[i].type == TK_BRACKET_R && stack == 0)
      {
        return false;
      }
      if (tokens[i].type == TK_BRACKET_L)
      {
        stack++;
      }
      else if (tokens[i].type == TK_BRACKET_R)
      {
        stack--;
      }
      if (stack < 0)
      {
        Log("bad expression");
        assert(0);
      }
    }
    return true;
  }

  else
    return false;
}

word_t eval(int p, int q)
{
  if (p > q)
  {
    printf("illegal expression\n");
    assert(0);
  }
  word_t res = 0;
  if (p == q)
  {
    if (tokens[p].type == TK_NUM_H)
    {
      res = (word_t)(strtol(tokens[p].str, NULL, 16));
      return res;
    }
    else if (tokens[p].type == TK_NUM_D)
    {
      res = (word_t)atoi(tokens[p].str);
      return res;
    }
    else
    {
      printf("illegal expression\n");
      assert(0);
    }
  }
  if (check_parentheses(p, q) == true)
  {
    return eval(p + 1, q - 1);
  }
  else
  {
    word_t res = 0;
    int node = -1;
    bool mux = false;
    for (int i = p; i <= q; i++)
    {
      switch (tokens[i].type)
      {
      case TK_BRACKET_L:
        mux = true;
        break;
      case TK_BRACKET_R:
        mux = false;
        break;
      case TK_DIV:
      case TK_MINUS:
      case TK_PLUS:
      case TK_MUL:
        if (mux == false)
        {
          if (node == -1)
          {
            node = i;
          }
          else
          {
            if ((tokens[node].type == TK_MUL || tokens[node].type == TK_DIV) && (tokens[i].type == TK_MINUS || tokens[i].type == TK_PLUS))
            {
              node = i;
            }
          }
        }
      }
    }
    switch (tokens[node].type)
    {
    case TK_DIV:
      res = eval(p, node - 1) / eval(node + 1, q);
      break;
    case TK_MUL:
      res = eval(p, node - 1) * eval(node + 1, q);
      break;
    case TK_PLUS:
      res = eval(p, node - 1) + eval(node + 1, q);
      break;
    case TK_MINUS:
      res = eval(p, node - 1) - eval(node + 1, q);
      break;
    }
    return res;
  }
}

word_t expr(char *e, bool *success)
{
  if (!make_token(e))
  {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */

  *success = true;
  return eval(0, nr_token - 1);
}
