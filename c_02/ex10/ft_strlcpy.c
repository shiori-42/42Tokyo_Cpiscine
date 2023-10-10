/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:47:33 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/22 12:45:14 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char			dest[6];
// 	char			*src;
// 	unsigned int	size;

// 	src = "happy smile";
// 	size = 6;
// 	unsigned int a, b;
// 	a = strlcpy(dest, src, size);
// 	printf("Standard : %s, size : %u\n", dest, a);
// 	b = ft_strlcpy(dest, src, size);
// 	printf("Imitation : %s, size : %u\n", dest, a);
// 	return (0);
// }
