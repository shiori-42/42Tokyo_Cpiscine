/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:05:29 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/30 21:50:24 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	cnt_words(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			cnt++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = malloc((cnt_words(str, charset) + 1) * sizeof(char *));
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (!str[i])
			break ;
		j = 0;
		while (str[i + j] && !(is_sep(str[i + j], charset)))
			j++;
		tab[k] = ft_strdup(&str[i], j);
		k++;
		i += j;
	}
	tab[k] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**result;
// 	int		i;

// 	str = "I01will23be45back3";
// 	charset = "0123";
// 	i = 0;
// 	result = ft_split(str, charset);
// 	if (!result)
// 		return (1);
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
