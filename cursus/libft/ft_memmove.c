/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:30:47 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/07 21:27:56 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	const char	*srcs;
	
	dest = (char *)dst;
	srcs = (char *)src;
	
	if (!dst && !src)
		return (NULL);
	// printf("first srcs: %s\n", srcs);
	// printf("first dest: %s\n", dest);
	// printf("first i: %i\n", srcs < dest);
	
	if (ft_strlen(srcs) < strlen(dst))
		return (dest);
		// if ()
	while(len--)
	{
		dest[len] = srcs[len];
	}			
	// else
	// {
	// 	while(len--)
	// 		*dest++ = *srcs++;
	// }
	return ((void *)dest);
}

int	main(void)
{
	void *dst = "stuff";
	const void *src = "stu";
	printf("\n\nft_mem: %s\n", ft_memmove(dst, src, 8));
	// printf("mem   : %s\n", memmove(dst, src, 8));
	// printf("ft_mem   : %s\n", ft_memcpy(NULL, NULL, 7));
	// printf("mem   : %s\n", memcpy(NULL, NULL, 17));	
}
