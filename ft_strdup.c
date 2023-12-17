/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:09:37 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/17 08:28:26 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;

	ptr = (char *) malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*str = NULL;
// 	char	*ptr;
// 	char	*ptr2;

// 	ptr = ft_strdup(str);
// 	ptr2 = strdup(str);
// 	printf("%s\n", ptr);
// 	printf("%s\n", ptr2);
// 	return (0);
// }
