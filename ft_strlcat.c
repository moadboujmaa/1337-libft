/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:21:05 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/06 16:26:18 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
			const char *restrict src, size_t size)
{
	size_t	dstsize;
	size_t	i;

	i = 0;
	dstsize = ft_strlen(dst);
	while (src[dstsize] && dstsize <= size - 1)
	{
		dst[dstsize] = src[i];
		i++;
	}
}

int	main(void)
{
	char	dst[20] = "moad BOUJAMAA";

	printf("%lu\n", strlcat(dst, "moad boujamaa", sizeof(dst)));
	return (0);
}
