/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:29:02 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/13 16:48:00 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char sep)
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

char	*add_word(int length)
{
	char	*ptr;
	int		i;

	ptr = (char *) malloc((ft_strlen(word) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		word_index;
	int		i;
	int		j;
	char	*word;

	ptr = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (0);
	i = 0;
	word_index = 0;
	word = NULL;
	while (s[i])
	{
		while (s[i] == c)
			continue ;
		while (s[j] != c)
			j++;
		word = add_word(j);
	}
	return (ptr);
}

int	main(void)
{
	char	*s;
	char	sep;
	int		i;

	s = "dljjldf moad bouj maa  ehfoehroh  ";
	sep = ' ';
	i = 0;
	while (s[i])
		printf("%c", s[i++]);
	return (0);
}
