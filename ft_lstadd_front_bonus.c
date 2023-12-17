/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:28:34 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 14:55:55 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list  *newnode = NULL;
// 	ft_lstadd_front(&newnode, ft_lstnew("1337"));
// 	ft_lstadd_front(&newnode, ft_lstnew("From"));
// 	ft_lstadd_front(&newnode, ft_lstnew("World"));
// 	ft_lstadd_front(&newnode, ft_lstnew("hello"));
// 	while (newnode != NULL)
// 	{
// 		printf("%s\n", newnode->content);
// 		newnode = newnode->next;
// 	}
// }