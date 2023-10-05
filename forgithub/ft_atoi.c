/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:25:48 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/01 11:13:49 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	ans;

	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	ans = 0;
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (sign * ans);
}

// int	main(void)
// {
// 	int		i;
// 	int		k;
// 	char	*s;

// 	s = " -2147483649";
// 	i = ft_atoi(s);
// 	printf("ans:%d\n", i);
// 	return (0);
// }

// int	atoi(void)
// {
// 	(int)strtol();
// }
