/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:59:16 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 17:02:54 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;
	
	count = 0;
	index = 0;
	while (dest[count])
		count++;
	if (size < count)
	{
		while (src[index])
			index++;
		return (size + index);
	}
	while (size > 0 && count < (size - 1) && src[index])
	{
		dest[count] = src[index];
		count++;
		index++;
	}
	dest[count] = '\0';
	return (count);
}