#include "libft.h"

t_lintwo_list	*ft_lst_lintwo_new(void *content)
{
	t_lintwo_list	*node;

	node = malloc(sizeof(t_lintwo_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->prev =  NULL;
	return (node);
}
