/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:01:27 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/30 13:18:22 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*current;

	new_lst = NULL;
	if (!lst)
		return (NULL);
	current = lst;
	while (current)
	{
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		current = current->next;
	}
	return (new_lst);
}

// 1. 数値を2倍にする関数
// void	*double_content(void *content)
// {
// 	int	*value;
// 	int	*doubled_value;

// 	value = (int *)content;
// 	doubled_value = malloc(sizeof(int));
// 	if (!doubled_value)
// 		return (NULL);
// 	*doubled_value = *value * 2;
// 	return (doubled_value);
// }

// // 2. 数値を削除する関数
// void	del_content(void *content)
// {
// 	free(content);
// }

// // 3. リストの内容を印刷する関数
// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d -> ", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*mapped_lst;

// 	int num1, num2, num3;
// 	num1 = 5, num2 = 10, num3 = 15;
// 	// Create a linked list: 5 -> 10 -> 15
// 	lst = ft_lstnew(&num1);
// 	ft_lstadd_back(&lst, ft_lstnew(&num2));
// 	ft_lstadd_back(&lst, ft_lstnew(&num3));
// 	printf("Original list:\n");
// 	print_list(lst);
// 	// Apply ft_lstmap to the list
// 	mapped_lst = ft_lstmap(lst, double_content, del_content);
// 	printf("Mapped list (values doubled):\n");
// 	print_list(mapped_lst);
// 	// Free the mapped list
// 	ft_lstclear(&mapped_lst, del_content);
// 	return (0);
// }
