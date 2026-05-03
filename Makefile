# VARIABLES

NAME = libft
CC = gcc
FLAGS = -Wall -Wextra -Werror


# FICHIERS CONCERNÉS

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)


# RÈGLES

all: $(NAME).a

$(NAME).a: $(OBJS)
	ar rcs $(NAME).a $(OBJS)

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME).a

re: fclean all


# PROTECTION

.PHONY: all clean fclean re 