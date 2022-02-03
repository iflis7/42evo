/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:30:16 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 18:52:06 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 65 && str[counter] <= 90))
			str[counter] += 32;
		counter++;
	}
	return (str);
}

char *ft_strcapitalize(char *str)
{
	int counter;

	counter = 0;
	ft_strlowcase(str);
	while (str[counter] != '\0')
	{
		if (!(str[counter - 1] >= 97 && str[counter - 1] <= 122))
			if (!(str[counter - 1] >= 65 && str[counter - 1] <= 90))
				if (!(str[counter - 1] >= 48 && str[counter - 1] <= 57))
					if (str[counter] >= 97 && str[counter] <= 122)
						str[counter] -= 32;
		counter++;
	}
	return (str);
}
