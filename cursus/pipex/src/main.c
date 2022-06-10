/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 09:10:59 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/10 09:50:05 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int	fd;

	if (argc < 5 || !*envp)
		msg_exit("Program needs at least 5 args!\n👇Like👇\ninfile ls wc outfile");
	fd = open(argv[argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (fd == -1)
		msg_exit("Outfile couldn't be opened!");
	pipex(argv, envp, fd);
	close(fd);
	return (0);
}
