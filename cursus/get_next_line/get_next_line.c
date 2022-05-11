#include "get_next_line.h"

char	*get_line(char *keep)
{
	char	*str;
	int		i;
	// char	*new;
	if (!*keep)
		return (NULL);
	i = 0;
	while (keep[i] && keep[i] != '\n')
		i++;
	str = ft_calloc(sizeof(char), i + 1);
	ft_strlcpy(str, keep, i + 2);
	// new = ft_calloc(sizeof(char), ft_strlen(keep) - (i + 1));
	// new = ft_substr(keep, i + 1, ft_strlen(keep) - (i + 1));
	// free(keep);
	// keep = ft_calloc(sizeof(char), ft_strlen(keep) - (i + 1));
	// keep = new;
	// printf("keeeeep: %s\n", keep);
	return (str);
}

char *delete_shit(char *keep)
{
	char *new;
	int i = 0;
	while (keep[i] && keep[i] != '\n')
		i++;
	new = ft_calloc(sizeof(char), ft_strlen(keep) - (i + 1));
	new = ft_substr(keep, i + 1, ft_strlen(keep) - (i + 1));
	free(keep);
	return (new);
}

char	*read_and_keep(int fd, char *keep)
{
	char	*buff;
	int		rd_bytes;

	rd_bytes = 0;
	buff = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!keep)
	{
		keep = ft_calloc(sizeof(char), 1);
		if (!keep)
			return (NULL);
	}
	while (!ft_strchr(keep, '\n') || !ft_strchr(keep, '\0'))
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes < 0)
			return (NULL);
		keep = ft_strjoin(keep, buff);
	}
	return (keep);
}

char	*get_next_line(int fd)
{
	static char	*keep[OPEN_MAX];
	char		*str;

	keep[fd] = read_and_keep(fd, keep[fd]);
	str = get_line(keep[fd]);
	keep[fd] = delete_shit(keep[fd]);
	return (str);
}

int	main(void)
{
	int	fd;
	fd = open("emp.txt", O_RDONLY);
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));
	printf("res main: %s", get_next_line(fd));

	return (0);
}
