/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:09:15 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/27 20:03:38 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*ptr;
	char		*org_ptr;

	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && is_set(*start, set))
	{
		start++;
	}
	while (end > start && is_set(*end, set))
		end--;
	ptr = (char *)malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	org_ptr = ptr;
	while (start <= end)
	{
		*ptr++ = *start++;
	}
	*ptr = '\0';
	return (org_ptr);
}

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*set;
// 	char		*trimmed;

// 	s1 = "yzxHello Worldxxz";
// 	set = "xyz";
// 	trimmed = ft_strtrim(s1, set);
// 	printf("%s\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }
