/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:37:55 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/17 11:39:13 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copi;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	copi = malloc((i + 1) * sizeof(char));
	if (!copi)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copi[i] = src[i];
		i++;
	}
	copi[i] = '\0';
	return (copi);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p;
	int			i;

	i = 0;
	p = malloc((ac + 1) * sizeof(t_stock_str));
	if (!p)
	{
		return (NULL);
	}
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i].str = 0;
	return (p);
}
