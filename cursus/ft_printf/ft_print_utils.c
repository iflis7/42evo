/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 07:49:40 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/08 08:39:41 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print the char and increment the value of prt for every chat*/

void	ft_putchar(char c, int *len)
{
	*len += write(1, &c, 1);
}

/* Print the string and increment the value of prt for every chat*/

void	ft_putstr(char *str, int *len)
{
	if (!str)
		*len += write(1, "(null)", 6);
	else
		while (*str)
			*len += write(1, str++, 1);
}

void	ft_putptr(unsigned long int nb, int *len)
{
	if (nb >= 16)
		ft_putptr(nb / 16, len);
	*len += write(1, &"0123456789abcdef"[nb % 16], 1);
}

/* Print the integer and the digit (decimal) 
	and increment the value of prt for every chat*/

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		*len += write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, len);
	*len += write(1, &"0123456789"[nb % 10], 1);
}

/* Print unsigned ints,	lower hexadecimals and 
	upper hexadecimals depending on the flag provided 
	and the base and increment the value of prt for every chat*/
void	ft_putuns(unsigned int nb, char flag, int *len)
{
	unsigned int	base;

	base = 16;
	if (flag == 'u')
		base = 10;
	if (nb >= base)
		ft_putuns((nb / base), flag, len);
	if (flag == 'x')
		*len += write(1, &"0123456789abcdef"[nb % base], 1);
	else if (flag == 'X')
		*len += write(1, &"0123456789ABCDEF"[nb % base], 1);
	else
		*len += write(1, &"0123456789"[nb % base], 1);
}
