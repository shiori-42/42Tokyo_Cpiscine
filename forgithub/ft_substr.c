/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:22:01 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/27 20:03:46 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_size;
	char	*ptr;
	char	*ini_ptr;

	s_size = ft_strlen(s);
	if (start >= s_size)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (len > s_size - start)
		len = s_size - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ini_ptr = ptr;
	while (len--)
	{
		*ptr++ = s[start++];
	}
	*ptr = '\0';
	return (ini_ptr);
}

// int	main(void)
// {
// 	char	*s2;

// 	const char s1[] = "Hello everyone!!";
// 	s2 = ft_substr(s1, 1, 8);
// 	if (!s2)
// 	{
// 		printf("malloc faile");
// 		return (1);
// 	}
// 	printf("%s\n", s2);
// 	free(s2);
// 	return (0);
// }
