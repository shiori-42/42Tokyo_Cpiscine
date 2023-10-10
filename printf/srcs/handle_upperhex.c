/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_upperhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:44:31 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/08 20:13:00 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_upperhex(va_list args)
{
	int		hexed_nbr;
	int		len;
	char	*base;
	char	*str;

	hexed_nbr = va_arg(args, int);
	base = "0123456789ABCDEF";
	str = ft_itoa_base(hexed_nbr, base);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
