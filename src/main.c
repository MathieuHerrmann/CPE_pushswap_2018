/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** main of pushswap project
*/

#include "my.h"
#include "pushswap.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return (ERROR);
    push_swap(ac, av);
    return (SUCCESS);
}
