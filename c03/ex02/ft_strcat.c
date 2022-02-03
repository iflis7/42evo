/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:02:04 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 16:55:09 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size;

	size = 0;
	while (dest[size])
		size++;
	while (*src)
	{
		dest[size] = *src;
		src++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
