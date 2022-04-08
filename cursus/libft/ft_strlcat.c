/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:13:10 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/06 12:43:57 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	i = 0;
	if (len_dest < dstsize)
		len_src = len_src + len_dest;
	else
		len_src = len_src + dstsize;
	if (dstsize)
	{
		while (src[i] && (i + len_dest) < dstsize - 1)
		{
			dst[i + len_dest] = src[i];
			i++;
		}
		dst[i + len_dest] = '\0';
	}
	return (len_src);
}
