/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur < syonekur@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:47:55 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/22 12:46:13 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	change_hex(int n)
{
	if (n <= 9)
		n += '0';
	else
		n = n - 10 + 'a';
	write(1, &n, 1);
}

void	print_ascii(int n)
{
	write(1, "\\", 1);
	change_hex(n / 16);
	change_hex(n % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
			print_ascii(str[n]);
		else
			write(1, &str[n], 1);
		n++;
	}
}

// int	main(void)
// {
// 	char str[] = "#ou~cou\ntu vas b\tien ?";
// 	printf("Before:%s\n", str);
// 	ft_putstr_non_printable(str);
// 	printf("\n");
// 	return (0);
// }
