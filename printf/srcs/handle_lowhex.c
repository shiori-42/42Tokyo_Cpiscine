/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:23:33 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/08 20:07:53 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_lowhex(va_list args)
{
	int		hexed_nbr;
	int		len;
	char	*base;
	char	*str;

	hexed_nbr = va_arg(args, int);
	base = "0123456789abcdef";
	str = ft_itoa_base(hexed_nbr, base);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
