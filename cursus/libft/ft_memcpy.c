/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:11:52 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/07 20:11:46 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src1;

	dest = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (*src1 && n--)
	{
		dest[i] = src1[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char dst[50] = "stuff";
	char *src = "other stuff ";
	printf("ft_mem: %s\n", ft_memcpy(dst, src, 7));
	printf("mem   : %s\n", memcpy(dst, src, 17));
	printf("ft_mem   : %s\n", ft_memcpy(NULL, NULL, 7));
	printf("mem   : %s\n", memcpy(NULL, NULL, 17));	
}

*/