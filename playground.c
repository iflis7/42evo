
#include <stdio.h>
#include <unistd.h>

// int	get_length(int nbr)
// {
// 	int	len;

// 	len = 0;
// 	if (nbr <= 0)
// 		len++;
// 	while (nbr && ++len)
// 		nbr /= 10;
// 	return (len);
// }

// void	ft_putchar_fd(char c, int fd)
// {
// 	if (fd)
// 		write(fd, &c, 1);
// }

// void	ft_putuns(int nb)
// {
// 	int		len;
// 	char	j;

// 	len = get_length(nb);
// 	while (len--)
// 	{
// 		j = nb % 10 + '0';  // Ce qui manquait dans ton code :) 
// 		ft_putchar_fd(j, 1);
// 		nb /= 10;
// 	}
// }

// int	main(void)
// {
// 	ft_putuns(23501);
// }

// C program to implement sighup(), sigint() and sigquit() signal functions to show the communication between processes
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

// function declaration of sighup, sigint and sigquit functions
void sighup();
void sigint();
void sigquit();

// main function or driver code
int main()
{
	
	struct sigaction act;
	act.sa_handler = &sighup;



	int pid;
	// pid variable, which will be used later to identify the process, whether it is child process or parent process
	// to get the child process
	if ((pid = fork()) < 0)
	{
		perror("fork");
		exit(1);
	}

	if (pid == 0)
	{	 /* child process, since pid equals to zero for child process */
		signal(SIGHUP, sighup);
		signal(SIGINT, sigint);
		signal(SIGQUIT, sigquit);
		for (;;)
			;   /* infinite loop i.e. loop for ever  */
	}

	else	/* parent process*/
		{ // pid hold the process id of child process
			printf("\nPARENT: sending SIGHUP\n\n");
			kill(pid, SIGHUP);
			sleep(3); // pause for 3 seconds

			printf("\nPARENT: sending SIGINT\n\n");
			kill(pid, SIGINT);
			sleep(3); // pause for 3 seconds
			
			printf("\nPARENT: sending SIGQUIT\n\n");
			kill(pid, SIGQUIT);
			sleep(3); // pause for 3 seconds
		}
}

// function definition of sighup()
void sighup()
{
	signal(SIGHUP, sighup); /* reset signal */
	printf("CHILD: I have received a SIGHUP\n");
}

// function definition of sigint()
void sigint()
{
	signal(SIGINT, sigint); /* reset signal */
	printf("CHILD: I have received a SIGINT\n");
}

// function definition of sigquit()
void sigquit()
{
	printf("My DADDY has Killed me!!!\n");
	exit(0);
}