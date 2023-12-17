/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujamaa <mboujamaa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:26:51 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/16 21:04:46 by mboujamaa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	ch;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n <= 9)
	{
		ch = n + '0';
		ft_putchar_fd(ch, fd);
	}
	else
	{
		ch = n % 10 + '0';
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(ch, fd);
	}
}
// int	main(void)
// {
//     ft_putnbr_fd(483648, -1);
//     return 0;
// }
