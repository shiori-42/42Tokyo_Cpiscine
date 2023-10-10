/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:01:50 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 17:52:06 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("ans1:%d\n", ft_is_prime(-2147483648));
// 	printf("ans1:%d\n", ft_is_prime(2147483647));
// 	printf("ans1:%d\n", ft_is_prime(5));
// 	printf("ans1:%d\n", ft_is_prime(8));
// 	printf("ans1:%d\n", ft_is_prime(13));
// 	return (0);
// }
