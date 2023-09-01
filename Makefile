##
## EPITECH PROJECT, 2022
## TEK1_22-23
## File description:
## Makefile
##

CC	=	gcc

SRC	=	main.c	\
		src/algo.c	\
		src/my_str_to_word_array.c	\
		src/errors_handling.c	\
		src/p_op.c	\
		src/r_op.c	\
		src/fill_linked_list.c	\

UT_SRC	=	src/algo.c	\
			src/my_str_to_word_array.c	\
			src/errors_handling.c	\
			src/p_op.c	\
			src/r_op.c	\
			src/fill_linked_list.c	\
			lib/my/my_putstr.c	\
			lib/my/my_putchar.c	\
			lib/my/my_strlen.c	\
			lib/my/my_strcat.c	\
			lib/my/my_put_nbr.c	\
			lib/my/my_strcmp.c	\
			lib/my/mini_printf.c	\
			lib/my/my_strcpy.c	\
			lib/my/my_atoi.c	 \
			lib/my/my_str_is_alpha.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CPPFLAGS	=	-L./lib/ -lmy

LDFLAG	=	-I./include

LIB	=	libmy.a

UT_NAME	=	unit_tests

FUT	=	--coverage -lcriterion

INCLIBUT	=	-L./lib/ -lmy -I./include

all:	$(NAME)

$(NAME):	$(OBJ) $(LIB)
	gcc -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAG) -lncurses -g3 -Wall -Wextra

$(LIB):
	make -C lib/my/

tests_run:
	gcc -o $(UT_NAME) $(UT_SRC) tests/tests_my_pushswap.c $(INCLIBUT) $(FUT)
	./$(UT_NAME)

clean:
	rm -f $(NAME)
	rm -f *.o
	rm -f lib/my/*.o
	rm -f lib/my/libmy.a

fclean: clean
	rm -f $(NAME)
	rm -f $(UT_NAME)
	rm -f *.gcno
	rm -f *.gcda
	rm -f lib/libmy.a
	rm -f src/*.o
	rm -f lib/my/*.o
	rm -f *.gcno
	rm -f *.gcda

re: fclean all

auteur:
	echo $(USER) > auteur

.PHONY: all tests_run clean fclean re auteur
