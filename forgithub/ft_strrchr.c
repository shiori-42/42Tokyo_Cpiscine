/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:35:23 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/25 21:49:55 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_pos;

	last_pos = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			last_pos = s;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last_pos);
}

// int	main(void)
// {
// 	char test[20] = "123456321";
// 	char *p, *q;
// 	p = ft_strrchr(test, '3');
// 	q = ft_strrchr(test, 0);
// 	printf("検索文字が見つかった場所から表示:%s\n", p);
// 	printf("検索文字が見つかった場所から表示:%s\n", q);
// 	return (0);
// }
