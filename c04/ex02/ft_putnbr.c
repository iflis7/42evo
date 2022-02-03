#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_nbrlen(int nbr)
{
	int length;

	length = 1;
	while (nbr / 10 != 0)
	{
		nbr /=  10;
		length *= 10;
	}
	return (length);
}

void	ft_putnbr(int nb)
{
	int length;

	length = ft_nbrlen(nb);
	if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{	
			ft_putchar('-');
			nb = nb * -1;
			ft_putnbr(nb);
		}
	}
	else
	{	
		while (length != 0)
		{
			ft_putchar(nb / length + 48);
			nb %= length;
			length /= 10; 
		}
	}
}
