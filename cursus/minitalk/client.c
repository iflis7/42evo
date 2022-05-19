
#include "utils.c"

void	send_signal(int pid, int c)
{
	int	j;
	int	ret;

	j = 0;
	while (j < 8)
	{
		usleep(75);
		write(1, "\n", 1);
		write(1, "\n", 1);
		printf("J:: %i\n", j);
		printf("Char:: %i\n", c);
		printf("Conv:: %i\n", (1 << j));
		printf("Bit-cmp:: %i\n", c & (1 << j));
		write(1, "\n", 1);
		write(1, "\n", 1);
		if (c & (1 << j)) // A 
		{
			ret = kill(pid, SIGUSR1);
			printf("SIGUSR1:: %i\n", SIGUSR1);
		}
		else
		{
			ret = kill(pid, SIGUSR2);
			printf("SIGUSR2:: %i\n", SIGUSR2);
		}
		if (ret == -1)
		{
			ft_putstr_fd("error kill return", 2);
			exit(EXIT_FAILURE);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_putstr_fd("Missing arguments, Please GOOGLE it!", 2);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		send_signal(pid, argv[2][i]);
		i++;
	}
	send_signal(pid, argv[2][i]);
	exit(EXIT_SUCCESS);
}
