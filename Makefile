##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile of my sources
##


NAME = push_swap

SRC = 	src/main.c	\
	src/push_swap.c	\
	src/fill_list_a.c	\
	src/is_sort.c	\
	src/operation_s.c	\
	src/operation_p.c	\
	src/operation_r.c	\
	src/operation_rr.c	\
	src/is_smaller.c	\
	src/algo.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -I include/ -I./lib/my/ -g

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) -L lib/ -lmy

clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	make fclean -C lib/my
	rm -f $(NAME)

re: fclean all
