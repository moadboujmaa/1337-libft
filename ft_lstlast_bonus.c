/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:12:04 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 16:27:23 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list  *newnode = NULL;
// 	t_list	*lastnode = NULL;

// 	ft_lstadd_back(&newnode, ft_lstnew("hello"));
// 	ft_lstadd_back(&newnode, ft_lstnew("World"));
// 	ft_lstadd_back(&newnode, ft_lstnew("From"));
// 	ft_lstadd_back(&newnode, ft_lstnew("1337"));
// 	lastnode = ft_lstlast(newnode);
// 	printf("%s", lastnode->content);
// 	return (0);
// }
