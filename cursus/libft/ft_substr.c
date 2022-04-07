/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bylkode <bylkode@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:01:39 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/06 19:59:11 by bylkode          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	x;
	// size_t	j;

	i = 0;
	x = 0;
	// j = 0;
    
	if (!*s || len < 1)
		return (NULL);
        
	while (s[i])
		i++;
        
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
           
	while (start < i && len--)
		str[x++] = s[start++];
	str[x] = '\0';
	return (str);
}

int	main(void)
{
	const char		*s;
	unsigned int	start;
	size_t			len;

	s = "Stringfy .";
	start = 5;
	len = 9;
	printf("Res: %s\n", ft_substr(s, start, len));
}
