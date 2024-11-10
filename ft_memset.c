/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:29:41 by masnus            #+#    #+#             */
/*   Updated: 2024/11/09 17:47:41 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	new_c;
	unsigned char	*new_s;

	i = 0;
	new_c = c;
	new_s = b;
	while (i < len)
	{
		new_s[i] = new_c;
		i++;
	}
	return (b);
}
