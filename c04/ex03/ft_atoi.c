/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:28:54 by hsaadi            #+#    #+#             */
/*   Updated: 2022/01/27 18:30:45 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(char *str)
{
	int result;
	int counter;
	int minus;

	minus = 0;
	result = 0;
	counter = 0;
	while (str[counter] == ' ' || str[counter] == '-' || str[counter] == '+' || str[counter] == '\f' || str[counter] == '\n' || str[counter] == '\r' || str[counter] == '\t' || str[counter] == '\v')
	{
		if (str[counter] == '-')
		{
			minus++;
		}
		counter++;
	}
	if (minus % 2 == 0)
		minus = 1;
	else
	{
		minus = -1;
	}
	while (str[counter] != '\0')
	{
		if (!(str[counter] - '0' >= 0 && str[counter] - '0' <= 9))
		{
			return (result * minus);
		}
		result = (str[counter] - '0') + (result * 10);
		counter++;
	}
	return (result * minus);
}

int main()
{
	char str[] = " ---+--+1234a";

	printf("%d", ft_atoi(str));
}
