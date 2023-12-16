/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:42:52 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 16:40:29 by mboujama         ###   ########.fr       */
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

// int	main(void)
// {
// 	char	s1[20] = "moad boujamaa";
// 	char	s2[20] = "moad boujamaa";

// 	printf("%s\n", ft_memmove(&s1[0], &s1[2], 5));
// 	printf("%s", memmove(&s2[0], &s2[2], 5));
// 	return (0);
// }
