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

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>
#include <elf.h>
typedef struct watchpoint
{
    int NO;
    struct watchpoint *next;

    /* TODO: Add more members if necessary */
    char str[65536];
    uint32_t old;

} WP;
word_t expr(char *e, bool *success);
#ifdef CONFIG_WATCHPOINT
void add_wp(char *name, WP *wp, uint32_t ans);
WP *new_wp();

void print_WPs();
WP *find_wp(int id);
void delete_wp(WP *target);
void check_wp();
#endif

#endif
