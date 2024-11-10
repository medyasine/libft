/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:37:26 by masnus            #+#    #+#             */
/*   Updated: 2024/11/10 09:14:22 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((count * size) / size != count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	char *str;
// 	str = (char *)ft_calloc(10, sizeof(char));
// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[5] = 'z';
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%c\n", str[i]);
// 	}
// 	return (0);
// }