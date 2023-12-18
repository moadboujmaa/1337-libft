/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujamaa <mboujamaa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:52:42 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/18 06:31:17 by mboujamaa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*ptr;
	unsigned int		i;

	if (!s)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	test_fn(unsigned int nb, char ch)
// {
// 	printf("Index %d\n", nb);
// 	if (ch >= 'a' && ch <= 'z')
// 		return (ch - 32);
// 	return (ch);
// }

// int	main(void)
// {
// 	char	*s = "abcdef";

// 	printf("%s", ft_strmapi(s, &test_fn));
// 	return (0);
// }
