/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:44 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/10 09:23:25 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

static void	child_process1(char **argv, int *pfd, char **envp)
{
	char	**concats;
	char	*cmd;
	int		fd1;

	fd1 = open(argv[1], O_RDONLY, 0644);
	if (fd1 == -1)
		msg_exit("Infile couldn't be opened!\nPlease check the pathname!");
	dup2(pfd[1], STDOUT_FILENO);
	dup2(fd1, STDIN_FILENO);
	close(pfd[0]);
	cmd = get_cmd(argv[2], envp);
	concats = ft_split(argv[2], ' ');
	if (execve(cmd, concats, envp) == -1)
		msg_error("Command execution failed!\n");
	free(cmd);
	fru(concats);
	close(pfd[1]);
	close(fd1);
}

static void	child_process2(int file, char **argv, int *pfd, char **envp)
{
	char	**concats;
	char	*cmd;

	dup2(pfd[0], STDIN_FILENO);
	dup2(file, STDOUT_FILENO);
	close(pfd[1]);
	cmd = get_cmd(argv[3], envp);
	concats = ft_split(argv[3], ' ');
	if (execve(cmd, concats, envp) == -1)
		msg_error("Command execution failed!\n");
	free(cmd);
	fru(concats);
	close(pfd[0]);
	close(file);
}

void	pipex(char **argv, char **envp, int fd)
{
	int		pfd[2];
	pid_t	child1;
	pid_t	child2;

	if (pipe(pfd) == -1)
		msg_error("Command execution failed!\n");
	child1 = fork();
	if (child1 < 0)
		return (perror("Fork: "));
	if (child1 == 0)
		child_process1(argv, pfd, envp);
	child2 = fork();
	if (child2 < 0)
		return (perror("Fork: "));
	if (child2 == 0)
		child_process2(fd, argv, pfd, envp);
	close(pfd[0]);
	close(pfd[1]);
	waitpid(child1, NULL, 0);
	waitpid(child2, NULL, 0);
}
