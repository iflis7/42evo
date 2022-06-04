/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:21:50 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/01 13:10:42 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char *str, char c)
{
	int	i;
	int	flag;
	int	w_count;

	i = 0;
	flag = 0;
	w_count = 0;
	while (str[i])
	{
		if (str[i] == c && flag == 1)
			flag = 0;
		else if ((str[i] != c) && flag == 0)
		{
			flag = 1;
			w_count++;
		}
		i++;
	}
	return (w_count);
}

static char	*spliter(char *s, char c, int *start)
{
	char	*str;
	int		i;
	int		j;

	j = *start;
	i = 0;
	while (s[j] == c)
		j++;
	while (s[j] && s[j] != c)
	{
		j++;
		i++;
	}
	str = ft_substr(s, j - i, i);
	*start = j;
	return (str);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = w_count(s, c);
	tab = ft_calloc(sizeof(char *), w_count(s, c) + 1);
	if (!tab)
		return (NULL);
	j = 0;
	while (i < w_count(s, c))
	{
		tab[i] = spliter(s, c, &j);
		i++;
	}
	return (tab);
}
