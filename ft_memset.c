/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:31:21 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 16:48:05 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*f;

	f = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		f[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[] = "moad12";
// 	char	str2[] = "moad12";
// 	int		len;

// 	len = 5;
// 	printf("%s\n", ft_memset(str, 66, len));
// 	printf("%s", memset(str, 66, len));
// }
