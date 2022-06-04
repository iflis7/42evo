#include "../include/pipex.h"
// #include "utils.c"

void	fru(char **str)
{
	int	i;
	i = 0;
	while (str[i++])
		free(str[i]);
}

/* returns (0) if the file exists and the user have the permissions needed (Read) and (-1) otherwise */
int	file_is_ok(char *path)  // FIXME show a message if file or not precise bordel!!
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

char	**get_env_path(char **paths, char *argv, char **envp)
{
	char	**mycmdargs;
	char	*res;
	char	**box;

	mycmdargs = ft_split(argv, ' ');
	while (*envp)
	{
		res = ft_strnstr(*envp++, "PATH=", 1000);
		if (res)
		{
			box = ft_split(res, ':');
			while (*box++)
			{
				if (access(*box, F_OK) == 0)
				{
					fru(box);
					return (mycmdargs);
				}
				else
				{
					*paths = ft_strjoin(ft_strjoin(*box, "/"), mycmdargs[0]);
					if (access(*paths, F_OK) == 0)
					{
						fru(box);
						return (mycmdargs);
					}
				}
			}
		}
	}
	free(mycmdargs);
	return (NULL);
}
