/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:50:11 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/10 10:00:41 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	check_base(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(char *str, int count)
{
	if (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
		return (1);
	return (0);
}

int	ft_isbase(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	count;
	int	sign;
	int	res;

	count = 0;
	sign = 1;
	res = 0;
	if (check_base(base) == 0)
		return (0);
	while (ft_isspace(str, count) == 1)
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = sign * -1;
		count++;
	}
	while (ft_isbase(str[count], base) >= 0)
	{
		res = res * ft_strlen(base) + ft_isbase(str[count], base);
		count++;
	}
	return (res * sign);
}
