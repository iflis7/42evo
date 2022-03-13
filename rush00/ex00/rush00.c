/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajacque <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:39:51 by rajacque          #+#    #+#             */
/*   Updated: 2022/02/27 16:36:15 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_printbox(int x, int y, int a, int b)
{
	if ((b == 1) && (a == 1 || a == x))
		ft_putchar('o');
	else if ((a > 1 && a < x) && (b == 1 || b == y))
		ft_putchar('-');
	else if ((b > 1 && b < y) && (a == 1 | a == x))
		ft_putchar('|');
	else if ((b == y) && (a == 1 || a == x))
		ft_putchar('o');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x < 1 || y < 1)
	{
		return ;
		write(1, "Erreur! Votre X ou votre Y est < 1.\n", 50);
	}
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			ft_printbox(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
