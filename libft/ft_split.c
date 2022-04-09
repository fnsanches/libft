/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:39:33 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 21:18:58 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_split()

// ft_split() allocates and returns an array of strings obtained by spliting s
// using the character c as a delimiter. The array must end with a NULL pointer.

// Return value is the array of new strings resulting from the split. NULL if
// the allocating fails.

#include "libft.h"

static size_t	count(const char *s, char c)
{
	size_t	i;
	size_t	prev;
	size_t	next;
	size_t	size;
	size_t	count;

	i = 0;
	prev = 0;
	next = 0;
	count = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			count++;
		if (s[i] != '\0')
			break ;
		prev = next;
		i++;
	}
	return (count);
}

static size_t	addpart(char **result, const char *prev, size_t size, char c)
{
	if (*prev == c)
	{
		prev++;
		size--;
	}
	*result = (char *)malloc((size + 1) * sizeof(char));
	ft_strlcpy(*result, prev, size + 1);
	return (1);
}

static void	createsplit(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	prev;
	size_t	next;

	i = 0;
	j = 0;
	prev = i;
	next = i;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			j = addpart(&result[j], &s[prev], size, c);
		if (s[i] == '\0')
			break ;
		prev = next;
		i++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	createsplit(result, s, c);
	return (result);
}
