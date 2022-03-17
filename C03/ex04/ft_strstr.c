/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:58:03 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/03 18:48:06 by loadjou          ###   ########.fr       */
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
				return (str + count);
			index++;
		}
		count++;
	}
	return (0);
}
