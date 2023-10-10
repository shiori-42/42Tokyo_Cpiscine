/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:24:48 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/09 16:44:56 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static int	cnt_size(uintptr_t nbr, int base_len)
{
	int	size;

	size = 1;
	while (nbr / base_len)
	{
		size++;
		nbr /= base_len;
	}
	return (size);
}

char	*ft_itoa_base(uintptr_t nbr, char *base)
{
	int		base_len;
	char	*str;
	int		size;

	base_len = ft_strlen(base);
	size = cnt_size(nbr, base_len);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (--size >= 0)
	{
		str[size] = base[(nbr) % base_len];
		nbr /= base_len;
	}
	return (str);
}
