
// #include "check_args.c"
#include "../include/pipex.h"

void child_process1(char *file, char **props, int *pfd, char **envp)
{

	// printf("Cmd: %s\nf: %d\npfd[0]: %d\npfd[1]: %d\n", cmd, file, pfd[0], pfd[1]);
	int fd1 = open(file, O_RDONLY);

	dup2(pfd[1], STDOUT_FILENO); // we want end[1] to be execve() stdout // FIXME "protect"
	close(pfd[0]); // close the read end of the pipe
	dup2(fd1, STDIN_FILENO);      // we want f1 to be execve() input // FIXME protection

	// printf("cmd: %s", cmd);
	if(execve(props[0], props,  envp) == -1)
	{
		msg_error("Child process 1 -*- Command execution failed!");
		exit(EXIT_FAILURE);
	}
	close(pfd[1]);
	close(fd1);
}

void	child_process2(int file, char **props, int *pfd, char **envp)
{
	// printf("Cmd: %s\nf: %d\npfd[0]: %d\npfd[1]: %d\n", cmd, file, pfd[0], pfd[1]);

	dup2(pfd[0], STDIN_FILENO); // 0  we want end[1] to be execve() stdout
	close(pfd[1]); // close the read end of the pipe
	dup2(file, STDOUT_FILENO);      // 1 we want f1 to be execve() input
	// dup2(1, STDOUT_FILENO);      // 1 we want f1 to be execve() input

	// printf("cmd: %s", cmd);
	// printf("*props: %s", *props);
	if(execve(*props, props,  envp) == -1)
	{
		msg_error("Child process 2 -*- Command execution failed!");
		exit(EXIT_FAILURE);
	}
	close(pfd[0]);
	close(file);
}

void	pipex(char *f1, char **props1, char **props2, int f2, char **envp)
{
	int		pfd[2];
	pid_t child1;
    pid_t child2;

	pipe(pfd);
	child1 = fork();
	if (child1 < 0)
		return (perror("Fork: "));
	if (child1 == 0) // if fork() returns 0, we are in the child process
		child_process1(f1, props1, pfd, envp);

	child2 = fork();
	if (child2 < 0)
		return (perror("Fork: "));
	if (child2 == 0) // if fork() returns 0, we are in the child process
		child_process2(f2, props2, pfd, envp);
	close(pfd[0]);         // this is the parent
    close(pfd[1]);         // doing nothing
    waitpid(child1, NULL, 0);  // supervising the children
    waitpid(child2, NULL, 0);  // while they finish their tasks
}

int	main(int argc, char **argv, char **envp)
{
	if (argc <= 4 || !envp)
		msg_error("GTFO!! proram needs at least 4 args");
	if (file_is_ok(argv[1]) == -1)
		return (-1);

	int fd = open(argv[argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	char *cmds[2];	
	char **props1 = get_env_path(&cmds[0], argv[2], envp);
	char **props2 = get_env_path(&cmds[1], argv[3], envp);
	if(!*props1 || !*props2)
		perror("FUCK OFF!");
	// printf("\nprops1: %s ---- props2: %s \n", props1[0], props2[0]);
	pipex(argv[1], props1, props2, fd, envp);
	return (0);
}

