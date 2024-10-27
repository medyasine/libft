/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:57:23 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 14:56:32 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

// void *to_upper(void *str)
// {
//     char *orig = (char *)str;
//     char *new = strdup(orig);
//     if (!new)
//         return (NULL);

//     int i = 0;
//     while (new[i])
//     {
//         new[i] = ft_toupper(new[i]);
//         i++;
//     }
//     return (new);
// }

// void	ll(void)
// {
// 	system("leaks a.out");
// }

// int main(void)
// {
//     t_list *head = ft_lstnew(ft_strdup("amine"));
//     t_list *node1 = ft_lstnew(ft_strdup("yassine"));
//     t_list *node2 = ft_lstnew(ft_strdup("moad"));
//     t_list *new;

//     head->next = node1;
//     node1->next = node2;

//     atexit(ll);
//     new = ft_lstmap(head, &to_upper, &free);
//     ft_lstclear(&head, &free);

//     t_list *temp = new;

//     while (new)
//     {
//         printf("%s\n", (char *)new->content);
//         new = new->next;
//     }

//     ft_lstclear(&temp, &free);

//     return (0);
// }