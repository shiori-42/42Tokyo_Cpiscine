/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:08:28 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/22 18:41:53 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
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
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb;
	int			base_cnt;

	nb = nbr;
	base_cnt = 0;
	while (base[base_cnt] != '\0')
		base_cnt++;
	if (!check_base(base) || base_cnt < 2)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_cnt)
	{
		ft_putnbr_base(nb / base_cnt, base);
	}
	ft_putchar(base[nb % base_cnt]);
}

// int	main(void)
// {
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	return (0);
// }
