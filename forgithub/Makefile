NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS= ft_isdigit.c \
ft_memset.c ft_strdup.c ft_strncmp.c \
ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c \
ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c	ft_tolower.c \
ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c 

SRCS_BONUS=ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c \
			ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstiter.c \

OBJS = $(SRCS:.c=.o)
# OBJS_BONUS = $(SRCS_BONUS:.c=.o)

ifdef WITH_BONUS
OBJS+=$(SRCS_BONUS:.c=.o)
endif

OBJS_BONUS=$(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:
	make WITH_BONUS=1 all
# (OBJS_BONUS)
# 	rm -f$(NAME)
# 	ar rc $(NAME) $(OBJS)$(OBJS_BONUS)
# 	ranlib $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus