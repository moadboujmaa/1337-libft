/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:06:48 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 16:06:22 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*newnode = NULL;

// 	ft_lstadd_back(&newnode, ft_lstnew("hello"));
// 	ft_lstadd_back(&newnode, ft_lstnew("World"));
// 	ft_lstadd_back(&newnode, ft_lstnew("From"));
// 	ft_lstadd_back(&newnode, ft_lstnew("1337"));
// 	printf("%d", ft_lstsize(newnode));
// }
