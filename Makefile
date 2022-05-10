##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 	=	sources/main.c \
			sources/my_put.c \
			sources/my_getnbr.c \
			sources/ralloc.c \
			sources/player.c 	\
			sources/player_error.c \
			sources/matchstick.c	\
			sources/board.c \
			sources/display.c	\
			sources/bot.c	\
			sources/bot_error.c \
			sources/my_strlen.c \
			sources/my_strcmp.c \
			sources/my_memset.c \

CFLAGS	=	-Wall -Wshadow -Wextra -I include -lncurses

OBJ		= 	$(SRC:.c=.o)

NAME 	= 	matchstick

all:		$(NAME)

$(NAME): 	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all