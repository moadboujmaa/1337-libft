/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:28:12 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 14:49:41 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

// int main()
// {
// 	t_list  *newnode = NULL;
// 	ft_lstadd_back(&newnode, ft_lstnew("hello"));
// 	ft_lstadd_back(&newnode, ft_lstnew("World"));
// 	ft_lstadd_back(&newnode, ft_lstnew("From"));
// 	ft_lstadd_back(&newnode, ft_lstnew("1337"));
// 	while (newnode != NULL)
// 	{
// 		printf("%s\n", newnode->content);
// 		newnode = newnode->next;
// 	}
// }
