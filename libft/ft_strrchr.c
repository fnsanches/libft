/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:51:48 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 20:43:20 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strrchr()

// strrchr() returns a pointer to the last occurrence of the character c in
// the string s.

// Return value is a pointer to matched character or NULL if not found.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
