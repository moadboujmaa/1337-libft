/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:58:32 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 15:20:19 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char	str[] = "moad";
	int		i;

	i = 0;
	while (str[i])
	{
		printf("%c\n", str[i]);
		i++;
	}
	ft_bzero(str, 4);
	i = 0;
	while (i <= 3)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
} */
