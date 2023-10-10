/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:28:10 by syonekur          #+#    #+#             */
/*   Updated: 2023/08/31 20:30:31 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		check_base(char *base);
int		cnt_base(char *base);
int		ft_atoi_base(char *str, char *base);

char	*ft_set_nbr(char *base, int nbr, int base_len, int m_flag)
{
	char	*str;
	int		size;

	size = 1;
	printf("Result: %d\n", nbr);
	while (nbr / base_len)
	{
		size++;
		nbr /= base_len;
	}
	str = malloc(size + 1 + m_flag);
	if (!str)
		return (NULL);
	if (m_flag == 1)
		str[0] = '-';
	str[size + m_flag] = '\0';
	
	while ((size + m_flag - 1) >= 0)
	{
		str[size + m_flag - 1] = base[(nbr) % base_len];
		nbr /= base_len;
		size--;
	}
	return (str);
}

char	*ft_itoa_base(int n, char *base)
{
	int			base_len;
	char		*str;
	int			m_flag;
	long long	nbr;

	nbr = (long long)n;
	base_len = cnt_base(base);
	m_flag = 0;
	if (nbr < 0)
	{
		m_flag = 1;
		nbr = -nbr;
	}
	str = ft_set_nbr(base, nbr, base_len, m_flag);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	char	*str;

	if (!(check_base(base_from)) || !(check_base(base_to)))
		return (NULL);
	i = ft_atoi_base(nbr, base_from);
	printf("%d", i);
	str = ft_itoa_base(i, base_to);
	return (str);
}

int	main(void)
{
	char	*ans;

	char nbr[] = "4567890";
	char base_from[] = "0123456789";
	char base_to[] = "0123456789";
	ans = ft_convert_base(nbr, base_from, base_to);
	printf("Result: %s\n", ans);
	free(ans);
	return (0);
}
