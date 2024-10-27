/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:02:41 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 11:40:28 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;

	if(!f)
		return;
	while(lst)
	{
		tmp = lst;
		f(lst->content);
		lst = tmp->next;
	}
}
void up(void *ptr)
{
	char *p;

	p = (char *)ptr;
	while(*p)
	{
		*p-=32;
		p++;
	}
}
void printf_linkedlist(t_list *lst)
{
    if (!lst)
    {
        printf("Nothing to print linked list is empty");
        return;
    }
    while (lst)
    {
        printf("%s \n",lst->content);
        lst = lst->next;
    }
}

int main(void)
{
	t_list *q;
	t_list *w;
	t_list *p;

	q = ft_lstnew(ft_strdup("yassine"));
	w = ft_lstnew(ft_strdup("amine"));
	p = ft_lstnew(ft_strdup("asnus"));


	ft_lstadd_back(&q, w);
	ft_lstadd_back(&q, p);

	printf("before :\n");
	printf_linkedlist(q);
	ft_lstiter(q, &up);
	printf("after :\n");
	printf_linkedlist(q);

}