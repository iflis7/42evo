/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:11:52 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/07 19:39:41 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src1;

	if (!dst && !src)
		return (NULL);
	dest = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n--)
		*dest++ = *src1++;
	return (dst);
}
