
#ifndef UTILS_H
# define UTILS_H

# include "../include/libft/libft.h"

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
# include <errno.h>
# include <signal.h>
# include <stdio.h>
# include <strings.h>
# include <sys/wait.h>

# define ERROR_FILE "File Not Existant! Please check the path of create the file! \n"

void	message(char *error);
void	msg_error(char *error);

void	fru(char **str);
int		file_is_ok(char *path);
char	**get_env_path(char **paths, char *argv, char **envp);

#endif