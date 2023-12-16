/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:19:34 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 15:45:13 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit(47));
// 	printf("%d\n", ft_isdigit(48));
// 	printf("%d\n", ft_isdigit(57));
// 	printf("%d\n", ft_isdigit(58));
// }
