/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:07:37 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 21:34:29 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = ft_strlen(dst);
	if (size <= dstlen)
		return (size + srclen);
	i = 0;
	while (src[i] && i < size - dstlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
	

// int main()
// {
// 	char *dest1 = malloc(16);  // Allocate 15 + 1 for null terminator
// 	char *dest2 = malloc(16);  // Allocate 15 + 1 for null terminator
// 	memset(dest2, 'r', 15);
// 	strlcat(dest2, "lorem ipsum dolor sit amet", 5);
// 	memset(dest1, 'r', 15);
// 	ft_strlcat(dest1, "lorem ipsum dolor sit amet", 5);
	
// 	printf("my strcat ==> |%s|\n", dest1);
// 	printf("original strcat ==> |%s|", dest2);
// }