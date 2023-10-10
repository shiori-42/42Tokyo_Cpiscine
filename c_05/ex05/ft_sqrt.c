/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:01:50 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 17:52:02 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ans1:%d\n", ft_sqrt(-2147483648));
// 	printf("ans1:%d\n", ft_sqrt(2147483647));
// 	printf("ans1:%d\n", ft_sqrt(3000));
// 	printf("ans1:%d\n", ft_sqrt(400));
// 	printf("ans1:%d\n", ft_sqrt(121));
// 	return (0);
// }
