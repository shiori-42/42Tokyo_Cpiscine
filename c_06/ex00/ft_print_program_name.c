/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:15:30 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/24 13:34:34 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc = 0;
	i = 0;
	while (argv[0][i])
	{
		i++;
	}
	write(1, argv[0], i);
	write(1, "\n", 1);
	return (0);
}
