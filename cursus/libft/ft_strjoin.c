/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:36:29 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/06 14:25:29 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	j = 0;
	len = 0;
	if (!*s1 && !*s2)
		return (NULL);
	while (s1[i]) //should be replaced by (strlen)
	{
		i++;
		j++;
	}
    
	while (s2[len])
		len++;
	len += i; //should be replaced by (strlen)
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (str == NULL)
		return (NULL);
        
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i++];
	}
	str[len] = '\0';
	return (str);
}

int	main(void)
{
	const char	*s;
	const char	*s1;

	s = "String .";
	s1 = "one";
	printf("Resu: %s \n", ft_strjoin(s, s1));
}
