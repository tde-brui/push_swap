NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = push_swap.c utils1.c utils2.c
OBJECT = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECT)

%.o: %.c 
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
