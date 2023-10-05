/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 23:31:51 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/27 20:03:05 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src,
		size_t destsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	if (d_len > destsize)
		return (destsize + s_len);
	while (src[i] && d_len + i + 1 < destsize)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

// int	main(void)
// {
// 	char dest[20] = "Hello World!";
// 	char dest_reset[20] = "Hello World!";
// 	char dest_emp[20] = "";
// 	char src[] = "Good Morning";
// 	char src_emp[] = "";
// 	// Test 1: Basic test
// 	printf("Result:%s,戻り値%zu\n", dest, ft_strlcat(dest, src, 20));
// 	strcpy(dest, dest_reset);
// 	// Test2: destが空、srcが文字列を持つ場合
// 	printf("Result:%s,戻り値%zu\n", dest_emp, ft_strlcat(dest_emp, src, 20));
// 	strcpy(dest_emp, "");
// 	// Test3: 両方の文字列が空の場合
// 	printf("Result:%s,戻り値%zu\n", dest_emp, ft_strlcat(dest_emp, src_emp, 20));
// 	strcpy(dest_emp, "");
// 	// // Test4: destsizeがdestのサイズよりも非常に大きい場合
// 	// printf("Result:%s,戻り値%zu\n", dest, strlcat(dest, src_emp, 50));
// 	// strcpy(dest, dest_reset);
// 	// Test5: destsizeがdestのサイズとsrcのサイズの合計よりも小さい場合
// 	printf("Result:%s,戻り値%zu\n", dest, ft_strlcat(dest, src, 10));
// 	return (0);
// }
