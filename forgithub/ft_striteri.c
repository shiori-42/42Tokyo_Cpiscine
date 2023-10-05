/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:09:23 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/27 19:49:03 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	len;

	len = 0;
	while (s[len])
		len++;
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// void	aaaaa(unsigned int i, char *c)
// {
// 	(void)i;
// 	printf("%c", *c - ('a' - 'A'));
// 	return ;
// }

// int	main(void)
// {
// 	char	*s1;

// 	s1 = "abcdefghijklmn";
// 	ft_striteri(s1, &aaaaa);
// 	return (0);
// }
