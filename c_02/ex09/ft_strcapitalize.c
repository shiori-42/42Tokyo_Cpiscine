/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:27:24 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/22 12:52:13 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	prev;
	int		i;

	if (str[0] == '\0')
		return (str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	i = 1;
	while (str[i] != '\0')
	{
		prev = str[i - 1];
		if (!((prev >= 'A' && prev <= 'Z') || (prev >= 'a' && prev <= 'z')
				|| (prev >= '0' && prev <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "";
// 	printf("Before:%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("After:%s\n", str);
// 	return (0);
// }
