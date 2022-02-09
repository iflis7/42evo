/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:44:04 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/08 16:44:05 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		count;

	len = 0;
	count = 0;
	while (src[len])
		len++;
	ptr = malloc(sizeof(src) * (len + 1));
	if (ptr == NULL)
		return (0);
	while (src[count])
	{
		ptr[count] = src[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
