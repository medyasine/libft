/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:02:41 by masnus            #+#    #+#             */
/*   Updated: 2024/11/09 17:37:21 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!f || !lst)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// void	up(void *ptr)
// {
// 	char	*p;
// 	p = (char *)ptr;
// 	while (*p)
// 	{
// 		*p -= 32;
// 		p++;
// 	}
// }
// void	printf_linkedlist(t_list *lst)
// {
// 	if (!lst)
// 	{
// 		printf("Nothing to print linked list is empty");
// 		return ;
// 	}
// 	while (lst)
// 	{
// 		printf("%s \n", lst->content);
// 		lst = lst->next;
// 	}
// }
