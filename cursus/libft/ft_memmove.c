/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bylkode <bylkode@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:30:47 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/06 22:15:23 by bylkode          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dest = dst;
	src1 = (unsigned char *)src;
	while (src1[i] && len--)
	{
		dest[i] = src1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	
}