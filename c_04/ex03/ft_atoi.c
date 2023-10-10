/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:09:45 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/26 20:40:23 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	cnt_m;
	int	ans;

	cnt_m = 1;
	ans = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cnt_m *= (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (ans * cnt_m);
}

int	main(void)
{
	int	ans;

	char str[] = " ---+--+1234ab567";
	ans = ft_atoi(str);
	printf("Result:%d\n:", ans);
}
