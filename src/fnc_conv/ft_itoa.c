/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhendrik <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 09:50:04 by jhendrik      #+#    #+#                 */
/*   Updated: 2024/05/08 12:17:57 by jagna         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <limits.h>

/*This file contains the functions:
			- st_while_nblen()
			- st_nblen()
			- st_fillstr_neg()
			- st_fill_str()
			- ft_itoa()
 * st_while_nblen(unsigned int n):
		This function returns the amount of digits the input consists of
	   	if it would be displayed in base ten.
		This function can only take positive integers as input.
 * st_nblen(int n):
 		This function returns the amount of characters the number consists of, 
		if it is displayed in base ten.
 * st_fillstr_neg(int n, int n_len, char *ptr_n):
		This function fills the string pointed to by ptr_n 
		with the appropriate characters based on n.
		This function can only take negative integers for n.
 * st_fill_str(int n, int n_len, char *ptr_n):
 		This function fills the string pointed to by ptr_n
		with the appropriate characters based on n and n_len.
 * ft_itoa(int n):
		This function converts the integer n to a string.
		The memory needed is allocated using malloc.
		If the malloc fails, the function returns a NULL-pointer.
		Otherwise, the function returns a pointer to the string.
 */

static int	st_while_nblen(unsigned int n)
{
	unsigned int	i;
	int				cnt;

	i = 1;
	cnt = 0;
	while (n / i >= 1 && cnt < 10)
	{
		cnt++;
		i = i * 10;
	}
	return (cnt);
}

static int	st_nblen(int n)
{
	int	abs_n;

	if (n > 0)
		return (st_while_nblen(n));
	if (n == 0)
		return (1);
	if (n == INT_MIN)
	{
		abs_n = (-1) * (INT_MIN / 10);
		return (st_while_nblen(abs_n) + 2);
	}
	abs_n = (-1) * n;
	return (st_while_nblen(abs_n) + 1);
}

static void	st_fillstr_neg(int n, int n_len, char *ptr_n)
{
	int	cnt;
	int	abs_n;
	int	tmp;

	cnt = n_len - 1;
	ptr_n[0] = '-';
	if (n == INT_MIN)
	{
		abs_n = (-1) *(INT_MIN/10);
		tmp = INT_MIN + abs_n * 10;
		ptr_n[cnt] = (-1)*tmp +'0';
		cnt--;
	}
	else
		abs_n = (-1) * n;
	while (abs_n >= 1 && cnt >= 1)
	{
		ptr_n[cnt] = abs_n % 10 + '0';
		abs_n = abs_n / 10;
		cnt--;
	}
}

static void	st_fill_str(int n, int n_len, char *ptr_n)
{
	int	cnt;
	int	abs_n;

	cnt = n_len - 1;
	ptr_n[n_len] = '\0';
	if (n < 0)
		st_fillstr_neg(n, n_len, ptr_n);
	else
	{
		abs_n = n;
		if (abs_n == 0)
			ptr_n[0] = '0';
		else
		{
			while (abs_n >= 1 && cnt >= 0)
			{
				ptr_n[cnt] = abs_n % 10 + '0';
				abs_n = abs_n / 10;
				cnt--;
			}
		}
	}
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*ptr_n;

	n_len = st_nblen(n);
	ptr_n = (char *)malloc(n_len + 1);
	if (ptr_n == NULL)
		return (NULL);
	st_fill_str(n, n_len, ptr_n);
	return (ptr_n);
}
