/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:58:11 by hsaadi            #+#    #+#             */
/*   Updated: 2022/03/29 12:28:25 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	count;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	count = 0;
	if (len_dest < size)
		len_src = len_src + len_dest;
	else
		len_src = len_src + size;
	if (size > 0)
	{
		while (src[count] && (count + len_dest) < size - 1)
		{
			dest[count + len_dest] = src[count];
			count++;
		}
		dest[count + len_dest] = '\0';
	}
	return (len_src);
}
