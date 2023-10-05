/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:57:34 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/25 20:06:29 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr <= src_ptr)
	{
		i = 0;
		while (i < len)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			dest_ptr[len] = src_ptr[len];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	ft_memmove(buf + 3, buf, 3);
// 	printf("コピー後のbuf文字列:%s\n", buf);
// 	return (0);
// }
