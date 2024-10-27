/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:30:05 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 10:30:18 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;

	if(!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
		
	return (i);
}


int main()
{
	t_list *s = NULL;
	t_list *t;
	t_list *q;
	t_list *r;
	s = ft_lstnew(ft_strdup("yassine"));
	t = ft_lstnew(ft_strdup("yassine"));
	q = ft_lstnew(ft_strdup("yassine"));
	r = ft_lstnew(ft_strdup("yassine"));

	ft_lstadd_back(&s, t);
	ft_lstadd_back(&s, q);
	ft_lstadd_back(&s, r);
	printf("before clear : %d\n", ft_lstsize(s));
	ft_lstclear(&s, free);
	printf("after clear : %d", ft_lstsize(s));

		
	// printf("%d", ft_lstsize(s));
}