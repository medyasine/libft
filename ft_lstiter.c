/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:02:41 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 14:56:12 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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
