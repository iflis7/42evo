/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:14:38 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/06 12:43:57 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	// char	*hay;
	// hay = (char *)haystack;
	i = 0;
	if (needle[i] == '\0' || needle == NULL)
		return (haystack);
	while (haystack[i] && len--)
	{
		j = 0;
		while (haystack[i + j] == needle[i] && (i + j < len))
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char		*hay;
	const char	*nee;

	hay = "Looking for something ";
	nee = "som";
	printf("Show : %s", ft_strnstr(hay, nee, 5));
}
*/
