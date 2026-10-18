# VARIABLES

NAME = push_swap
CC = gcc
FLAGS = -Werror -Wall -Wextra


# FICHIERS CONCERNES

SRCS = push_swap.c /
        utils.c /


OBJS = $(SRCS: .c=.o)


# REGLES

all: $(NAME).a

$(NAME).a: $(OBJS)
    ar  rcs $(NAME).a $(OBJS)

%.o: %.c
    $(CC) $(FLAGS) -c $< -o $@

clean:
    rm -f $(OBJS)

fclean:
    rm -f $(NAME).a

re: fclean all


# PROTECTION

<<<<<<< HEAD
.PHONY: all clean fclean re

\\ on appelait pas utils.c et le makefile n'est pas bon 
\\ ajouter un atoi aussi dans le fichier 
=======
.PHONY: all clean fclean re
>>>>>>> de26f2275846daea362787021363c947bf126711
