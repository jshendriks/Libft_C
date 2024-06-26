/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 09:38:27 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/08 11:38:18 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

/*int ft_memcmp(const void *s1, const void *s2, size_t n):
 		This function compares n bytes of s1 and s2 byte by byte.
		It returns the difference between two bytes.
		If s1 or s2 is NULL, the function segfaults.
		If nothing is compared because n equals zero, it returns zero. 
  int ft_memcmp_n(const void *s1, const void *s2, size_t n):
 		This function compares n bytes of s1 and s2 byte by byte.
		It returns the difference between two bytes.
		If s1 or s2 is NULL, the function returns zero.
		If nothing is compared because n equals zero, it returns zero. 
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;
	size_t				cnt;

	c_s1 = (const unsigned char *) s1;
	c_s2 = (const unsigned char *) s2;
	cnt = 0;
	while (cnt < n && (*(c_s1 + cnt) == *(c_s2 + cnt)))
		cnt++;
	if (cnt == 0 && n == 0)
		return (0);
	if (cnt == n)
		return (*(c_s1 + cnt-1) - *(c_s2 + cnt-1));
	return (*(c_s1 + cnt) - *(c_s2 + cnt));
}

int	ft_memcmp_n(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c_s1;
	const unsigned char	*c_s2;
	size_t				cnt;

	if (s1 == NULL || s2 == NULL)
		return (0);
	else
	{
		c_s1 = (const unsigned char *) s1;
		c_s2 = (const unsigned char *) s2;
		cnt = 0;
		while (cnt < n && (*(c_s1 + cnt) == *(c_s2 + cnt)))
			cnt++;
		if (cnt == 0 && n == 0)
			return (0);
		if (cnt == n)
			return (*(c_s1 + cnt-1) - *(c_s2 + cnt-1));
		return (*(c_s1 + cnt) - *(c_s2 + cnt));
	}
}
