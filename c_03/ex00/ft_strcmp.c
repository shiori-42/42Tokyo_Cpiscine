/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:21:51 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/20 17:22:28 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	int	result;

// 	char *s1, *s2;
// 	s1 = "Hello dorld";
// 	s2 = "Hello corld";
// 	result = ft_strcmp(s1, s2);
// 	printf("result:%d\n", result);
// 	return (0);
// }
