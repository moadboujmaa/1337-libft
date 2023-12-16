/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:12:42 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 15:33:38 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* int	main(void)
{
	char	*ptr;
	char	*ptr2;
	int		i;
	size_t	count;
	size_t	size;

	count = 2;
	size = 3;
	ptr = ft_calloc(count, size);
	ptr2 = calloc(count, size);
	i = 0;
	while (i < count * size)
	{
		printf("ft_calloc[%d]: %d\n", i, ptr[i]);
		// printf("calloc[%d]: %d\n", i, ptr2[i]);
		i++;
	}
	return (0);
} */
