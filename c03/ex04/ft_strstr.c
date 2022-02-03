/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:51:14 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 17:01:21 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int index;

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

int main()
{
	char str[50] = "key";
	char to_find[] = "ke";
	ft_strstr(str, to_find);

	//printf("%s\n", ft_strstr(str, to_find));
	return 0;
}