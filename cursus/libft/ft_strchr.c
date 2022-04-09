/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:12:46 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/08 19:31:10 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str || c == '\0')
		if (*(str++) == c)
			return (--str);
	return (NULL);
}

// int	main(void)
// {
// 	void *s = "asaztuff";
// 	int c = 's';
// 	printf("\nft_strchr: %s \n\n", ft_strchr(s, '\0'));
// 	// printf("\n\nft_mem: %s\n", ft_memmove(dst, src, 8));
// }
