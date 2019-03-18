/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** header of pushswap project
*/

#ifndef SECU_PUSHSWAP_H
#define SECU_PUSHSWAP_H

#include <stdlib.h>

typedef struct size_list {
    int s_la;
    int s_lb;
} t_sizelist;

#define SUCCESS 0
#define ERROR 84
#define TRUE 1
#define FALSE 0

int push_swap(int ac, char **av);
int *fill_list_a(int *list_a, char **av, int ac);
int is_sort(int *list_a, int size, int o_s_la);
void op_sa(int *l_a, int *s_la);
void op_sb(int *l_b, int *s_lb);
void op_sc(int *l_a, int *l_b, t_sizelist *size);
void op_pa(int *l_a, int *l_b, t_sizelist *size);
void op_pb(int *l_a, int *l_b, t_sizelist *size);
void op_ra(int *list_a, t_sizelist *size);
void op_rb(int *list_b, t_sizelist *size);
void op_rr(int *list_a, int *list_b, t_sizelist *size);
void op_rra(int *list_a, t_sizelist *size);
void op_rrb(int *list_b, t_sizelist *size);
void op_rrr(int *list_a, int *list_b, t_sizelist *size);
void algo(int *list_a, int *list_b, t_sizelist *size);
int is_reverse_sort(int *list_a, int size);
int first_is_smaller(int *list, int size);
int last_is_smaller(int *list, int size);
void fill_la(int *list_a, int * list_b, t_sizelist *size);

#endif
