/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 12:32:06 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/08 11:45:20 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* ft_memset(void *b, int c, size_t len):
 		This function fills the given memory, pointed to by b, 
		until len bytes with the given ASCII value c.
		If b is a NULL-pointer, 
		the function returns b without changing the contents.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i;

	if (b != NULL)
	{
		temp = b;
		i = 0;
		while (i < len)
		{
			*(temp + i) = (unsigned char) c;
			i++;
		}
	}
	return (b);
}
