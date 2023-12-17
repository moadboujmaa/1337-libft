/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:07:05 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 10:39:12 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	test_fn(unsigned int nb, char *s)
// {
// 	printf("Index %d Character %c\n", nb, *s);
// }

// int	main(void)
// {
// 	char	*s = "abcdef";

// 	ft_striteri(s, &test_fn);
// 	return (0);
// }
