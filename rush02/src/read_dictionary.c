/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:36:43 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/27 19:38:08 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read_dictionary.c
#include "rush02.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void parse_line(char *buffer, char **key, char **value)
{
    char *delimiter_pos = strchr(buffer, ':');
    if (!delimiter_pos)
        return; // 形式が正しくない、またはエラーハンドリングが必要

    *delimiter_pos = '\0';
    *key = strdup(buffer);
    *value = strdup(delimiter_pos + 1);
}

t_dict_entry	*read_dictionary(const char *filename)
{
	int				fd;
	char			buffer[1025];
	t_dict_entry	*dictionary;
	int				idx;
	ssize_t			bytes_read;
	char			*key;
	char			*value;

	idx = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	dictionary = malloc(sizeof(t_dict_entry) * 1000); // 仮に1000としています
	if (!dictionary)
	{
		write(1, "Dict Error\n", 11);
		close(fd);
		return (NULL);
	}
	while ((bytes_read = read(fd, buffer, 1024)) > 0)
	{
		buffer[bytes_read] = '\0'; // null-terminate the string
		// ここでbufferを行ごとに解析し、それぞれの行に対してparse_lineを呼ぶ
		// この例では一行しか想定していません
		parse_line(buffer, &key, &value);
		dictionary[idx].key = key;
		dictionary[idx].value = value;
		idx++;
	}
	close(fd);
	if (idx == 0)
	{
		write(1, "Dict Error\n", 11);
		free(dictionary);
		return (NULL);
	}
	dictionary = realloc(dictionary, sizeof(t_dict_entry) * idx);
		// 確保したメモリを適切なサイズに縮小
	return (dictionary);
}
