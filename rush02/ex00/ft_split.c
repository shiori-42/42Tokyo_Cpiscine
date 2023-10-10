/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenito <kenito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:00:02 by kenito            #+#    #+#             */
/*   Updated: 2023/08/26 17:25:09 by kenito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**get_dest(char *str, char *charset)
{
	int		i;
	int		size;
	char	**dest;

	i = 0;
	size = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			size++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
		else
			str++;
	}
	dest = (char **)malloc(sizeof(char *) * (size + 1));
	if (dest == NULL)
		return (NULL);
	return (dest);
}

char	*get_alloc(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
		i++;
	word = (char *)malloc(i + 1);
	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;

	result = get_dest(str, charset);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_in_charset(str[i], charset))
			i++;
		if (str[i] && !is_in_charset(str[i], charset))
		{
			result[j] = get_alloc(&str[i], charset);
			j++;
		}
		while (str[i] && !is_in_charset(str[i], charset))
			i++;
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>

// int main() {
//     char str[] = "This,is,a,test,string";
//     char charset[] = ",i";

//     char **result = ft_split(str, charset);

//     // テストケース1: 正しい分割が行われていることを確認
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("%s\n", result[i]);
//     }
//     // メモリの解放
//     for (int i = 0; result[i] != NULL; i++) {
//         free(result[i]);
//     }
//     free(result);

//     return 0;
// }