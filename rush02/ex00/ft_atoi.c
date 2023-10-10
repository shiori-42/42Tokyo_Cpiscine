/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenito <kenito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:10:49 by kenito            #+#    #+#             */
/*   Updated: 2023/08/21 18:53:49 by kenito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int main()
// {
//     char str3[] = "   -+-987";
//     printf("String: %s\n", str3);
//     printf("Converted: %d\n", ft_atoi(str3));

//     char str4[] = "Hello";
//     printf("String: %s\n", str4);
//     printf("Converted: %d\n", ft_atoi(str4)); 

//     return 0;
// }