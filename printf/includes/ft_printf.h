/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:32:59 by syonekur          #+#    #+#             */
/*   Updated: 2023/10/08 20:08:13 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		handle_c(va_list args);
int		handle_s(va_list args);
int		handle_p(va_list args);
int		handle_d_or_i(va_list args);
char	*ft_itoa_base(uintptr_t num, char *base);
int		handle_u(va_list args);
int		handle_lowhex(va_list args);
int		handle_upperhex(va_list args);
int		handle_percent_symbol(va_list args);

int		ft_printf(const char *format, ...);

#endif