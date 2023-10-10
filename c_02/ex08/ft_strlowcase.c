/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:30:59 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/22 12:57:44 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 'a' - 'A';
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "AZHellioWorLd";
	printf("Before:%s\n", str);
	ft_strlowcase(str);
	printf("After:%s\n", str);
	return (0);
}
*/
