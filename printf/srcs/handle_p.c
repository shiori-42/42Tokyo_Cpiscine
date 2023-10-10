/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:50:13 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/08 19:22:15 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_p(va_list args)
{
	uintptr_t	ptr;
	char		*base;
	char		*str;
	int			len;

	ptr = va_arg(args, uintptr_t);
	base = "0123456789abcdef";
	str = ft_itoa_base(ptr, base);
	len = ft_strlen(str) + 2;
	write(1, "0x", 2);
	write(1, str, len);
	free(str);
	return (len);
}
