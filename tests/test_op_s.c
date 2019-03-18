/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** test for sa
*/

#include "my.h"
#include "pushswap.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(sa, basic_test1)
{
    int size = 4;
    int list[4] = {4, 3, 2, 6};
    int res[4] = {3, 4, 2, 6};

    op_sa(list, &size);

    cr_assert_arr_eq(list, res, size);
}

Test(sb, basic_test2)
{
    int size = 4;
    int list[4] = {4, 3, 2, 6};
    int res[4] = {3, 4, 2, 6};

    op_sb(list, &size);

    cr_assert_arr_eq(list, res, size);
}

Test(sc, basic_test3)
{
    t_sizelist size = {4, 4};
    int list[4] = {4, 3, 2, 6};
    int list2[4] = {6, 2, 4, 3};
    int res[4] = {3, 4, 2, 6};
    int res2[4] = {2, 6, 4, 3};

    op_sc(list, list2, &size);

    cr_assert_arr_eq(list, res, size.s_la);
    cr_assert_arr_eq(list2, res2, size.s_lb);
}
