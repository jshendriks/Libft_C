/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 15:02:47 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/12 16:43:41 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstnew():
		This function makes a new list element (node) using malloc.
		If malloc fails, the function returns NULL.
		Otherwise, the function assigns the given content to 
		the content of node and the next of node will be set to NULL.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
