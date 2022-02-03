/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 05:19:31 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 16:55:52 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	while (*src != '\0' && nb-- > 0)
	{
		dest[size] = *src;
		src++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
