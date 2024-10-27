/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:22:06 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 14:55:40 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
// 	ft_lstdelone(node3, del);
// 	ft_lstdelone(node2, del);
// 	ft_lstdelone(node1, del);
// 	ft_lstdelone(head, del);
// }