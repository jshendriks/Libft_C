#include "libft.h"

void	ft_lst_lintwo_iter(t_lintwo_list *lst, void (*f)(void *))
{
	t_lintwo_list	*temp;

	if (f != NULL)
	{
		temp = lst;
		while (temp != NULL)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}
