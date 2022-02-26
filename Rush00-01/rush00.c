/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:12:13 by loadjou           #+#    #+#             */
/*   Updated: 2022/02/26 14:19:49 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char	c);
/*
void	printfbox(int x, int y, int a, int b)
{
	if ((b == 1 && a == x) || (b == y && a == 1))
		ft_putchar('\\');
	else if ((a == 1 && b == 1) || (b == y && a == x))
		ft_putchar('/');
	else if ((a > 1 && b > 1) && (a < x && b < y))
		ft_putchar(' ');
	else
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x <= 0 || y <= 0)
	{
		write(1, "X ou Y <= 0 erreur", 25);
		return;
	}
	b = 1;
	while (b <= y)
	{
		a = 1;
		while(a <= x)
		{
			printfbox(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
*/

void    ft_print_chars(int a, int b, int x, int y);

void    rush(int x, int y)
{
    int    a;
    int    b;

    b = 1;
    while (b <= y)
    {
        a = 1;
        while (a <= x)
        {
            ft_print_chars(a, b, x, y);
            a++;
        }
        ft_putchar('\n');
        b++;
    }
}

void    ft_print_chars(int a, int b, int x, int y)
{
    if (((a == 1 || a == x) && b == 1) || ((a == 1 || a == x) && b == y))
        ft_putchar('o');
    else if ((a == 1 || a == x) && (b > 1 && b < y))
        ft_putchar('|');
    else if ((a > 1 && a < x) && (b == 1 || b == y))
        ft_putchar('-');
    else
        ft_putchar(' ');
}

