/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:16:36 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/26 20:47:21 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size == 0 || count == 0)
		total = 1;
	else if (count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, total);
	return (ptr);
}

// int	main(void)
// {
// 	int	*values;

// 	values = ft_calloc(ALLOCATE_SIZE, sizeof(int));
// 	if (values == NULL)
// 		exit(EXIT_FAILURE);
// 	for (int i = 0; i < ALLOCATE_SIZE; i++)
// 	{
// 		printf("%d", values[i]);
// 	}
// 	printf("\n");
// 	for (int i = 0; i < ALLOCATE_SIZE; i++)
// 	{
// 		values[i] = i;
// 		printf("%d", values[i]);
// 	}
// 	printf("\n");
// 	for (int i = 0; i < ALLOCATE_SIZE; i++)
// 	{
// 		printf("%d", values[i]);
// 	}
// 	printf("\n");
// 	free(values);
// }
