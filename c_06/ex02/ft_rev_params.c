/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:15:30 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/23 23:11:10 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	argv_len;

	i = 1;
	while (i < argc)
	{
		argv_len = 0;
		while (argv[argc - i][argv_len])
		{
			argv_len++;
		}
		write(1, argv[argc - i], argv_len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
