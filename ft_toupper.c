/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:26:00 by masnus            #+#    #+#             */
/*   Updated: 2024/10/23 21:14:03 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_toupper(char *str)
{
	int	i;

	if (str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
