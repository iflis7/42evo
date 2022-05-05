
#include "get_next_line.h"

char	*get_line(char *keep, char *str)
{
	int	i;

	i = 0;
	while (keep[i] != '\n' && keep[i] != '\0')
	{
		str[i] = keep[i];
		i++;
	}
	return (str);
}

char	*get_keep(int fd, char *buffer)
{
	static char	*keep;
	int			i;

	i = 0;
	read(fd, buffer, BUFFER_SIZE);
	strcpy(keep, buffer);
	while (keep[i])
	{
		if (keep[i] != '\n')
		{
			read(fd, buffer, BUFFER_SIZE);
			strcpy(keep, buffer);
		}
		i++;
	}
	return (keep);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*keep;
	char		*str;
	size_t		j;

	// static char *box;
	j = 0;
	str = malloc(BUFFER_SIZE + 1);
	keep = 0;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	if (!(read(fd, buff, BUFFER_SIZE) > 0))
	{
		free(buff);
		return (NULL);
	}
	strcpy(keep, (const char *)buff);
	keep[BUFFER_SIZE + 1] = '\0';
	while (keep[j] != '\0')
	{
		if (!(keep[j] == '\n'))
		{
			read(fd, buff, BUFFER_SIZE);
			strcpy(keep, (const char *)buff);
		}
		j++;
	}
	get_line(keep, str);
	/*
    // free(buff);
	// while (str[keep] != '\n' && str[keep] != '\0')
	// {
    //     read(fd, buff, BUFFER_SIZE);
	// 	ft_strjoin(str, get_line(buff, keep, str));
	// }
	// printf("\nbuff: %s\n", buff);
*/
	return (str);
}

int	main(void)
{
	int	fd;

	fd = open("emp.txt", O_RDONLY);
	printf("\nres: %s \n", get_next_line(fd));
	printf("\nres: %s \n", get_next_line(fd));
	return (0);
}
