/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:27:47 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/27 15:42:24 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	diff;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	diff = max - min;
	arr = malloc(sizeof(int) * diff);
	if (arr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < diff)
		{
			arr[i] = min + i;
			i++;
		}
		return (arr);
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	*num;

// 	i = 0;
// 	min = 3;
// 	max = 17;
// 	num = ft_range(min, max);
// 	if (num != NULL)
// 	{
// 		while (i < (max - min))
// 		{
// 			printf("%d,", num[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }
