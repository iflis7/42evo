#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	*len += write(1, &c, 1);
}

void	ft_putstr(char *str, int *len)
{
	if (!str)
		*len += write(1, "(null)", 6);
	else
		while (*str)
			*len += write(1, str++, 1);
}

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
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, len);
	*len += write(1, &"0123456789"[nb % 10], 1);
}

void	ft_putuns(unsigned int nb, char flag, int *len)
{
	unsigned int	base;

	base = 10;
	if (flag == 'x' || flag == 'X')
		base = 16;
	if (nb >= base)
		ft_putuns(nb / base, flag, len);
	if (flag == 'x')
		*len += write(1, &"0123456789abcdef"[nb % base], 1);
	else if (flag == 'X')
		*len += write(1, &"0123456789ABCDEF"[nb % base], 1);
	else
		*len += write(1, &"0123456789"[nb % base], 1);
}
