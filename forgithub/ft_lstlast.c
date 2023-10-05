/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syonekur <syonekur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:04:33 by syonekur          #+#    #+#             */
/*   Updated: 2023/09/30 13:18:00 by syonekur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*last_node;
// 	t_list	*tmp;

// 	head = ft_lstnew("One");
// 	ft_lstadd_front(&head, ft_lstnew("Start"));
// 	ft_lstadd_front(&head, ft_lstnew("Begin"));
// 	last_node = ft_lstlast(head);
// 	if (last_node)
// 		printf("Last node content: %s\n", (char *)last_node->content);
// 	else
// 		printf("List is empty.\n");
// 	// メモリの解放
// 	while (head)
// 	{
// 		tmp = head;
// 		head = head->next;
// 		free(tmp);
// 	}
// 	return (0);
// }
