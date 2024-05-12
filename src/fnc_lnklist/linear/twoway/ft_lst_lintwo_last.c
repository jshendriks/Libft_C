#include "libft.h"

t_lintwo_list	*ft_lst_lintwo_last(t_lintwo_list *lst)
{
	t_lintwo_list	*node;

	if (lst == NULL)
		return (lst);
	node = lst;
	while (node->next != NULL)
		node = node->next;
	return (node);
}
