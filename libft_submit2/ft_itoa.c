/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:46:49 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/02 19:38:57 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	char	buf[12];
	char	*ptr;
	int		sign;

	if (c == 0)
		return (ft_strdup("0"));
	sign = 0;
	if (c < 0)
	{
		sign = 1;
		if (c == INT_MIN)
			return (ft_strdup("-2147483648"));
		c = -c;
	}
	ft_bzero(buf, 12);
	ptr = &buf[10];
	while (c)
	{
		*ptr-- = (c % 10) + '0';
		c /= 10;
	}
	if (sign)
		*ptr-- = '-';
	return (ft_strdup(ptr + 1));
}

// int	main(void)
// {
// 	int		i;
// 	char	*s;

// 	i = 214748;
// 	s = ft_itoa(i);
// 	printf("ans:%s\n", s);
// 	if (s != NULL)
// 		free(s);
// 	return (0);
// }
