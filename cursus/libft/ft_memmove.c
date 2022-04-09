/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:30:47 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/08 19:14:26 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*srcs;

	dest = (char unsigned *)dst;
	srcs = (char unsigned *)src;
	if (!dst && !src)
		return (NULL);
	if (srcs < dest)
		while (len--)
			dest[len] = srcs[len];
	else
		while (len--)
			*(dest++) = *(srcs++);
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	printf("\n\nft_mem: %s\n", ft_memmove(dest, src, 8));
// }