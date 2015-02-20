##
## Makefile for Make in /home/wroble_h/rendu/Allum1
## 
## Made by Hubert Wroblewski
## Login   <wroble_h@epitech.net>
## 
## Started on  Mon Feb  9 09:51:45 2015 Hubert Wroblewski
## Last update Thu Feb 19 13:32:59 2015 Hubert Wroblewski
##

CC	= gcc

RM	= rm -f

NAME	= allum1

CFLAGS	+= -W -Wall -Wextra -Werror

CFLAGS	+= -g3

CFLAGS	+= -I include/

SRCS	= main.c \
	nbr_line.c \
	my_putstr.c \
	my_getnbr.c \
	my_allum.c \
	my_print_game.c \
	readpone.c \
	my_read.c \
	less_pipe.c \
	my_ia.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
