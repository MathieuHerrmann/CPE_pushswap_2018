/*
** EPITECH PROJECT, 2018
** my_push_swap
** File description:
** every operation with s : sa sb sc
*/

#include "my.h"
#include "pushswap.h"

void op_sa(int *list_a, int *s_la)
{
    int save_1st = list_a[0];

    if (*s_la < 2)
        return;
    list_a[0] = list_a[1];
    list_a[1] = save_1st;
    return;
}

void op_sb(int *list_b, int *s_lb)
{
    int save_1st = list_b[0];

    if (*s_lb < 2)
        return;
    list_b[0] = list_b[1];
    list_b[1] = save_1st;
    return;
}

void op_sc(int *list_a, int *list_b, t_sizelist *size)
{
    if (size->s_la < 2 || size->s_lb < 2)
        return;
    op_sa(list_a, &size->s_la);
    op_sb(list_b, &size->s_lb);
}
