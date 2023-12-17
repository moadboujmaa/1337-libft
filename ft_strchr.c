/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujamaa <mboujamaa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:46:16 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 21:24:03 by mboujamaa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == '\0' && (char)c != '\0')
		return (NULL);
	return ((char *)s);
}

// int	main(void)
// {
// 	char	*s = "moad boujamaa";

// 	printf("%s", ft_strchr(s, '\0'));
// 	return (0);
// }