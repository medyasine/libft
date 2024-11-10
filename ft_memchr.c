/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:46:28 by masnus            #+#    #+#             */
/*   Updated: 2024/11/09 17:45:22 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	i = 0;
	new_s = (unsigned char *)s;
	while (i < n)
	{
		if (new_s[i] == (unsigned char)c)
			return ((void *)(new_s + i));
		i++;
	}
	return (NULL);
}
