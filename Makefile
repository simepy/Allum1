##
## Makefile for Makefile in /home/pera_s/Piscine_C_J10/lib/my
##
## Made by simon pera
## Login   <pera_s@epitech.net>
##
## Started on  Mon Oct 12 15:00:05 2015 simon pera
## Last update Wed Feb 17 16:47:48 2016 simon pera
##

SRC	= allum1.c \
	  extend.c

OBJ	= $(SRC:.c=.o)

NAME	= allum1

CFLAGS	= -W -Wextra -Wall -Werror -I./include/ -g

all:	$(NAME)

$(NAME):$(OBJ)
	cc  $(OBJ) -o $(NAME) -lmy -Llib/my $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	rm -f $(OBJ)
	rm -f *~
