/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:42:52 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/09 15:04:40 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	if (!ps1 && !ps2)
		return (NULL);
	if (ps1 > ps2)
	{
		i = n;
		while (i > 0)
		{
			ps1[i - 1] = ps2[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
