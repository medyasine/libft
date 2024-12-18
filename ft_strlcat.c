/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:07:37 by masnus            #+#    #+#             */
/*   Updated: 2024/11/06 13:10:37 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	j;

	if (dsize == 0)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dsize <= dest_len)
		return (src_len + dsize);
	j = 0;
	while (src[j] && (dest_len + j) < (dsize - 1))
	{
		dst[dest_len + j] = src[j];
		j++;
	}
	dst[dest_len + j] = '\0';
	return (dest_len + src_len);
}

// int main()
// {
// 	char *dest1 = malloc(16);
// 	char *dest2 = malloc(16);
// 	memset(dest2, 'r', 15);
// 	strlcat(dest2, "lorem ipsum dolor sit amet", 5);
// 	memset(dest1, 'r', 15);
// 	ft_strlcat(dest1, "lorem ipsum dolor sit amet", 5);
// 	printf("my strcat ==> |%s|\n", dest1);
// 	printf("original strcat ==> |%s|", dest2);
// }