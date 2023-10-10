/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenito <kenito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:22:22 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/27 23:12:31 by kenito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

typedef struct s_dict_entry
{
	char	*key;
	char	*value;
}t_dict;

t_dict	*read_dictionary(const char *filename);

#endif
