##
## Makefile for  in /home/mod/devc/libmy_01
## 
## Made by MO david
## Login   <mo_d@etna-alternance.net>
## 
## Started on  Sat Oct 22 21:18:05 2016 MO david
## Last update Wed Oct 26 17:02:46 2016 MO david
##

CC		= gcc

NAME		= libmy

CFLAGS		= -Wextra -Wall -Werror

MLIB		= ar r

RLIB		= ranlib

RM		= rm -rf *.a

SRC		= my_putchar.c\
		  my_isneg.c\
		  my_put_nbr.c\
		  my_str_to_wordtab.c\
		  my_putstr.c\
		  my_strlen.c\
		  my_getnbr.c\
		  my_strcpy.c\
		  my_strncpy.c\
		  my_strcmp.c\
		  my_strncmp.c\
		  my_strcat.c\
		  my_strncat.c\
	  	  my_strstr.c\
		  my_strdup.c\
		  my_swap.c

OBJ		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MLIB) $(NAME).a *.o
		$(RLIB) $(NAME).a

clean:
		rm -rf *.o

re:		fclean all

fclean:		clean
		$(RM) $(NAME)

.PHONY:         all clean fclean re
