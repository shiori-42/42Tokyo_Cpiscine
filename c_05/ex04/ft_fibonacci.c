/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:12:17 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 10:49:44 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	printf("ans1:%d\n", ft_fibonacci(1));
// 	printf("ans1:%d\n", ft_fibonacci(2));
// 	printf("ans1:%d\n", ft_fibonacci(3));
// 	printf("ans1:%d\n", ft_fibonacci(4));
// 	printf("ans1:%d\n", ft_fibonacci(5));
// 	printf("ans1:%d\n", ft_fibonacci(6));
// 	printf("ans1:%d\n", ft_fibonacci(7));
// 	printf("ans1:%d\n", ft_fibonacci(8));
// 	printf("ans1:%d\n", ft_fibonacci(9));
// 	printf("ans1:%d\n", ft_fibonacci(10));
// 	printf("ans1:%d\n", ft_fibonacci(11));
// 	return (0);
// }
