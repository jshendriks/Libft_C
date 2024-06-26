/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 10:01:25 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/12 16:33:46 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstclear(t_list **lst, void (*del)(void *)):
		This function iterates through the list lst and
		deletes and frees each node by calling the function 
		ft_lstdelone() with the given del function.
		When every node has been deleted and freed, 
		the pointer to lst is set to NULL.
		This function has no return value. 
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_cur;
	t_list	*temp_prv;

	if (lst != NULL && del != NULL)
	{
		temp_cur = *lst;
		temp_prv = NULL;
		while (temp_cur != NULL)
		{
			temp_prv = temp_cur;
			temp_cur = temp_cur->next;
			ft_lstdelone(temp_prv, del);
		}
		*lst = NULL;
	}
}
