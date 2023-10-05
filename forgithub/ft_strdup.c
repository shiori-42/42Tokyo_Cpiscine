/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:42:41 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/27 20:02:36 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s_len;
	int		i;
	char	*ptr;

	s_len = ft_strlen(s1);
	ptr = (char *)malloc(s_len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*s2;

// 	char s1[] = "Hello,World!";
// 	s2 = ft_strdup(s1);
// 	if (!s2)
// 	{
// 		printf("malloc faile");
// 		return (1);
// 	}
// 	printf("s1:%s\n", s1);
// 	printf("s1をコピーしたs2:%s\n", s2);
// 	free(s2);
// 	return (0);
// }
