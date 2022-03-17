/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:22:57 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/17 16:56:05 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	acrescimo(int num)
{
	char	ca;
	char	cb;

	ca = 48;
	cb = 48;
	if (num <= 9)
	{
		cb = 48 + num;
	}
	else
	{
		ca = num / 10;
		cb = (num - (ca * 10) + 48);
		ca = ca + 48;
	}
	write(1, &ca, 1);
	write(1, &cb, 1);
}

void	escrever(int a)
{
	if ((a + 1) < 99)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	while1(int a, int b)
{
	while (b > a && a < 99)
	{
		acrescimo(a);
		write(1, " ", 1);
		acrescimo(b);
		escrever(a);
		if (b == 99)
		{
			a++;
			b = a + 1;
		}
		else
			b++;
	}
}

void	ft_print_comb2(void)
{
	while1(0, 1);
}
