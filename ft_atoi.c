/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:05:49 by masnus            #+#    #+#             */
/*   Updated: 2024/10/26 11:29:53 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    unsigned long long result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-')
    {
        sign *= -1; 
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(ft_isdigit(str[i]))
    {
        result *= 10;
        result += str[i] - '0';
        if (result > 9223372036854775807 && sign==1)
            return -1;
        if (result > 9223372036854775807 && sign==-1)
            return 0;
        i++;
    }
    return (result * sign);
}