/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:55:22 by masnus            #+#    #+#             */
/*   Updated: 2024/10/26 18:18:58 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subString;
	size_t len_src;

	if (!s)
		return (NULL);
	len_src = ft_strlen(s);
	if (start >= len_src)
		return (ft_strdup(""));
	if (len > len_src - start)
		len = len_src - start;
	subString = malloc(len + 1);
	if (!subString)
		return (NULL);
	ft_strlcpy(subString, (char *)&s[start], len + 1);
	return (subString);
}