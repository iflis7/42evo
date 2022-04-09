/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 06:10:37 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/08 21:41:04 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)ft_calloc(ft_strlen(s), sizeof(s));
	if (s1 == NULL)
		return (NULL);
	while (s[i])
	{
		s1[i] = s[i];
		i++;
	}
	return (s1);
}

// char	*ft_strdup(const char *s)
// {
// 	char	*s1;

// 	s1 = (char *)ft_calloc(ft_strlen(s), sizeof(s));
// 	if (s1 == NULL)
// 		return (NULL);
// 	while (*s)
// 		*s1++ = *s++;
// 	// *(--s1) = '\0';
// 	return (s1);
// }
