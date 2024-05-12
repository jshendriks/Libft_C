/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 09:12:14 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/12 16:36:05 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_lstiter(t_list *lst, void (*f)(void *)):
 		This function iterates through the list lst and
		applies the given function f on the content of each 
		list element (node).
		This function has no return value.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

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
