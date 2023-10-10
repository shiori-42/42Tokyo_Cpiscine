/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:17:38 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 10:49:35 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

// int	main(void)
// {
// 	int	ans;

// 	ans = ft_iterative_power(1, 8);
// 	printf("ans:%d\n", ans);
// 	return (0);
// }
