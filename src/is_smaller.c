/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** check if the 1st or last is the smaller of the list
*/
#include "my.h"
#include "pushswap.h"

int first_is_smaller(int *list, int size)
{
    int i = 0;

    while (i != size) {
        if (list[0] > list[i])
            return (FALSE);
        i++;
    }
    return (TRUE);
}

int last_is_smaller(int *list, int size)
{
    int i = 0;

    while (i != size) {
        if (list[size - 1] > list[i])
            return (FALSE);
        i++;
    }
    return (TRUE);
}
