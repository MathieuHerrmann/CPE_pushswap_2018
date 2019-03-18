/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** test op_p
*/

#include "my.h"
#include "pushswap.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(pa, basic_test3)
{
    t_sizelist size = {4, 4};
    int list[4] = {4, 3, 2, 6};
    int list2[4] = {2, 6, 4, 3};
    int res[5] = {2, 4, 3, 2, 6};
    int res2[3] = {6, 4, 3};

    op_pa(list, list2, &size);
    cr_assert_arr_eq(list, res, size.s_la);
    cr_assert_arr_eq(list2, res2, size.s_lb);
}

Test(pb, basic_test3)
{
    t_sizelist size = {4, 4};
    int list[4] = {4, 3, 2, 6};
    int list2[4] = {2, 6, 4, 3};
    int res[3] = {3, 2, 6};
    int res2[5] = {4, 2, 6, 4, 3};

    op_pb(list, list2, &size);
    cr_assert_arr_eq(list, res, size.s_la);
    cr_assert_arr_eq(list2, res2, size.s_lb);
}
