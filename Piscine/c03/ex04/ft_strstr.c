/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:51:14 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 09:33:16 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	index;

	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count])
	{
		index = 0;
		while (str[count + index] == to_find[index])
		{
			if (to_find[index + 1] == '\0')
				return (&str[count]);
			index++;
		}
		count++;
	}
	return (0);
}
