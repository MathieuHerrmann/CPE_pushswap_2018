/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** every op start with r
*/

#include "my.h"
#include "pushswap.h"

void op_rra(int *list_a, t_sizelist *size)
{
    int i = size->s_la;
    int stock_1stla = list_a[size->s_la - 1];

    if (size->s_la < 2)
        return;
    while (i > 0) {
        list_a[i] = list_a[i - 1];
        i--;
    }
    list_a[0] = stock_1stla;
    my_putstr("rra");
}

void op_rrb(int *list_b, t_sizelist *size)
{
    int i = size->s_lb;
    int stock_1stla = list_b[size->s_lb - 1];

    if (size->s_lb < 2)
        return;
    while (i != 0) {
        list_b[i] = list_b[i - 1];
        i--;
    }
    list_b[0] = stock_1stla;
}

void op_rrr(int *list_a, int *list_b, t_sizelist *size)
{
    if (size->s_la < 2 || size->s_la < 2)
        return;
    op_rra(list_a, size);
    op_rrb(list_b, size);
}
