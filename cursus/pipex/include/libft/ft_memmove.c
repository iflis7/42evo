/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:30:47 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/07 19:39:24 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*srcs;

	if (!dst && !src)
		return (NULL);
	dest = (char unsigned *)dst;
	srcs = (char unsigned *)src;
	if (srcs < dest)
		while (len--)
			dest[len] = srcs[len];
	else
		while (len--)
			*dest++ = *srcs++;
	return (dst);
}
