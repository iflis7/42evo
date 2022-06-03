#include "utils.c"

/* returns (0) if the file exists and the user have the permissions needed (Read) and (-1) otherwise */
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

char	**get_env_path(char **paths, char *cmd, char *envp[])
{
	char	**mycmdargs;
	char	*res;
	char	**box;

	mycmdargs = ft_split(cmd, ' ');
	while (*envp)
	{
		res = ft_strnstr(*envp++, "PATH", 1000);
		if (res)
		{
			box = ft_split(ft_split(res, '=')[1], ':');
			while (*box)
			{
				*paths = ft_strjoin(ft_strjoin(*box++, "/"), mycmdargs[0]);
				if (access(*paths, F_OK) == 0)
					return (mycmdargs);
			}
		}
	}
	return (NULL);
}
