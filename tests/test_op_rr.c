/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** test every r
*/

#include "my.h"
#include "pushswap.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(rra, basiic_test1)
{
    t_sizelist size = {4, 4};
    int list[5] = {4, 3, 2, 6, 1};
    int res[5] = {1, 4, 3, 2, 6};

    op_rra(list, &size);

    cr_assert_arr_eq(list, res, size.s_la);
}

Test(rrb, basiic_test1)
{
    t_sizelist size = {4, 4};
    int list[5] = {4, 3, 2, 6, 1};
    int res[5] = {1, 4, 3, 2, 6};

    op_rrb(list, &size);

    cr_assert_arr_eq(list, res, size.s_la);
}

Test(rrr, basic_test3)
{
    t_sizelist size = {4, 4};
    int list[4] = {4, 3, 2, 6};
    int list2[4] = {6, 2, 4, 3};
    int res[4] = {6, 4, 3, 2};
    int res2[4] = {3, 6, 2, 4};

    op_rrr(list, list2, &size);

    cr_assert_arr_eq(list, res, size.s_la);
    cr_assert_arr_eq(list2, res2, size.s_lb);
}
