/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:25:24 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/25 21:45:55 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	char *s1 = "";
// 	char *s2 = "abcdef";

// 	printf("%s(%zu)\n", s1, ft_strlen(s1));
// 	printf("%s(%zu)\n", s2, ft_strlen(s2));
// 	return (0);
// }