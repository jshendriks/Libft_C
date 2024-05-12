#include "libft.h"

void	ft_lst_lintwo_addback(t_lintwo_list **lst, t_lintwo_list *new)
{
	t_lintwo_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lst_lintwo_last(*lst);
		last->next = new;
		new->prev = last;
	}
}
