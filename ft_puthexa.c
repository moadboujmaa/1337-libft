/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:58:09 by mboujama          #+#    #+#             */
/*   Updated: 2024/02/29 12:31:48 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexa(unsigned long nb, char c, int *len)
{
	char	ch;

	if (nb < 16)
	{
		if (nb < 10)
			ch = nb + '0';
		else
		{
			if (c == 'x')
				ch = nb + 87;
			else
				ch = nb + 55;
		}
		ft_putchar(ch, len);
	}
	else
	{
		ft_puthexa(nb / 16, c, len);
		ft_puthexa(nb % 16, c, len);
	}
}
