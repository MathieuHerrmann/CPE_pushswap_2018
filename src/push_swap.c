/*
** EPITECH PROJECT, 2018
** my_push_swap
** File description:
** main function of sorting number
*/
#include "my.h"
#include "pushswap.h"

int push_swap(int ac, char **av)
{
    int *list_a = malloc(sizeof(int) * (ac - 1));
    int *list_b = malloc(sizeof(int) * (ac - 1));
    t_sizelist size = {ac - 1, 0};

    list_a = fill_list_a(list_a, av, ac);
    if (is_sort(list_a, ac - 1, size.s_la) == TRUE || ac == 2) {
        my_putchar('\n');
        free(list_b);
        free(list_a);
        return (SUCCESS);
    }
    algo(list_a, list_b, &size);
    my_putchar('\n');
    free(list_a);
    return (SUCCESS);
}
