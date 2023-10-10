CC=cc
CFLAGS=-Wall -Wextra -Werror
INCLUDES= -I./includes -I./libft/includes

LIBFT=libft/libft.a
SRCDIR = srcs/
SRCFILES= ft_itoa_base.c handle_d_or_i.c handle_p.c handle_s.c handle_upperhex.c \
			ft_printf.c handle_c.c handle_lowhex.c handle_percent_symbol.c handle_u.c
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))
OBJS=$(SRCS:.c=.o)

NAME=libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 	
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

