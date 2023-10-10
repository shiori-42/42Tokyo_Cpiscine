/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:29:10 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/20 18:34:17 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	i = dest_len;
	if (i > size)
		return (size + src_len);
	while (src[j] && (i + 1 < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	unsigned int	size;
// 	unsigned int	ans;

// 	char dest[12] = "Hello, ";
// 	char src[] = "World!";
// 	size = 4;
// 	ans = ft_strlcat(dest, src, size);
// 	printf("dest   : %s\n", dest);
// 	printf("answer : %d\n", ans);
// 	return (0);
// }
