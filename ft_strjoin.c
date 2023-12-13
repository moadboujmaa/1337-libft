/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:00:33 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/13 09:23:05 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *) malloc(len * sizeof(char));
	if (!ptr)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
		ptr[i++] = s1[j++];
	j = 0;
	while (j < ft_strlen(s2))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "";
// 	s2 = "";
// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }
