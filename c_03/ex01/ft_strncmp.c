/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:23:50 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/20 17:24:58 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n > 0)
	{
		if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	unsigned int	n;
// 	char			*s1;
// 	char			*s2;
// 	int				result;

// 	n = 8;
// 	s1 = "Hello dorld";
// 	s2 = "Hello corld";
// 	result = ft_strncmp(s1, s2, n);
// 	printf("result:%d\n", result);
// 	return (0);
// }
