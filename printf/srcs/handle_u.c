/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:07:11 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/09 16:54:09 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putunbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

int	handle_u(va_list args)
{
	unsigned int	n;
	char			*str;
	int				len;

	n = va_arg(args, unsigned int);
	ft_putunbr_fd(n, 1);
	len = ft_strlen(str);
	return (len);
}
