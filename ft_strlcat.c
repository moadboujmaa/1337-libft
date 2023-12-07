/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:21:05 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/07 13:03:17 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
			const char *restrict src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!src)
		return (dstlen);
	while (src[i] && i < size - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int	main(void)
// {
// 	char	dst[20] = "moad BOUJAMAA ";

// 	printf("%lu\n", ft_strlcat(dst, "moad boujamaa", sizeof(dst)));
// 	// printf("%lu\n", strlcat(dst, "moad boujamaa", sizeof(dst)));
// 	printf("%s", dst);
// 	return (0);
// }
