/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:29:41 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 18:45:01 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *o;

	i = 0;
	o = (unsigned char *)b;
	while (i < len)
	{
		o[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
