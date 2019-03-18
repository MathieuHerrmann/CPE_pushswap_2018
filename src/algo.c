/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** algo for sorting number in array
*/

#include "my.h"
#include "pushswap.h"

void algo(int *list_a, int *list_b, t_sizelist *size)
{
    int o_s_la = size->s_la;

    while (is_sort(list_a, size->s_la, o_s_la) != TRUE) {
        if (is_reverse_sort(list_b, size->s_lb) && size->s_lb == o_s_la) {
            fill_la(list_a, list_b, size);
        } else if (first_is_smaller(list_a, size->s_la) == TRUE) {
            op_pb(list_a, list_b, size);
        } else if (last_is_smaller(list_a, size->s_la) == TRUE) {
            op_rra(list_a, size);
            my_putchar(' ');
            op_pb(list_a, list_b, size);
        } else {
            op_ra(list_a, size);
        }
        if (is_sort(list_a, size->s_la, o_s_la) != TRUE)
            my_putchar(' ');
    }
}

void fill_la(int *list_a, int *list_b, t_sizelist *size)
{
    while (size->s_lb != 0) {
        op_pa(list_a, list_b, size);
        if (size->s_lb > 0)
            my_putchar(' ');
    }
    return;
}
