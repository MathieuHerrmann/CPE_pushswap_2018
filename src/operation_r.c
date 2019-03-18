/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** every op start with r
*/

#include "my.h"
#include "pushswap.h"

void op_ra(int *list_a, t_sizelist *size)
{
    int i = 0;
    int stock_1stla = list_a[0];

    if (size->s_la < 2)
        return;
    while (i != size->s_la - 1) {
        list_a[i] = list_a[i + 1];
        i++;
    }
    list_a[i] = stock_1stla;
    my_putstr("ra");
}

void op_rb(int *list_b, t_sizelist *size)
{
    int i = 0;
    int stock_1stla = list_b[0];

    if (size->s_lb < 2)
        return;
    while (i != size->s_lb - 1) {
        list_b[i] = list_b[i + 1];
        i++;
    }
    list_b[i] = stock_1stla;
}

void op_rr(int *list_a, int *list_b, t_sizelist *size)
{
    if (size->s_la < 2 || size->s_la < 2)
        return;
    op_ra(list_a, size);
    op_rb(list_b, size);
}
