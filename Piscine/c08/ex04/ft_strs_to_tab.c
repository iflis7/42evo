/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:29:18 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/10 21:02:47 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (tab == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stck;

	stck = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac
				+ 1)) 
				if (stck == NULL) return (NULL);
	i = 0;
	while (i < ac)
	{
		stck[i].size = ft_strlen(av[i]);
		stck[i].str = av[i];
		stck[i].copy = ft_strdup(av[i]);
		i++;
	}
	stck[i].str = 0;
	return (stck);
}
