/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:01:50 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 17:52:10 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (1)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb += 2;
	}
}

// int	main(void)
// {
// 	printf("ans1:%d\n", ft_find_next_prime(-2147483648));
// 	printf("ans1:%d\n", ft_find_next_prime(2147483647));
// 	printf("ans1:%d\n", ft_find_next_prime(7));
// 	printf("ans1:%d\n", ft_find_next_prime(14));
// 	printf("ans1:%d\n", ft_find_next_prime(21));
// 	return (0);
// }
