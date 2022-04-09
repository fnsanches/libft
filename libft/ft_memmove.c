/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:25:53 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/08 20:32:19 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memmove()

// memmove() copies n bytes from memory area src to memory area dest.
// The memory areas may overlap, src is first copied to a temporary array,
// then copied to dest.

// Return value is a pointer to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destc;
	unsigned char	*srcc;

	if (!dest && !src)
		return (NULL);
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 1;
	if (srcc < destc)
	{
		while (i <= n)
		{
			destc[n - 1] = srcc[n - 1];
			i++;
		}
	}
	else
		ft_memcpy(destc, srcc, n);
	return (dest);
}
