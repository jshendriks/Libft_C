/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 18:18:26 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/12 16:38:20 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstlast(t_list *lst):
		This function traverses the list lst, 
		and returns the pointer to the last element of the list lst.
		If lst is NULL, the function returns NULL.
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr_cur;
	t_list	*ptr_prv;

	if (lst == NULL)
		return (lst);
	ptr_cur = lst;
	ptr_prv = NULL;
	while (ptr_cur != NULL)
	{
		ptr_prv = ptr_cur;
		ptr_cur = ptr_cur->next;
	}
	return (ptr_prv);
}
