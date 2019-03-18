/*
** EPITECH PROJECT, 2018
** my_push_swap
** File description:
** fill array list_a
*/
#include "my.h"
#include "pushswap.h"

int *fill_list_a(int *list_a, char **av, int ac)
{
    int i = 1;
    int cmp_tab = 0;

    while (i != ac) {
        list_a[cmp_tab] = my_getnbr(av[i]);
        cmp_tab++;
        i++;
    }
    return (list_a);
}
