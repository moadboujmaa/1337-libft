/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:43:42 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/09 15:04:29 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	ps = (unsigned char *) s;
	if (!ps)
		return (NULL);
	i = 0;
	while (i < n && ps)
	{
		if (ps[i] == (unsigned char)c)
			return (ps + i);
		i++;
	}
	return (NULL);
}
