/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:02:14 by masnus            #+#    #+#             */
/*   Updated: 2024/10/26 15:40:13 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int num_len(int n)
{
    int len;

    len = 0;
    if (n <= 0)
        len++;
    while (n)
	{
		len++;
		n /= 10;
	}
    return (len);
}

char *ft_itoa(int n)
{
    size_t n_len;
    char *ptr;
    long num;

    num = n;
    n_len = num_len(n);
    ptr = malloc(n_len + 1);
    if (!ptr)
        return (NULL);
    ptr[n_len] = '\0';
    if (num < 0)
    {
        ptr[0] = '-';
        num *= -1;
    }
    if (num == 0)
        ptr[0] = '0';
    while (num > 0)
    {
        ptr[--n_len] = num % 10 + '0';
        num /= 10;
    }
    return (ptr);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
}