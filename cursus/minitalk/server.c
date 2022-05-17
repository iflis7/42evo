/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:55:15 by hsaadi            #+#    #+#             */
/*   Updated: 2022/05/17 11:43:00 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.c"

void	handler(int signal)
{
	static int	len = 0;
	static char	c = 0;

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
	int					pid;
	struct sigaction	act;
	act.sa_handler = &handler;
	act.sa_flags = 0;
	act.sa_mask = 0;

	pid = (int)getpid();
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
