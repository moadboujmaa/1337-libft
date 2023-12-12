/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:28:12 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/12 11:38:37 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
// int main()
// {
// 	t_list  *newnode = NULL;
// 	ft_lstadd_back(&newnode, ft_lstnew(ft_strdup("hello")));
// 	while (newnode != NULL)
// 	{
// 		printf("%s\n",newnode->content);
// 		newnode = newnode->next;
// 	}
// }