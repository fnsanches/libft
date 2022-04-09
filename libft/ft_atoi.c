/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:10:43 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 23:32:43 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// atoi()

// atoi() converts the initial portion of the string pointed to by nptr to int.

// Return value is the converted value or 0 on error.

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (nptr[c] == ' ' || nptr[c] == '\n' || nptr[c] == '\t' || \
		nptr[c] == '\v' || nptr[c] == '\f' || nptr[c] == '\r' )
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			s = -1;
		c++;
	}
	while (nptr[c] >= '0' && nptr[c] <= '9')
	{
		res = (res * 10) + (nptr[c] - '0');
		c++;
	}
	return (res * s);
}
