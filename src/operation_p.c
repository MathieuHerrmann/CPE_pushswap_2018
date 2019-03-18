/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** do pa and pb operation
*/

#include "my.h"
#include "pushswap.h"

void op_pa(int *list_a, int *list_b, t_sizelist *size)
{
    int stock_1stlb;
    int i = 0;

    if (size->s_lb < 1)
        return;
    stock_1stlb = list_b[0];
    while (i != size->s_lb - 1) {
        list_b[i] = list_b[i + 1];
        i++;
    }
    i = size->s_la - 1;
    while (i != -1) {
        list_a[i + 1] = list_a[i];
        i--;
    }
    list_a[0] = stock_1stlb;
    size->s_la++;
    size->s_lb--;
    my_putstr("pa");
}

void op_pb(int *list_a, int *list_b, t_sizelist *size)
{
    int stock_1stla;
    int i = 0;

    if (size->s_la < 1)
        return;
    stock_1stla = list_a[0];
    while (i != size->s_la - 1) {
        list_a[i] = list_a[i + 1];
        i++;
    }
    i = size->s_lb;
    while (i + 1 != 0) {
        list_b[i + 1] = list_b[i];
        i--;
    }
    list_b[0] = stock_1stla;
    size->s_la--;
    size->s_lb++;
    my_putstr("pb");
}
