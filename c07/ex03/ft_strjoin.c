/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:04:04 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/08 17:25:11 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;

	count = 0;
	while (dest[count])
		count++;
	while (*src)
	{
		dest[count] = *src;
		src++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	ft_strslen(char **strs, int size, char *sep)
{
	int	count;
	int	len;

	count = 0;
	len = 0;
	while (count < size)
	{
		len += ft_strlen(strs[count]);
		count++;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * ft_strslen(strs, size, sep));
	*str = '\0';
	count = 0;
	while (count < size)
	{
		ft_strcat(str, strs[count]);
		if (count < size - 1)
			ft_strcat(str, sep);
		count++;
	}
	return (str);
}
