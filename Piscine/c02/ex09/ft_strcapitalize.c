/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:30:16 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 16:36:58 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z'))
			str[counter] += 32;
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	ft_strlowcase(str);
	while (str[counter] != '\0')
	{
		if (!(str[counter - 1] >= 'a' && str[counter - 1] <= 'z'))
			if (!(str[counter - 1] >= 'A' && str[counter - 1] <= 'Z'))
				if (!(str[counter - 1] >= '0' && str[counter - 1] <= '9'))
					if (str[counter] >= 'a' && str[counter] <= 'z')
						str[counter] -= 32;
		counter++;
	}
	return (str);
}
