// #include "libft/ft_putstr_fd.c"
// #include "libft/ft_split.c"
// #include "libft/ft_strnstr.c"
// #include "libft/ft_calloc.c"
// #include "libft/ft_substr.c"
// #include "libft/ft_bzero.c"
// #include "libft/ft_strlen.c"
// #include "libft/ft_strjoin.c"

#include "../include/pipex.h"


void	message(char *error)
{
	write(2, "Error: ", 8);
	write(2, error, strlen(error)); // FIXME " replace by ft_strlen"
	write(2, "\n", 1);
}

void	msg_error(char *error)
{
	perror(error);
	exit(EXIT_FAILURE);
}

// int main(int argc, char *argv[])
// {
// 	if (argc < 2)
// 	{
// 		// message("Inid");
// 		printf("ih: %s", argv[1]);
// 		exit(EXIT_FAILURE);
// 	}

// 	msg_error("Inid ih!");
//     return (0);
// }
