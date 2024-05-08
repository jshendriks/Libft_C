/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:24:00 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/08 11:41:54 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

/* ft_memcpy(void *dst, const void *src, size_t n):
 		This function copies n bytes of the content in 
		the container pointed to by src, 
		in to the container pointed to by dst.
		This is done byte by byte, 
		by first casting src and dst to (char *)-datastructure.
		If src or dst is a NULL-pointer the function returns NULL.
		Otherwise, the function returns the void pointer dst.
		If n is bigger than the size of the container pointed to by dst or src,
		this function has undefined behavior.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst_cpy;
	char	*src_cpy;

	i = 0;
	dst_cpy = (char *) dst;
	src_cpy = (char *) src;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		*(dst_cpy + i) = *(src_cpy + i);
		i++;
	}
	return (dst);
}
