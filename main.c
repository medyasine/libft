#include "libft.h"

int main()
{
	t_list *head = ft_lstnew(ft_strdup("yassine"));
	t_list *node1 = ft_lstnew(ft_strdup("amine"));
	t_list *node2 = ft_lstnew(ft_strdup("moad"));
	t_list *node3 = ft_lstnew(ft_strdup("mohamed"));

	ft_lstadd_back(head, node1);
	ft_lstadd_back(head, node2);
	ft_lstadd_back(head, node3);

	for (t_list *tmp = head; tmp; tmp = tmp->next)
	{
		printf("%s\n", (char *)tmp->content);
	}
}