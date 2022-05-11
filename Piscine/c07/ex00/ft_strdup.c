/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bylkode <bylkode@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:44:04 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/16 10:01:25 by bylkode          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	int	i;

	i = 0;
	while (src[i])
		i++;
	tab = (char *)malloc((i * sizeof(char)) + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int	main(void)
{
	char source[] = "Copy stuff";
	char *target = ft_strdup(source);

	printf("%s\n", target);
	return (0);
}