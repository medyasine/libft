/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:07:37 by masnus            #+#    #+#             */
/*   Updated: 2024/10/22 19:25:12 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strlcat(char *dst, const char *src, int dstsize)
{
	int	src_len;
	int	dst_len;
	int	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len == dstsize)
		return (dst_len + src_len);
	while (src[i] && i < dstsize - dst_len - 1)
		dst[dst_len + i] = src[i++];
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
