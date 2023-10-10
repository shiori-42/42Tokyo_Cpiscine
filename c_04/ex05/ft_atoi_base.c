/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:36:20 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/25 22:04:49 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	cnt_base(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	return (base_len);
}

int	ft_atoi_base(char *str, char *base)
{
	int			cnt_m;
	long long	ans;
	int			base_len;

	if (!(check_base(base)))
		return (0);
	base_len = cnt_base(base);
	cnt_m = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cnt_m *= (-1);
		str++;
	}
	ans = 0;
	while (*str && find_index(*str, base) != -1)
	{
		ans = ans * base_len + find_index(*str, base);
		str++;
	}
	return (ans * cnt_m);
}

int	main(void)
{
	long long	ans;

	char str[] = " ---+--+1234ab";
	char base[] = "0123456789ABCDEF";
	ans = ft_atoi_base(str, base);
	printf("Result:%lld\n:", ans);
	return (0);
}
