/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:31:21 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/07 15:57:16 by mboujama         ###   ########.fr       */
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
	write(1, f, 10);
	return (b);
}
// int main() {
//     char b[10] = "redouane";
//     printf("%s", ft_memset(b, 'j', 3));
//     return 0;
// }
