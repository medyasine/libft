/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:28:02 by masnus            #+#    #+#             */
/*   Updated: 2024/11/09 17:52:43 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (src_len);
}
// int main()
// {
// 	char dest1[100];
// 	char dest2[100];
// 	ft_strlcpy(dest1, "lorem ipsum dolor sit amet", 0);
// 	strlcpy(dest2, "lorem ipsum dolor sit amet", 0);
// 	printf("my strcpy ==> %s\n", dest1);
// 	printf("original strcpy ==> %s", dest2);
// }