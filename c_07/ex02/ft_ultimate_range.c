/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:27:47 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/27 15:42:29 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = (malloc(sizeof(int) * diff));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	size;

// 	i = 0;
// 	min = 3;
// 	max = 17;
// 	size = ft_ultimate_range(&range, min, max);
// 	if (range != NULL)
// 	{
// 		while (i < size)
// 		{
// 			printf("%d,", range[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }
