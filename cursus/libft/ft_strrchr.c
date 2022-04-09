/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:14:46 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/08 19:50:56 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)s;
	if (c == '\0')
		return (&ptr[len]);
	while (len--)
		if (ptr[len] == c)
			return (&ptr[len]);
	return (NULL);
}
