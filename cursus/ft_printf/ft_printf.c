#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *fmt, ...)
{
	va_list			args;
	unsigned int	u;

	int j, d, i;
	char c, *s;
	j = 0;
	if (!*fmt)
		write(1, "(null)", 6);
	va_start(args, fmt);
	while (fmt[j])
	{
		// if (*fmt == '%')
		if (fmt[j] == '%')
		{
			// fmt++;
			j++;
			if (fmt[j] == 'c')
			{
				c = (char)va_arg(args, void *);
				ft_putchar(c);
			}
			else if (fmt[j] == 's')
			{
				s = (char *)va_arg(args, void *);
				ft_putstr(s);
			}
			else if (fmt[j] == 'p')
				printf("%p", &fmt[j]); // fixe this shit man!!!
			else if (fmt[j] == 'd')
			{
				d = (int)va_arg(args, void *);
				ft_putnbr(d);
			}
			else if (fmt[j] == 'i')
			{
				i = (int)va_arg(args, void *);
				ft_putnbr(i);
			}
			else if (fmt[j] == 'u')
			{
				u = (unsigned int)va_arg(args, void *);
				ft_putnbr(u);
			}
			else if (fmt[j] == 'x')
				printf("*** Hexa min ***");
			else if (fmt[j] == 'X')
				printf("*** Hexa maj ***");
		}
		if (fmt[j] != '%' && (fmt[j - 1]) != '%')
			write(1, &fmt[j], 1);
        if (fmt[j] == '%' && (fmt[j - 1]) == '%')
			write(1, &fmt[j], 1);
		// fmt++;
		j++;
	}
	return (0);
}

int	main(void)
{
	char c = 'h';
	char *s = " ,,, Azul ,,, ";

	ft_printf("%c ihih ** %s ** %d ** %i ** %u  %% \n", c, s, 12, 51, 54);
    ft_printf("");
}