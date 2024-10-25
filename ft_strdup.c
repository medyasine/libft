/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:47:49 by masnus            #+#    #+#             */
/*   Updated: 2024/10/24 21:58:48 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(const char *s1)
{
    int i;
    size_t s1len;
    char *ptr;

    i = 0;
    s1len = ft_strlen(s1);
    ptr = malloc(s1len + 1);
    while(s1[i])
        ptr[i] = s1[i++];
    ptr[i] = '\0';
    return ptr
}