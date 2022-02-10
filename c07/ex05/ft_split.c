/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:52:13 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/09 19:52:14 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_charset(char c, char *charset)
{
	int	index;

	index = 0;
	while (charset[index])
	{
		if (c == charset[index])
			return (1);
		index++;
	}
	return (0);
}

int	ft_size_w(char *str, int count, char *charset)
{
	int	index;

	index = 0;
	while (str[count])
	{
		if (ft_is_charset(str[count], charset))
			return (index);
		index++;
		count++;
	}
	return (index);
}

int	ft_count_word(char *str, char *charset)
{
	int	index;
	int	count;
	int	count_word;

	index = 0;
	count = 0;
	count_word = 0;
	while (str[count])
	{
		if (ft_is_charset(str[count], charset))
			index = 0;
		else if ((!(ft_is_charset(str[count], charset))) && index == 0)
		{
			index = 1;
			count_word++;
		}
		count++;
	}
	return (count_word);
}

char	**ft_tab(char *str, char *charset, char **tab, int i)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) && (!(ft_is_charset(str[i + 1],
						charset))) && index > 0)
		{
			count++;
			index = 0;
		}
		if (!(ft_is_charset(str[i], charset)))
		{
			if (index == 0)
				tab[count] = malloc(sizeof(char) * ft_size_w(str, i, charset)
						+ 1);
			tab[count][index] = str[i];
			tab[count][index + 1] = 0;
			index++;
		}
		i++;
	}
	tab[ft_count_word(str, charset)] = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		count;
	int		index;
	int		calc;

	count = 0;
	index = 0;
	calc = 0;
	tab = malloc(sizeof(char *) * ft_count_word(str, charset) + 1);
	tab = ft_tab(str, charset, tab, count);
	return (tab);
}
