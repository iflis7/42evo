/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:11:30 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/08 19:52:18 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s10;
	unsigned char	*s20;

	s10 = (unsigned char *)s1;
	s20 = (unsigned char *)s2;
	while (n--)
		if (*s10++ != *s20++)
			return (*(--s10) - *(--s20));
	return (0);
}

/*

int	main(void)
{
	const void	*s1;
	const void	*s2;

	s1 = "aaaasaztuff";
	s2 = "a";
	printf("\ft_memcmp: %i \n\n", ft_memcmp(s1, s2, 5));
	// printf("\n\nft_mem: %s\n", ft_memmove(dst, src, 8));
}

*/
