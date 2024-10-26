/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:52:10 by masnus            #+#    #+#             */
/*   Updated: 2024/10/26 09:31:02 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static size_t word_count(char *str, char c)
{
	int i;
	size_t total_word;

	i = 0;
	total_word = 0;
	while(str[i])
	{
		while(str[i] && str[i] == c)
			i++;
		if(str[i])
			total_word +=1;
		while(str[i] && str[i] != c)
			i++;
	}
	return (total_word);
}
static char	**free_strs(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
	return (NULL);
}
static char **ft_extra_split(char const *s, char c, char **strs, size_t j)
{
	int start;
	int i;

	i = 0;
	start=0;
	while(s[i])
	{
		while(s[i] && s[i] == c)
			i++;
		if(s[i])
			start = i;
		while(s[i] && s[i] != c)
			i++;
		if(i > start)
		{
			strs[j] = ft_substr(s, start, i - start - 1);
			if(!strs[j])
				return free_strs(strs);
			j++;
		}
	}
	strs[j] = NULL;
	return (strs);
}
char **ft_split(char const *s, char c)
{
	char **strs;

	strs = malloc((word_count((char *)s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	return (ft_extra_split(s, c, strs, 0));
}

