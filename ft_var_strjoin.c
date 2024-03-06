/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 09:23:37 by mboujama          #+#    #+#             */
/*   Updated: 2024/03/03 09:29:10 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_len(va_list args, int nb)
{
    char    *str;
    int     i;
    int     len;

    i = 0;
    while (i < nb)
    {
        str = va_arg(args, char *);
        len += ft_strlen(str);
        i++;
    }
    return (len);
}

char    *ft_var_strjoin(int nb, ...)
{
    int     len = 0;
    char    *ptr;
    int     ptr_index = 0;
    int     i = 0;
    char    *str;

    va_list args;
    va_start(args, nb);
    ptr = malloc(sizeof(char) * ft_len(args, nb) + 1);
    if (!ptr)
        return (NULL);
    while (i < nb)
    {
        str = va_arg(args, char *);
        while (*str)
        {
            ptr[ptr_index] = *str;
            ptr_index++;
            str++;
        }
        i++;
    }
    va_end(args);
    return (ptr);
}

int main(void)
{
    printf("%s", ft_var_strjoin(3, "moad", "bj", "test"));
    return (0);
}