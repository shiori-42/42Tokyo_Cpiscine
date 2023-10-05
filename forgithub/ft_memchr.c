/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:06:21 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/25 20:06:13 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n--)
	{
		if (*s_ptr == (unsigned char)c)
			return (s_ptr);
		s_ptr++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*ch;

// 	char buf[] = "ABCD5EFGH";
// 	ch = (char *)ft_memchr(buf, '5', sizeof(buf));
// 	if (ch != NULL)
// 		printf("検索文字から表示:%s\n", ch);
// 	else
// 		printf("検索文字が見つかりませんでした");
// 	return (0);
// }
