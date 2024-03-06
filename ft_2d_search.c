/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:41:50 by mboujama          #+#    #+#             */
/*   Updated: 2024/03/02 19:57:12 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_2d_search(char **arr, char *str)
{
	int	i = 0;

	while (arr[i])
	{
		if (ft_strnstr(arr[i], str, 5))
			return (arr[i]);
		i++;
	}
	return (NULL);
}

