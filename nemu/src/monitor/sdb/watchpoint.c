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

void init_wp_pool()
{
  int i;
  for (i = 0; i < NR_WP; i++)
  {
    wp_pool[i].NO = i;
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
    return temp;
  }
  else
  {
    printf("there is no free watchpoint to set\n");
    assert(0);
  }
}
void add_wp(char *name, WP *wp)
{
  strcpy(wp->str, name);
  wp->NO = id++;
  wp->next = head;
  head = wp;
}
void free_wp(WP *wp)
{
  WP *now = head;
  WP *prev = NULL;
  while (now != NULL)
  {
    if (now == wp)
    {
      if (prev == NULL)
      {
        head = now->next;
        now->next = free_;
        now->NO = 0;
        strcpy(now->str, "");
      }
      else
      {
        prev->next = wp->next;
        now->next = free_;
        now->NO = 0;
        strcpy(now->str, "");
      }
    }
  }
  free_ = wp;
}
