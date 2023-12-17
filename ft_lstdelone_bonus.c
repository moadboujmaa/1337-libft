/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:39:02 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 14:10:58 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*node = ft_lstnew("hello");

// 	printf("%s", node->content);
// 	free(node);
// 	printf("%s", node->content);
// 	return (0);
// }
