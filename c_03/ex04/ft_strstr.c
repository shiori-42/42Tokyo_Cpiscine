/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:27:41 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/20 18:07:27 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break ;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*ans;

// 	char str[] = "HEllo,World";
// 	char to_find[] = "World";
// 	ans = ft_strstr(str, to_find);
// 	if (ans == NULL)
// 		printf("不一致");
// 	else
// 		printf("一致%p\n", ans);
// 	return (0);
// }
