/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:24:02 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/14 12:57:31 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	lst = NULL;
}

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;

// 	node2 = malloc(sizeof(t_list));
// 	node1 = ft_lstnew("moad");
// 	node2->content = ft_strdup("moad");
// 	node2->next = node1;
// 	printf("%s", node2->next->content);
// }
