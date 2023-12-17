/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:54:00 by mboujamaa         #+#    #+#             */
/*   Updated: 2023/12/17 14:08:20 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*ptr;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		ptr = f(lst->content);
		new_node = ft_lstnew(ptr);
		if (!new_node)
		{
			del(ptr);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}

// void	*del(void *arg)
// {
// 	free(arg);
// }

// int	main(void)
// {
// 	t_list	*node = NULL;
// 	t_list	*node2 = NULL;
// 	t_list	*node3 = NULL;
// 	t_list	*node4 = NULL;

// 	node = ft_lstnew("moad\t");
// 	node2 = ft_lstnew("boujamaa\t");
// 	node3 = ft_lstnew("test 1\t");
// 	node4 = ft_lstnew("test 2\t");
// 	node->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;

// 	ft_lstmap(node, ft_memset(node->content, 'a', 2), del(node));
// 	return (0);
// }
