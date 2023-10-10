/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:23:31 by kenito            #+#    #+#             */
/*   Updated: 2023/08/29 15:29:08 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "rush02.h"

t_dict	*read_dictionary(const char *filename);
char	**ft_split(char *str, char *charset);
int		ft_atoi(char *str);
void	strs_to_dict(t_dict *dictionary, int strs_size, char **strs);
void	convert_num(unsigned int num, t_dict dictionary);

int	main(int argc, char **argv)
{
	char			*str;
	char			**strs;
	int				strs_size;
	t_dict_entry	*dictionary;
	int				num;

	if (argc == 2)
	{
		str = read_dictionary("numbers.dict");
		strs = ft_split(str, "\n");
		strs_size = 0;
		while (strs[strs_size])
			strs_size++;
		strs_to_dict(dictionary, strs_size, strs);
		num = ft_atoi(argv[1]);
		convert_num(num, dictionary);
	}
	
}
