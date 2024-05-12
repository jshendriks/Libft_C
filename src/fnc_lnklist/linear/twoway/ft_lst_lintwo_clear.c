#include "libft.h"

void	ft_lst_lintwo_clear(t_lintwo_list **lst, void (*del)(void *))
{
	t_lintwo_list	*temp_cur;
	t_lintwo_list	*temp_prv;

	if (lst != NULL && del != NULL)
	{
		temp_cur = *lst;
		temp_prv = NULL;
		while (temp_cur != NULL)
		{
			temp_prv = temp_cur;
			temp_cur = temp_cur->next;
			ft_lst_lintwo_delone(temp_prv, del);
		}
		*lst = NULL;
	}
}
