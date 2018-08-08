##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_stumper7
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Fri Jun  2 14:27:27 2017 jeremy elkaim
## Last update Fri Jun  2 16:56:55 2017 Filliat Etienne
##

NAME	=	hangman

CC	=	gcc

SRC	=	src/read_file.c		\
		src/str/my_strlen.c	\
		src/str/my_putchar.c	\
		src/str/my_putstr.c	\
		src/str/my_put_nbr.c	\
		src/str/my_get_nbr.c	\
		src/str/my_strcmp.c	\
		src/str/my_strcpy.c	\
		src/word_parsing.c	\
		src/parser.c		\
		src/tries.c		\
		src/str/count_words.c	\
		src/main.c

TMP	=	$(SRC:.c=.c~)

OBJ	=	$(SRC:.c=.o)

RM	=	rm -rf

CFLAGS	+=	-W -Wall
CFLAGS	+=	-I include/

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(TMP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
