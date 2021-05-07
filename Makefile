##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	sources/my_print.c				\
			sources/my_functions.c			\
			sources/my_convert.c			\

NAME	=	libmy.a

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJ)
				ar rc $(NAME) $(OBJ)

clean:
				rm -f $(OBJ)
fclean:	clean
				rm -f $(NAME)
				rm -f *.gcda
				rm -f *.gcno
				rm -f unit_tests*

re:			fclean all

unit_tests:		re
				gcc -o unit_tests_my_convert sources/my_convert.c sources/my_functions.c tests/test_convert.c --coverage -lcriterion -I./includes/
				gcc -o unit_tests_my_functions sources/my_convert.c sources/my_functions.c tests/test_my_functions.c --coverage -lcriterion -I./includes/

run_tests:		unit_tests
				./unit_tests_my_convert
				./unit_tests_my_functions

.PHONY:	all	clean	fclean re unit_tests run_tests
