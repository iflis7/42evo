#include "get_next_line.h"

char	*get_line(char *keep)
{
	char	*str;
	// char	*new;
	int		i;

	if (!*keep)
		return (NULL);
	i = 0;
	// printf("\nres: %s \n", keep);
	while (keep[i] != '\n')
		{i++;}
	str = ft_calloc(sizeof(char), i + 1);
	ft_strlcpy(str, keep, i + 1);
	// new = ft_calloc(sizeof(char), ft_strlen(keep) - (i - 1));
	// new = ft_substr(keep, i + 1, ft_strlen(keep) - i);
	// free(keep[fd])
	

	// keep
	return (str);
}

char	*read_and_keep(int fd, char *keep)
{
	char	buff[BUFFER_SIZE + 1];
	int		rd_bytes;

	rd_bytes = 0;
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
	return (str);
}

int	main(void)
{
	int	fd;

	// char	*str;
	// static char	*keep[OPEN_MAX];
	// str = "The function returns the next line from the [fd] with its respective";
	// char	buff[BUFFER_SIZE + 1];
	fd = open("emp.txt", O_RDONLY);
	// printf("\nres: %s \n", read_and_keep(fd, keep[fd]));
	// read(fd, buff, 4);
	// printf("\nres: %s \n", buff);
	// printf("\nres: %s \n", get_line(str));
	printf("\nres: %s \n", get_next_line(fd));
	return (0);
}
