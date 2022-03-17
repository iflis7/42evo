/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:01:30 by loadjou           #+#    #+#             */
/*   Updated: 2022/02/24 12:02:01 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	remp;

	remp = nb;
	if (remp >= 0 && remp < 10)
		ft_putchar(remp + '0');
	else if (remp < 0)
	{
		if (nb <= -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			ft_putchar('-');
			ft_putnbr(remp * (-1));
		}
	}
	else
	{
		ft_putnbr(remp / 10);
		ft_putnbr(remp % 10);
	}
}
