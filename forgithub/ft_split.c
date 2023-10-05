/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:51:56 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/27 20:02:18 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cnt_words(char const *s, char sep)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == sep))
			i++;
		if (s[i])
		{
			cnt++;
			while (s[i] && (s[i] != sep))
				i++;
		}
	}
	return (cnt);
}

char	*ft_strndup(const char *s1, int n)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(n + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] && n--)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = malloc(((cnt_words(s, c)) + 1) * sizeof(char *));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		tab[k] = ft_strndup(&s[i], j);
		k++;
		i += j;
	}
	tab[k] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	**tab;

// 	// char const	*s1;
// 	// char		set;
// 	// char		**splited;
// 	// s1 = "Hexllo Worlxd,Hxello evxeryoxne!";
// 	// set = 'x';
// 	tab = ft_split("  tripouille  42  ", ' ');
// 	// tab = ft_split(s1, set);
// 	// printf("%d\n", cnt_words(s1, set));
// 	for (int i = 0; tab[i]; i++)
// 	{
// 		printf("tab:%s\n", tab[i]);
// 		free(tab[i]);
// 	}
// 	free(tab);
// 	return (0);
// }
