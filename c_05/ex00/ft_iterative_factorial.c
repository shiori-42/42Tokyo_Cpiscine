/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:12:05 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 10:49:27 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}

// int	main(void)
// {
// 	int	ans;

// 	ans = ft_iterative_factorial(5);
// 	printf("ans:%d\n", ans);
// 	return (0);
// }
