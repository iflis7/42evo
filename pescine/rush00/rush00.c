/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:22:38 by hsaadi            #+#    #+#             */
/*   Updated: 2022/01/23 15:24:19 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
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

