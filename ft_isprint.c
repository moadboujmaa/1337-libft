/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:21:47 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 15:46:20 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(29));
// 	printf("%d\n", ft_isprint(32));
// 	printf("%d\n", ft_isprint(126));
// 	printf("%d\n", ft_isprint(127));
// }
