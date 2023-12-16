/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 09:12:12 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 16:37:01 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	if (!ps1 && !ps2)
		return (NULL);
	while (i < n)
	{
		ps1[i] = ps2[i];
		i++;
	}
	return (s1);
}

// int	main(void)
// {
// 	char	s1[20] = "moad boujamaa";
// 	char	s2[20] = "moad boujamaa";

// 	printf("%s\n", ft_memcpy(&s1[0], &s1[5], 2));
// 	printf("%s", memcpy(&s2[0], &s2[5], 2));
// 	return (0);
// }
