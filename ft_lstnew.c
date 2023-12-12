/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:13:29 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/12 14:54:19 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr); 
}

// int	main(void)
// {
// 	char 	*content;
// 	t_list	*newlst;

// 	content = "moad";
// 	newlst = ft_lstnew(content);
// 	printf("%s", newlst->content);
// 	return (0);
// }
