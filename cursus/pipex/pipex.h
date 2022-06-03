
#ifndef UTILS_H
# define UTILS_H

# include "libft/libft.h"

/* to write, read, close, access, pipe, dup, dup2, execve, fork */
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

/* malloc, free, exit */
# include <stdlib.h>

/* open, unlink */
# include <fcntl.h>

/* strerror */
# include <string.h>

/*to perror*/
# include <stdio.h>

#include <signal.h>
#include <strings.h>
#include <errno.h>
#include <sys/wait.h>

# define ERROR_FILE "File Not Existant! Please check the path of create the file! \n"


typedef struct data
{
    char **pt;
    char **cmd;
} data;


// int message(char *error);
// void	msg_error(char *error);


#endif