/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:44:42 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/05 15:52:07 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strtrim()

// ft_strtrim() allocates with malloc and returns a copy of s1 with the
// characters in set removed, from the beginning or the end of the string;

// Return value is the trimmed string, or NULL if the allocation fails.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
