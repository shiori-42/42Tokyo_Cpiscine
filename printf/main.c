/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:41:43 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/09 16:56:03 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	x;
	int	*p;

	x = 42;
	p = &x;
	printf("org:%c,%s,%d,%p,%p,%u,%x,%X,%%\n", 'a', NULL, -1, p, &x,
		-1, 255, 255);
	ft_printf("imi:%c,%s,%d,%p,%p,%u,%x,%X,%%\n", 'a', NULL, -1, p,
		&x, -1, 255, 255);
	printf("org:Hello World\n");
	ft_printf("imi:Hello World\n");
	return (0);
}
