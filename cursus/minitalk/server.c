#include "utils.h"

static void	signal_handler(int signal)
{
	static int	len;
	static char	c;

	len = 0;
	c = 0;
	if (signal == SIGUSR1)
		c |= (1 << len);
	len++;
	if (len == 8)
	{
		write(1, &c, 1);
		if (c == '\0')
			write(1, "\n", 1);
		len = 0;
		c = 0;
	}
}

int	main(void)
{
	int sign;

	sign = (int)getpid();
	ft_putnbr_fd(sign, 1);
	write(1, "\n", 1);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
	return (0);
}