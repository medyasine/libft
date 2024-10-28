/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:16:28 by masnus            #+#    #+#             */
/*   Updated: 2024/10/28 12:09:16 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	i = 0;
	ps1 = (unsigned char *) s1;
	ps2 = (unsigned char *) s2;
	if (!ps1 && !ps2)
		return (NULL);
	while (i < n)
	{
		ps1[i] = ps2[i];
		i++;
	}
	return (s1);
}
