/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:36:43 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/29 15:23:40 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read_dictionary.c
#include "rush02.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> a

t_dict	*read_dictionary(const char *filename)
{ 
	int		fd;
	char	buffer[1024];
	int		len;
	char	*str;

	fd = open(filename, O_RDONLY);
	len = 0;
	while (read(fd, buffer, 1))
		len++;
	close(fd);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	fd = open(fileneme, O_RDONLY);
	read(fd, str, len);
	close(fd);
	return (str);
}
