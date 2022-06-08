/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:44 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/08 08:01:10 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void	child_process1(char **argv, int *pfd, char **envp)
{
	char	**concats;
	char	*cmd;
	int		fd1;

	fd1 = open(argv[1], O_RDONLY, 0644);
	if (fd1 < 0)
		return (msg_error("File couldn't be open in child process 1"));
	dup2(pfd[1], STDOUT_FILENO);
	dup2(fd1, STDIN_FILENO);
	close(pfd[0]);
	cmd = get_cmd(argv[2], envp);
	concats = ft_split(argv[2], ' ');
	if (execve(cmd, concats, envp) == -1)
	{
		msg_error("Child process 1 -*- Command execution failed!");
		exit(EXIT_FAILURE);
	}
	free(cmd);
	fru(concats);
	close(pfd[1]);
	close(fd1);
}

void	child_process2(int file, char **argv, int *pfd, char **envp)
{
	char	**concats;
	char	*cmd;

	dup2(pfd[0], STDIN_FILENO);
	close(pfd[1]);
	dup2(file, STDOUT_FILENO);
	cmd = get_cmd(argv[3], envp);
	concats = ft_split(argv[3], ' ');
	if (execve(cmd, concats, envp) == -1)
	{
		msg_error("Child process 2 -*- Command execution failed!");
		exit(EXIT_FAILURE);
	}
	free(cmd);
	fru(concats);
	close(pfd[0]);
	close(file);
}

void	pipex(char **argv, char **envp, int f2)
{
	int		pfd[2];
	pid_t	child1;
	pid_t	child2;

	pipe(pfd);
	child1 = fork();
	if (child1 < 0)
		return (perror("Fork: "));
	if (child1 == 0)
		child_process1(argv, pfd, envp);
	child2 = fork();
	if (child2 < 0)
		return (perror("Fork: "));
	if (child2 == 0)
		child_process2(f2, argv, pfd, envp);
	close(pfd[0]);
	close(pfd[1]);
	waitpid(child1, NULL, 0);
	waitpid(child2, NULL, 0);
}

int	main(int argc, char **argv, char **envp)
{
	int	fd;

	if (argc <= 4 || !envp)
		msg_error("Proram needs at least 4 args!!");
	if (file_is_ok(argv[1]) == -1)
		return (-1);
	fd = open(argv[argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	pipex(argv, envp, fd);
	return (0);
}
