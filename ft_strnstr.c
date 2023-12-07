/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:08:00 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/07 14:36:05 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2)
		return ((char *) s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i] && s2[j + i] && i + j < n)
			j++;
		if (s2[i] == '\0')
			return ((char *) s2 + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char s1[] = "moad boujamaa";
	char s2[] = "bo";

	printf("|%s|", ft_strnstr(s1, s2, 6));
	return (0);
}
