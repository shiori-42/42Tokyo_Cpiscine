/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:20:45 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/29 13:24:51 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	my_strncpy(char *dest, char *src, int n)
{
	while (n && *src)
	{
		*dest++ = *src++;
		--n;
	}
	*dest = '\0';
}

int	is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		if (*str && !is_sep(*str, charset))
		{
			count++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	return (count);
}

char	**set_str(char *str, char *charset, char **result)
{
	int		i;
	char	*start;
	char	*end;

	i = 0;
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		start = str;
		end = str;
		while (*end && !is_sep(*end, charset))
			end++;
		if (end > start)
		{
			result[i] = malloc(end - start + 1);
			if (!result[i])
				return (NULL);
			my_strncpy(result[i], start, end - start);
			i++;
			str = end;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		wc;
	char	**result;

	wc = count_words(str, charset);
	result = malloc((wc + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!set_str(str, charset, result))
		return (NULL);
	return (result);
}

int	main(void)
{
	char	*str;
	char	*charset;
	char	**result;
	int		i;

	str = "I01will23be45back3";
	charset = "0123";
	result = ft_split(str, charset);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
