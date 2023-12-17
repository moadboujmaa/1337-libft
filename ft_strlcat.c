/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:21:05 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 12:14:59 by mboujama         ###   ########.fr       */
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

// int	main(void)
// {
//     char 		*dst = NULL;
//     const char	*src = "loremh";

// 	printf("%zu\n", ft_strlcat(dst, src, 0));
// 	// printf("%s", s1);
// 	return (0);
// }
