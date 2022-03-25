/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:28:54 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/07 16:55:08 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	count;
	int	minus;

	minus = 1;
	result = 0;
	count = 0;
	while ((str[count] == 32) || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			minus = minus * -1;
		count++;
	}
	while (str[count] - '0' >= 0 && str[count] - '0' <= 9)
	{
		result = (str[count] - '0') + (result * 10);
		count++;
	}
	return (result * minus);
}
