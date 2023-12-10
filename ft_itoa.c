/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:05:41 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/10 15:49:59 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*ptr;
	int		length;

	length = number_length(n);
	ptr = (char *) malloc(sizeof(char) * length + 1);
	if (!ptr)
		return (0);
	if (n == -2147483648)
		ft_strdup("-2147483648");
	sign = 1;
	if (n < 0)
	{
		sign *= -1;
		n *= -1;
	}
	if (sign == -1)
		ptr[0] = '-';
	while (length >= 0)
	{
		ptr[--length] = n % 10;
		n /= 10;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int	n;

// 	n = -2147483648;
// 	char *ret = ft_itoa(n);
// 	printf("%s", ret[0]);
// 	return (0);
// }
