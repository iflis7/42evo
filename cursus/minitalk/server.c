/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:55:15 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/08 08:39:11 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.c"

void	handler(int signal)
{
	static int	len = 0; // to store the number of bits read
	static char	c = 0;	// to store the character read

	// printf("signal:: %d\n", signal);
	// printf("SIGUSR1:: %d\n", SIGUSR1);
	if (signal == SIGUSR1) 
	{
		printf("C-b:: %i\n", c);
		c = c | (1 << len);
		printf("C-a:: %i\n", c);
		printf("Conv:: %d\n", (1 << len));
	}
	len++;
	printf("len++:: %d\n", len);
	if (len == 8)
	{
		// write(1, "*", 1);
		write(1, &c, 1);
		// write(1, "*", 1);
		if (c == '\0')
			write(1, "\n", 1);
		len = 0;
		c = 0;
	}
}


int	main(void)
{
	int					pid;
	// struct sigaction	act;
	// act.sa_handler = &handler;
	// act.sa_flags = 0;
	// act.sa_mask = 0;

	pid = getpid();
	
	write(1, "PID:", 4);
	ft_putnbr_fd(pid, 1);
	
	write(1, "\n", 1);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	// sigaction(SIGUSR1, &act, NULL);
	// sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
