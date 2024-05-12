/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 09:03:39 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/12 16:35:02 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstdelone(t_list *lst, void (*del)(void *)):
		This function deletes the content in the list node 
		pointed to by lst with the given delete function.
		Then it frees the list node pointed to by lst.
		This function has no return value.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
