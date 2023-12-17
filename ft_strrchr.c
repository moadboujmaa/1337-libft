/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:07 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 12:20:28 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len] != (char)c && len > 0)
		len--;
	if (s[len] != (char)c && len == 0)
		return (NULL);
	return ((char *)s + len);
}

// int	main(void)
// {
// 	char	*s = "moad boujamaa";
// 	printf("%s", ft_strrchr(s, 'm'));
// 	return (0);
// }
