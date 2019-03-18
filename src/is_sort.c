/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** check if list is sorted
*/

#include "my.h"
#include "pushswap.h"

int is_sort(int *list_a, int size, int o_s_la)
{
    int i = 0;

    if (size != o_s_la)
        return (FALSE);
    if (size == 1)
        return (TRUE);
    while (i != size - 1) {
        if (list_a[i] > list_a[i + 1])
            return (FALSE);
        i++;
    }
    return (TRUE);
}

int is_reverse_sort(int *list_a, int size)
{
    int i = 0;

    if (size == 1)
        return (TRUE);
    while (i != size - 1) {
        if (list_a[i] < list_a[i + 1])
            return (FALSE);
        i++;
    }
    return (TRUE);
}
