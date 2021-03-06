/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:49:54 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/10 10:01:08 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
int		ft_isspace(char *str, int i);
int		ft_isbase(char c, char *base);
int		ft_atoi_base(char *str, char *base);

int	len_num(int nbr, char *base_to)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr = nbr / ft_strlen(base_to);
		len++;
	}
	return (len);
}

int	check_base(char *base)
{
	int	count;
	int	index;

	count = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[count])
	{
		index = count + 1;
		while (base[index])
		{
			if (base[count] == base[index])
				return (0);
			index++;
		}
		if (ft_isspace(base, count) == 1 || base[count] == '+')
			return (0);
		if (base[count] == '-' || !(base[count] >= 32 && base[count] <= 126))
			return (0);
		count++;
	}
	return (1);
}

void	ft_putnbr_base(int len, int nbr, char *str, char *base)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str[0] = ('-');
	}
	if (nbr >= ft_strlen(base))
		ft_putnbr_base(len - 1, nbr / ft_strlen(base), str, base);
	str[len] = base[nbr % ft_strlen(base)];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		len;
	char	*str;

	nb = 0;
	str = NULL;
	if ((check_base(base_from) == 0) || check_base(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	len = len_num(nb, base_to);
	if (nb < 0)
		len++;
	str = malloc(sizeof(char) * len + 1);
	ft_putnbr_base(len - 1, nb, str, base_to);
	str[len] = '\0';
	return (str);
}
