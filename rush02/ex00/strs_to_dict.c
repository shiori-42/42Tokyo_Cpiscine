/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs_to_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenito <kenito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 23:15:30 by kenito            #+#    #+#             */
/*   Updated: 2023/08/27 23:40:51 by kenito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	strs_to_dict(t_dict *dictionary, int strs_size, char **strs)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (i < strs_size)
	{
		str = strs[i];
		j = 0;
		while (str[j] == ' ')
			j++;
		while (str[j] != ':')
		{
			dictionary[i].key = str[j];
			j++;
		}
		while (str[j] == ' ')
			j++;
		while (str[j] != ':')
		{
			dictionary[i].value = str[j];
			j++;
		}
		i++;
	}
}
