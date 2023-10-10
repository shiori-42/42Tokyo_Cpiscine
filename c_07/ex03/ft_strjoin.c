/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:43:36 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/28 22:16:26 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	cnt_strs_len(char **strs, int size)
{
	int	i;
	int	strs_len;

	i = 0;
	strs_len = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	return (strs_len);
}

char	*size_zero(void)
{
	char	*result;

	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

void	copy_str_to_result(char *result, char *src, int *j)
{
	int	k;

	k = 0;
	while (src[k])
	{
		result[*j] = src[k];
		(*j)++;
		k++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;

	if (size == 0)
		return (size_zero());
	result = malloc(cnt_strs_len(strs, size) + ft_strlen(sep) * (size - 1) + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		copy_str_to_result(result, strs[i], &j);
		if (i < size - 1)
			copy_str_to_result(result, sep, &j);
		i++;
	}
	result[j] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// char	*ft_strjoin(int size, char **strs, char *sep);

// int	main(void)
// {
// 	char	*sep1;
// 	int		size1;
// 	char	*result1;
// 	char	*sep2;
// 	int		size2;
// 	char	*result2;
// 	char	*sep3;
// 	int		size3;
// 	char	*result3;
// 	char	*sep4;
// 	int		size4;
// 	char	*result4;
// 	char	*sep5;
// 	int		size5;
// 	char	*result5;
// 	char	*sep6;
// 	int		size6;
// 	char	*result6;
// 	char	*sep7;
// 	int		size7;
// 	char	*result7;

// 	// テストケース1
// 	char *strs1[] = {"l", "l"};
// 	sep1 = "o";
// 	size1 = 0;
// 	result1 = ft_strjoin(size1, strs1, sep1);
// 	printf("Result 1: %s\n", result1);
// 	free(result1);
// 	// テストケース2
// 	char *strs2[] = {"l", "l"};
// 	sep2 = "o";
// 	size2 = 2;
// 	result2 = ft_strjoin(size2, strs2, sep2);
// 	printf("Result 2: %s\n", result2);
// 	free(result2);
// 	// テストケース3
// 	char *strs3[] = {"lollol", "pouic"};
// 	sep3 = "1234";
// 	size3 = 2;
// 	result3 = ft_strjoin(size3, strs3, sep3);
// 	printf("Result 3: %s\n", result3);
// 	free(result3);
// 	// テストケース4
// 	char *strs4[] = {"lol", "pouic"};
// 	sep4 = "1234";
// 	size4 = 2;
// 	result4 = ft_strjoin(size4, strs4, sep4);
// 	printf("Result 4: %s\n", result4);
// 	free(result4);
// 	// テストケース5
// 	char *strs5[] = {"lol", "pouic", ""};
// 	sep5 = "1234";
// 	size5 = 3;
// 	result5 = ft_strjoin(size5, strs5, sep5);
// 	printf("Result 5: %s\n", result5);
// 	free(result5);
// 	// テストケース6
// 	char *strs6[] = {"lol", "pouic", "lol", "pouic", "", "youpiiii"};
// 	sep6 = "1234";
// 	size6 = 6;
// 	result6 = ft_strjoin(size6, strs6, sep6);
// 	printf("Result 6: %s\n", result6);
// 	free(result6);
// 	// テストケース7
// 	char *strs7[] = {"lol", "pouic", "", "youpiiii"};
// 	sep7 = "1234";
// 	size7 = 4;
// 	result7 = ft_strjoin(size7, strs7, sep7);
// 	printf("Result 7: %s\n", result7);
// 	free(result7);
// 	return (0);
// }
