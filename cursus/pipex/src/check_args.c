/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:40:21 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/10 09:09:11 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

char	*get_cmd(char *paths, char **envp)
{
	char	**opt;
	char	*ret;
	char	*cmd;

	opt = ft_split(paths, ' ');
	if (access(*opt, (R_OK, X_OK)) == 0)
		return (*opt);
	cmd = ft_strjoin("/", *opt);
	ret = get_cmd_path(envp, cmd);
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

char	*get_cmd_path(char **envp, char *cmd)
{
	char	**conc;
	char	*temp;

	while (*envp)
	{
		if (ft_strnstr(*envp, "PATH=", ft_strlen(*envp)))
		{
			conc = ft_split(ft_strnstr(*envp, "PATH=", ft_strlen(*envp)), ':');
			while (*conc++)
			{
				temp = ft_strjoin(*conc, cmd);
				if (access(temp, (R_OK, X_OK)) == 0)
				{
					fru(conc);
					return (temp);
				}
				free(temp);
			}
		}
		envp++;
	}
	msg_exit("Command not found!");
	return (temp);
}
