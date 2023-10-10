/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:01:12 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/31 22:46:57 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_a;
	int	is_d;
	int	cmp;

	is_a = 1;
	is_d = 1;
	i = 0;
	while (i < length - 1)
	{
		cmp = f(tab[i], tab[i + 1]);
		if (cmp > 0)
		{
			is_a = 0;
		}
		if (cmp < 0)
		{
			is_d = 0;
		}
		i++;
	}
	return (is_a || is_d);
}
