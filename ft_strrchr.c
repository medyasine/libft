/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:38:45 by masnus            #+#    #+#             */
/*   Updated: 2024/10/23 21:53:50 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c) 
{
	int	i;

	
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i); 
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s +i); 
		i--;
	}
	return (0);
}
