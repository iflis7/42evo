#include "ft_printf.h"

void	ft_formater(char flag, va_list args, int *len)
{
	if (flag == 'c')
		ft_putchar((char)va_arg(args, void *), len);
	else if (flag == 's')
		ft_putstr((char *)va_arg(args, void *), len);
	else if (flag == 'p')
		write(1, "stuff", 5); // fixe this shit man!!!
	else if (flag == 'd' || flag == 'i')
		ft_putnbr((int)va_arg(args, void *), len);
	else if (flag == 'u')
		ft_putuns((unsigned int)va_arg(args, void *), flag, len);
	else if (flag == 'x' || flag == 'X')
		ft_putuns((unsigned int)va_arg(args, void *), flag, len);
	else if (flag == '%')
		ft_putchar(flag, len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!*fmt)
		return (-1);
	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
			ft_formater(fmt[++i], args, &len);
		else
			len += write(1, fmt + i, 1);
		++i;
	}
	va_end(args);
	return (len);
}
