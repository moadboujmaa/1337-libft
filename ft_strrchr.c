/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujamaa <mboujamaa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:48:07 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/18 06:41:48 by mboujamaa        ###   ########.fr       */
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
// 	char	*s = "zmoad boujamaa";
// 	printf("mine: %s\n", ft_strrchr(s, 'z'));
// 	printf("%s", strrchr(s, 'z'));
// 	return (0);
// }
