/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:06:33 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/08 11:27:27 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/* void *ft_calloc(size_t cnt, size_t size):
 			This function allocates memory of size * cnt using malloc,
			and fills the allocated memory with NULL.
			If malloc fails, or the size * cnt exceeds 
			the maximum value of size_t,
			then the function returns a NULL-pointer.
 */

void	*ft_calloc(size_t cnt, size_t size)
{
	void	*ptr;
	char	*ptr_cp;
	size_t	i;
	size_t	len;

	if (cnt == 0 || size == 0)
		return (NULL);
	else if ((cnt * size)/size == cnt)
	{
		len = cnt * size;
		ptr = malloc(len);
		if (ptr != NULL)
		{
			ptr_cp = (char *)ptr;
			i = 0;
			while (i < len)
			{
				*(ptr_cp + i) = 0;
				i++;
			}
			return (ptr);
		}
		return (NULL);
	}
	return (NULL);
}
