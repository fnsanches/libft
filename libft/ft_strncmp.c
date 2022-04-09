/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:20:46 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 21:27:34 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strncmp()

// strncmp() compares part of two strings.

// Return value is an integer, depending on the comparison between s1 and s2.

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 && *s2) != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char *)s1 - (unsigned char *)s2);
}
