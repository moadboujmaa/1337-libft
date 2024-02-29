/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:29:02 by mboujama          #+#    #+#             */
/*   Updated: 2024/02/29 12:34:45 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == sep)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	**free_lst(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
	return (NULL);
}

size_t	next_sep(const char *s1, char sep)
{
	size_t	len;

	len = 0;
	while (*s1 && *s1 != sep)
	{
		len++;
		s1++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	len_word;
	int		lst_index;

	if (!s)
		return (NULL);
	lst = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!lst)
		return (NULL);
	lst_index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len_word = next_sep(s, c);
			lst[lst_index] = ft_substr(s, 0, len_word);
			if (!lst[lst_index++])
				return (free_lst(lst));
			s += len_word;
		}
	}
	lst[lst_index] = NULL;
	return (lst);
}

// int	main(void)
// {
// 	char	**lst;
// 	char	*s;
// 	int		i;

// 	i = 0;
// 	s = "test split function - moad boujamaa";
// 	lst = ft_split(s, ' ');
// 	if (lst)
// 		printf("%s\n", lst[i]);
// 	while (lst[i])
// 	{
// 		printf("%s\n", lst[i]);
// 		i++;
// 	}
// 	return (0);
// }
