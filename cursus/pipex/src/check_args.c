/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:40:21 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/08 08:42:09 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

/* returns (0) if the file exists and the user have the 
permissions needed (Read) and (-1) otherwise */
int	file_is_ok(char *path)
{
	if (access(path, F_OK) == -1)
	{
		msg_error("Error Description");
		return (-1);
	}
	else if (access(path, R_OK) == -1)
	{
		msg_error("Error Description");
		return (-1);
	}
	return (0);
}

char	*get_cmd(char *paths, char **envp)
{
	char	**opt;
	char	*ret;
	char	*cmd;

	opt = ft_split(paths, ' ');
	if (access(*opt, (R_OK, X_OK)) == 0)
		return (*opt);
	cmd = ft_strjoin("/", *opt);
	ret = get_path_lines(envp, cmd);
	if (access(ret, (R_OK, X_OK)) == 0)
	{
		free(cmd);
		fru(opt);
		return (ret);
	}
	free(cmd);
	free(ret);
	fru(opt);
	return (NULL);
}

char	*get_path_lines(char **envp, char *cmd)
{
	char	**conc;
	char	*temp;

	while (*envp++)
	{
		if (ft_strnstr(*envp, "PATH=", ft_strlen(*envp))) // FIXME add strcmp
		{
			conc = ft_split(ft_strnstr(*envp, "PATH=", ft_strlen(*envp)), ':');
			while (*conc++)
			{
				temp = ft_strjoin(*conc, cmd);
				free(*conc);
				if (access(temp, (R_OK, X_OK)) == 0)
					return (temp);
				free(temp);
			}
		}
	}
	return (NULL);
}