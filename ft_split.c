/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:52:10 by masnus            #+#    #+#             */
/*   Updated: 2024/11/09 17:49:20 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == sep)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	**free_lst(char **lst)
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

static size_t	word_len_by_sep(const char *s1, char sep)
{
	size_t	len;

	len = 0;
	while (*s1 && *s1 != sep)
	{
		len++;
		s1++;
	}
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**lst;
	size_t	len_word;
	int		lst_index;

	if (!s)
		return (NULL);
	lst = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!lst)
		return (NULL);
	lst_index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len_word = word_len_by_sep(s, c);
			lst[lst_index] = ft_substr(s, 0, len_word);
			if (!lst[lst_index++])
				return (free_lst(lst));
			s += len_word;
		}
	}
	lst[lst_index] = NULL;
	return (lst);
}

// int	main(void)
// {
// 	char	*string;
// 	char	**s;
// 	string = "      split       this for   me  !       ";
// 	s = ft_split(string, ' ');
// 	if (s == NULL)
// 	{
// 		printf("NULL\n");
// 	}
// 	else
// 	{
// 		for (size_t i = 0; s[i] != NULL; i++)
// 		{
// 			printf("-%s\n", s[i]);
// 		}
// 	}
// 	return (0);
// }