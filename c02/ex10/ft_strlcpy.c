/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:34:40 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 18:56:49 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	index;

	index = 0;
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (src[index] && (size - 1) > 0)
	{
		dest[index] = src[index];
		index++;
		size--;
	}
	dest[src_size] = '\0';
	return (src_size);
}
