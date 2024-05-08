/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 11:22:13 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/08 11:51:07 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

/*This file contains the functions:
			- st_rec_atoi(const char *, int, int)
			- ft_atoi(const char *)
 *st_rec_atoi(const char *str, int nb, int sgn):
 		Recursively converts the string pointed to by str to an int, 
 		which is stored in nb. 
 		This function returns an int.
		A proper string:
			-Space characters are allowed at the beginning of the string
			-One +/- sign is allowed before the numbers in the string
			-The string should only contain the above described rules and digits.
		If a string is given which does not obey the rules for a proper string,
		this function stops when the rules are broken 
		and returns the integer nb found until then.
 *ft_atoi(const char *str):
 		First checks whether str is a NULL-pointer or not. 
 		If str is not a NULL-pointer, 
		then the function st_rec_atoi() is called.
		This function returns an int.
 */

static int	st_rec_atoi(const char *str, int nb, int sgn)
{
	if (*str == '\0')
		return (nb);
	else if (ft_isspace(*str) == 1)
	{
		if (sgn != 0 || nb != 0)
			return (nb);
		return (st_rec_atoi(str + 1, nb, sgn));
	}
	else if (*str == '-' || *str == '+')
	{
		if (*str == '-' && sgn == 0)
			return (st_rec_atoi(str + 1, nb, -1));
		else if (*str == '+' && sgn == 0)
			return (st_rec_atoi(str + 1, nb, 1));
		else
			return (nb);
	}
	else if (*str >= '0' && *str <= '9')
	{
		if (sgn == 1 || sgn == 0)
			return (st_rec_atoi(str + 1, nb * 10 + (*str - '0'), 1));
		return (st_rec_atoi(str + 1, nb * 10 - (*str - '0'), sgn));
	}
	else
		return (nb);
}

int	ft_atoi(const char *str)
{
	int	nb;

	if (str == NULL)
		return (0);
	nb = st_rec_atoi(str, 0, 0);
	return (nb);
}
