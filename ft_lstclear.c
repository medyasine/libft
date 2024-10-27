/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masnus <masnus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:33:50 by masnus            #+#    #+#             */
/*   Updated: 2024/10/27 10:15:24 by masnus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	if(!lst || !del)
		return;
	while(*lst)
	{
		tmp = *lst;
		ft_lstdelone(*lst, del);
		*lst = tmp->next;
	}
}