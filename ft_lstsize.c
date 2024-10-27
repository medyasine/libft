/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:30:05 by masnus            #+#    #+#             */
/*   Updated: 2024/10/26 18:50:33 by masnus           ###   ########.fr       */
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
	t_list *s;
	t_list *t;
	t_list *q;
	t_list *r;
	s = malloc(sizeof(t_list));
	t = malloc(sizeof(t_list));
	q = malloc(sizeof(t_list));
	r = malloc(sizeof(t_list));

	s->next = t;
	t->next = q;
	q->next = r;
	r->next = NULL;
	
	printf("%d", ft_lstsize(s));
}