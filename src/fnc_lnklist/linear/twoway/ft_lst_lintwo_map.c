#include "libft.h"

static t_lintwo_list	*st_extra_lstclear(t_lintwo_list **lst, void (*del)(void *))
{
	ft_lst_lintwo_clear(lst, del);
	return (0);
}

static t_lintwo_list	*st_nextra_lstclear(t_lintwo_list **lst, void (*del)(void *), void *cntt)
{
	del(cntt);
	ft_lst_lintwo_clear(lst, del);
	return (0);
}

t_lintwo_list	*ft_lst_lintwo_map(t_lintwo_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_lintwo_list	*head_new;
	t_lintwo_list	*node;
	t_lintwo_list	*temp;
	void			*cntt;

	if (lst == NULL)
		return (0);
	temp = lst;
	head_new = NULL;
	while (temp != NULL)
	{
		cntt = f(temp->content);
		if (cntt == NULL)
			return (st_extra_lstclear(&head_new, del));
		node = ft_lstnew(cntt);
		if (node == NULL)
			return (st_nextra_lstclear(&head_new, del, cntt));
		ft_lst_lintwo_addback(&head_new, node);
		temp = temp->next;
	}
	return (head_new);
}
