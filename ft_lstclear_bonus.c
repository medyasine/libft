/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:33:50 by masnus            #+#    #+#             */
/*   Updated: 2024/11/08 14:32:24 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = tmp->next;
		ft_lstdelone(tmp, del);
	}
}

// void del(void *ptr)
// {
// 	free(ptr);
// }
// void ll()
// {
// 	system("leaks a.out");
// }
// int main()
// {
// 	t_list *head;
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	head = ft_lstnew(ft_strdup("yassine"));
// 	node1 = ft_lstnew(ft_strdup("amine"));
// 	node2 = ft_lstnew(ft_strdup("mouad"));
// 	node3 = ft_lstnew(ft_strdup("asnus"));
// 	atexit(ll);
// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstclear(&head, del);
// }