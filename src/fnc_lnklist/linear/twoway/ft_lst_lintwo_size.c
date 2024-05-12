#include "libft.h"

size_t	ft_lst_lintwo_size(t_lintwo_list *lst)
{
	t_lintwo_list	*ptr;
	size_t			size;

	ptr = lst;
	size = 0;
	if (lst != NULL)
	{
		while (ptr->prev != NULL)
			ptr = ptr->prev;
	}
	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
