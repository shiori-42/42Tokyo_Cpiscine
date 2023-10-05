/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:33:10 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/03 20:43:08 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	pre_len;
	size_t	suf_len;
	size_t	total_len;
	char	*ptr;
	char	*org_ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	pre_len = ft_strlen(s1);
	suf_len = ft_strlen(s2);
	total_len = pre_len + suf_len;
	ptr = malloc(total_len + 1);
	if (!ptr)
		return (NULL);
	org_ptr = ptr;
	while (pre_len--)
		*ptr++ = *s1++;
	while (suf_len--)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (org_ptr);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*ans;

// 	s1 = "Hello ";
// 	s2 = "World";
// 	ans = ft_strjoin(s1, s2);
// 	printf("%s\n", ans);
// 	free(ans);
// 	return (0);
// }
