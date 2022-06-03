/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:14:46 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/01 13:10:09 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)s;
	if (c == '\0')
		return (&str[len]);
	while (len--)
		if (str[len] == (char)c)
			return (&str[len]);
	return (NULL);
}
