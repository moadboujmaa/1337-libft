/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:29:50 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/14 15:34:46 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long int	res;
	int						sign;
	int						i;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		if (res > 9223372036854775807 && sign == 1)
			return (-1);
		if (res > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (res * sign);
}
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("2147483658"));
// 	printf("%d\n", atoi("2147483658"));
// 	return (0);
// }
