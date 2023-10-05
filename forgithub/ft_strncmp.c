/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:23:03 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/25 21:48:40 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((s1[i] != s2[i]))
			return ((unsigned)s1[i] - (unsigned)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char test1[] = "abc12";
// 	char test2[] = "abcde";

// 	if (ft_strncmp(test1, test2, 5) == 0)
// 		printf("文字列一致\n");
// 	else
// 		printf("文字列不一致\n");

// 	if (ft_strncmp(test1, test2, 3) == 0)
// 		printf("文字列一致\n");
// 	else
// 		printf("文字列不一致\n");

// 	return (0);
// }