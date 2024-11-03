/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:18:05 by masnus            #+#    #+#             */
/*   Updated: 2024/11/03 12:11:07 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	has_char(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (has_char(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (has_char(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	ptr = (char *)malloc(size + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, size + 1);
	return (ptr);
}
