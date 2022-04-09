/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:25:59 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 21:18:20 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_substr()

// ft_substr() allocates with malloc and returns a substring from string s, the
// substring begins at index start and is of maximum length 'len'

// Return value is the substring created, and NULL if allocation fails.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	k;

	substring = (char *)malloc(len + 1);
	if (!s || !substring)
		return (NULL);
	i = start;
	k = 0;
	while (i < (size_t)ft_strlen(s) && k < len)
		substring[k++] = s[i++];
	substring[k] = '\0';
	return (substring);
}
