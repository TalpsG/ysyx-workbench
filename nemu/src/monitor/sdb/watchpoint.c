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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
static int id = 0;
static int num = 0;

void init_wp_pool()
{
  int i;
  for (i = 0; i < NR_WP; i++)
  {
    wp_pool[i].NO = -1;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP *new_wp()
{
  if (free_ != NULL)
  {
    WP *temp = free_;
    free_ = free_->next;
    temp->next = NULL;
    num++;
    return temp;
  }
  else
  {
    printf("there is no free watchpoint to set\n");
    assert(0);
  }
}
void add_wp(char *name, WP *wp, uint32_t ans)
{
  strcpy(wp->str, name);
  wp->NO = id++;
  wp->next = head;
  wp->old = ans;
  head = wp;
}
void free_wp(WP *wp)
{
  wp->next = free_;
  free_ = wp;
  num--;
  if (num == 0)
  {
    head = NULL;
  }
}

void print_WPs()
{
  WP *p = head;
  printf(" no. :        expr:        val\n");
  while (p != NULL)
  {
    printf("% 4d : %10s :0x%10x\n", p->NO, p->str, p->old);
    p = p->next;
  }
}
WP *find_wp(int id)
{
  // return the prev node of target node
  WP t, *p;
  t.next = head;
  p = &t;
  while (p->next != NULL)
  {
    if (p->next->NO == id)
    {
      return p;
    }
    p = p->next;
  }
  printf("id %d wp not found\n", id);
  return NULL;
}
void print_free_num()
{
  WP *p = free_;
  int i = 0;
  while (p != NULL)
  {
    i++;
    p = p->next;
  }
  printf("free list has %d elements\n", i);
}
void print_wp_num()
{
  WP *p = head;
  int i = 0;
  while (p != NULL)
  {
    i++;
    p = p->next;
  }
  printf("watchpoints list has %d elements\n", i);
}
void delete_wp(WP *target)
{
  WP *temp = target->next;
  target->next = target->next->next;
  free_wp(temp);
  print_free_num();
  print_wp_num();
}
void check_wp()
{
  WP *p = head;

  bool isdef = false;
  while (p != NULL)
  {
    bool success = false;
    uint32_t res = expr(p->str, &success);
    if (res != !p->old)
    {
      isdef = true;
      p->old = res;
    }
  }
  if (isdef == true)
  {
    printf("watchpoints triggered\n");
  }
  print_WPs();
}