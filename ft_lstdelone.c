/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:39:02 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/12 12:28:44 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

int	main(void)
{
	t_list	*node = ft_lstnew("hello");

	printf("%s", node->content);
	// free(node->content);
	free(node);
	printf("%s", node->content);
	return (0);
}
