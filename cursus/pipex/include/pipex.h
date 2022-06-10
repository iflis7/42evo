/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:53 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/09 17:16:06 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

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

void	message(char *error);
void	msg_exit(char *error);
void	msg_error(char *error);

void	fru(char **str);
int		file_is_ok(char *path);
char	*get_cmd(char *paths, char **envp);
char	*get_cmd_path(char **envp, char *cmd);

#endif
