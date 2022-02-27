/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:29:00 by loadjou           #+#    #+#             */
/*   Updated: 2022/02/27 16:33:52 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	printfbox(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (b == y && a == x && a != 1 && b != 1))
		ft_putchar('A');
	else if ((b == 1 && a == x) || (b == y && a == 1))
		ft_putchar('C');
	else if ((a > 1 && b > 1) && (a < x && b < y))
		ft_putchar(' ');
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			printfbox(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
