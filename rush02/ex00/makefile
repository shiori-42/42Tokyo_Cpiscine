CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include
SRC = src/main.c src/read_dictionary.c src/ft_split.c src/ft_atoi.c src/strs_to_dict src/convert_num.c
OBJ = $(SRC:.c=.o)
TARGET = rush-02

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

PHONY. all clean fclean re