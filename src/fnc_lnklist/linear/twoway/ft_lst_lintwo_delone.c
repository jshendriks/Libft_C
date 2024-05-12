#include "libft.h"

void	ft_lst_lintwo_delone(t_lintwo_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
