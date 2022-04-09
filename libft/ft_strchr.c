/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:38:27 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 20:38:22 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr()

// strchr() returns a pointer to the first occurrence of the character c in
// the string s.

// Return value is a pointer to matched character or NULL if not found.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
