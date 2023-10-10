/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:22:22 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/27 19:36:08 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rush02.h
#ifndef RUSH02_H
#define RUSH02_H

typedef struct s_dict_entry
{
	char *key;
	char *value;
} t_dict_entry;

t_dict_entry *read_dictionary(const char *filename);
void parse_line(char *buffer, char **key, char **value);

#endif

