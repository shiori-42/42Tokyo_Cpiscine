CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include -I/Users/syonekur/Desktop/ex00/src

SRCS = src/main.c src/read_dictionary.c src/ft_atoi.c src/is_valid_number.c src/chunk_to_word.c

OBJS = $(SRCS:.c=.o)

rush-02: $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o rush-02 $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f rush-02

re: fclean rush-02

