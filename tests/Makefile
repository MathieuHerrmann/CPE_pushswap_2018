##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile of my sources
##


NAME = push_swap_test

SRC = 	../src/operation_p.c	\
	../src/operation_r.c	\
	../src/operation_rr.c	\
	../src/operation_s.c	\
	test_op_s.c	\
	test_op_p.c	\
	test_op_r.c	\
	test_op_rr.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I ../include/ -I./../lib/my/ -g

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../lib/my
	gcc -o $(NAME) $(OBJ) -L ../lib/ -lmy --coverage -lcriterion

clean:
	rm -f $(OBJ)
	make clean -C ../lib/my

fclean: clean
	make fclean -C ../lib/my
	rm -f $(NAME)

re: fclean all
