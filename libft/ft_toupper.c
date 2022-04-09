/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanches <fsanches@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:33:22 by fsanches          #+#    #+#             */
/*   Updated: 2022/04/04 21:19:54 by fsanches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// toupper()

// toupper() convert lowercase letter to uppercase.

// Return value is the converted letter or c if conversion was not possible.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
