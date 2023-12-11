/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujamaa <mboujamaa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:21:05 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/10 20:41:26 by mboujamaa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = ft_strlen(dst);
	if (!dst && size == 0)
		return (srclen);
	if (size <= dstlen)
		return (size + srclen);
	i = 0;
	while (src[i] && i < size - dstlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}

// int main() {
//     char s1[10] = "a";
//     char s2[] = "lorem ipsum dolor sit amet";
//     printf("%ld", ft_strlcat(s1, s2, 1));
//     return 0;
// }
