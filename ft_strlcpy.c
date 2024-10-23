/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:28:02 by masnus            #+#    #+#             */
/*   Updated: 2024/10/23 21:00:37 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, char *src, int dstsize)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (src[i] && i <= destsize - 1)
	{
		dst[i] = src[i++];
	}
	if (dstsize != 0)
		dst[i] = "\0";
	return (src_len);
}
