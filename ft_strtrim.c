/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujamaa <mboujamaa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:10:06 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/10 22:31:19 by mboujamaa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// check if the character from the s1 is exist in the set
int	is_in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// count number of characters of set at the start of s1
int	count_start(char const *s1, char const *set)
{
	int	count;

	count = 0;
	while (is_in_set(set, s1[count]))
		count++;
	return (count);
}

// count number of characters of set at the end of s1
int	count_end(char const *s1, char const *set)
{
	int	count;
	int	last_index;

	last_index = ft_strlen(s1) - 1;
	count = 0;
	while (is_in_set(set, s1[last_index]))
	{
		last_index--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	int		count_set;
	int		first_trim_index;

	first_trim_index = count_start(s1, set);
	count_set = count_start(s1, set) + count_end(s1, set);
	i = 0;
	ptr = (char *) malloc((ft_strlen(s1) - count_set + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (i < ft_strlen(s1) - count_set)
	{
		ptr[i] = s1[first_trim_index];
		i++;
		first_trim_index++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	s1[] = "lorem ipsum dolor sit amet";
// 	printf("%s", ft_strtrim(s1, "tel"));
// 	return (0);
// }
