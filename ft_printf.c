/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:17:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/02/29 12:29:39 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_check_format(char formatter, va_list ptr, int *len)
{
	if (formatter == 'c')
		ft_putchar(va_arg(ptr, int), len);
	else if (formatter == 'd' || formatter == 'i')
		ft_putnbr(va_arg(ptr, int), len);
	else if (formatter == 'u')
		ft_putnbr(va_arg(ptr, unsigned int), len);
	else if (formatter == 's')
		ft_putstr(va_arg(ptr, char *), len);
	else if (formatter == 'x' || formatter == 'X')
		ft_puthexa(va_arg(ptr, unsigned int), formatter, len);
	else if (formatter == 'p')
		ft_putpointer(va_arg(ptr, unsigned long), len);
	else if (formatter == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		len;

	if (write(1, NULL, 0) == -1)
		return (-1);
	len = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check_format((char)*str, ptr, &len);
		}
		else
		{
			write(1, str, 1);
			len++;
		}
		str++;
	}
	va_end(ptr);
	return (len);
}

