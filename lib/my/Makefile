##
## Makefile for Makefile in /home/pera_s/Piscine_C_J10/lib/my
##
## Made by simon pera
## Login   <pera_s@epitech.net>
##
## Started on  Mon Oct 12 15:00:05 2015 simon pera
## Last update Mon Feb 15 15:01:16 2016 simon pera
##

SRC=	my_putchar.c \
	my_put_nbr.c \
	my_swap.c \
	my_putstr.c \
	my_strlen.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strncpy.c \
	my_revstr.c \
	my_strcmp.c \
	my_strncmp.c \
	my_str_to_wordtab.c \

NAME=	libmy.a

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	rm -f $(OBJ)
	rm -f *~
