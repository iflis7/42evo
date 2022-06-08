/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:40:21 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/07 19:37:02 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void	fru(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

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

	opt = ft_split(paths, ' ');
	if (access(*opt, (R_OK, X_OK)) == 0)
		return (*opt);
	ret = get_path_lines(envp, *opt);
	if (access(ret, (R_OK, X_OK)) == 0)
	{
		fru(opt);
		return (ret);
	}
	free(ret);
	fru(opt);
	return (NULL);
}

char	*get_path_lines(char **envp, char *cmd)
{
	char	*res;
	char	**concats;
	char	*temp;

	cmd = ft_strjoin("/", cmd);
	while (*envp++)
	{
		res = ft_strnstr(*envp, "PATH=", ft_strlen(*envp));
		if (res)
		{
			concats = ft_split(res, ':');
			while (*concats++)
			{
				temp = ft_strjoin(*concats, cmd);
				free(*concats);
				if (access(temp, (R_OK, X_OK)) == 0)
				{
					free(cmd);
					return (temp);
				}
				free(temp);
			}
		}
	}
	free(cmd);
	return (NULL);
}
