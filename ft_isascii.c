/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:50:21 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 15:43:07 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_isascii(-1));
// 	printf("%d\n", ft_isascii(20));
// 	printf("%d\n", ft_isascii(50));
// 	printf("%d\n", ft_isascii(100));
// 	printf("%d\n", ft_isascii(150));
// 	printf("%d\n", ft_isascii(200));
// }