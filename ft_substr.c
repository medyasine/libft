/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:55:22 by masnus            #+#    #+#             */
/*   Updated: 2024/11/03 19:07:33 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char  *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	len_src;

	if (!s)
		return (NULL);
	len_src = ft_strlen(s);
	if (start >= len_src)
		return (ft_strdup(""));
	if (len > len_src - start)
		len = len_src - start;
	sub_string = malloc(len + 1);
	if (!sub_string)
		return (NULL);
	ft_strlcpy(sub_string, &s[start], len + 1);
	return (sub_string);
}
