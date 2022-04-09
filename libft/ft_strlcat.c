/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:50:45 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 19:32:26 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat()

// strlcat() appends string src to the end of dst.

// Return value is the length of dst + src.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	index;

	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (dstsize <= srclen)
		return (dstsize + srclen);
	index = 0;
	while (src[index] != '\0' && dstsize > (dstlen + 1))
	{
		dst[dstlen] = src[index];
		index++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (dstlen + ft_strlen((char *)(&src[index])));
}
