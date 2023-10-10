# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 21:42:44 by syonekur          #+#    #+#              #
#    Updated: 2023/08/31 09:24:28 by syonekur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

cc -Wall -Werror -Wextra -c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c
ar -rcs libft.a ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_putchar.o 
rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o