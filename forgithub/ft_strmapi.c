/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:35:15 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/26 23:25:46 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
		i++;
	ptr = (char *)malloc(i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = (f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	aaaaa(unsigned int i, char c)
// {
// 	c += i;
// 	return (c);
// }

// char	upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		c -= ('a' - 'A');
// 	return (c);
// }

// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	const char s1[] = "aaaaaaaaaaaaaaaa";
// 	(void)argc;
// 	if (argv[1][0] == '1')
// 		str = ft_strmapi(s1, &aaaaa);
// 	if (argv[1][0] == '2')
// 		str = ft_strmapi(s1, &upper);
// 	printf("%s\n", str);
// 	free(str);
// }
