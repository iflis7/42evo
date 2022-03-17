/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:02:14 by loadjou           #+#    #+#             */
/*   Updated: 2022/02/24 12:13:28 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_n(int tab[], int n)
{
	int	i;
	int	y;
	
	i = 0;
	y = 1;
	while (i < n-1)
	{
		if ((tab[i] >= tab[i+1]))
		{
			y = 0;
		}
		i++;
	}
	if (y == 1)
	{
		i = 0;
}

void	ft_while(int nb[], int k, int n)
{
	if (k == n - 1)
	{
		nb[k] = '0';
		while (nb[k] <= '9')
		{
			ft_n(nb, n);
			nb[k]++;
		}
	}
	else
	{
		nb[k] = '0';
		while (nb[k] <= '9')
		{
			ft_while(nb, k + 1, n);
			nb[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	nb[n];

	ft_while(nb, 0, n);
}
