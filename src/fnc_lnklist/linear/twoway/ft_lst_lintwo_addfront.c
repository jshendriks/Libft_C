#include "libft.h"

void	ft_lst_lintwo_addfront(t_lintwo_list **lst, t_lintwo_list *new)
{
	if (new != NULL && lst != NULL)
	{
		new->next = *lst;
		if (*lst != NULL)
			(*lst)->prev = new;
		*lst = new;
	}
}
