/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:29:02 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/13 09:23:00 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] != sep)
	{
		count++;
	}
	while (s[i])
	{
		if (s[i] != sep && s[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		c_sep;
	char	*ptr;

	c_sep = count_sep(s, c);
	ptr = (char **) malloc(sizeof(char *) * count_sep(s, c));
	if (!ptr)
		return (0);
}

// int	main(void)
// {
// 	char	*s;
// 	char	sep;

// 	s = "dljjldf moad bouj maa  ehfoehroh  ";
// 	sep = ' ';
// 	printf("%d", count_words(s, sep));
// 	return (0);
// }
