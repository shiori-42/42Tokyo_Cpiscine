/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:01:56 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/31 22:40:25 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int			ft_atoi(char *str);
void		ft_putnbr(int nbr);
int			add(int a, int b);
int			sub(int a, int b);
int			mul(int a, int b);
int			divide(int a, int b);
int			mod(int a, int b);

typedef int	(*t_operator)(int, int);

int	find_op(char *c)
{
	int		i;
	char	*opes;

	opes = "+-*/%";
	i = 0;
	while (opes[i])
	{
		if (opes[i] == *c)
			return (i);
		i++;
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	long int	value1;
	long int	value2;
	int			index;
	t_operator	op[5];

	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	op[0] = add;
	op[1] = sub;
	op[2] = mul;
	op[3] = divide;
	op[4] = mod;
	index = find_op(argv[2]);
	if (index == 3 && value2 == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (index == 4 && value2 == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else if (index != -1)
		ft_putnbr(op[index](value1, value2));
	else
		write(1, "0\n", 2);
	return (0);
}
