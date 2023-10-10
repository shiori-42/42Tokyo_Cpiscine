CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include
SRC = src/main.c src/read_dictionary.c
OBJ = $(SRC:.c=.o)
TARGET = your_program_name

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

