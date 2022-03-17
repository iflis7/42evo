/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:46:38 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/15 17:35:36 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
