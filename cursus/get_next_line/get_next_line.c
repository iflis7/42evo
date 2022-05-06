#include "get_next_line.h"



char *read_and_keep(char *keep, char *buff)
{
	int i =0;
	while (keep[i] != '/0' && keep[i] != '\n')
	{
		
	}
	
}

char	*get_next_line(int fd)
{
	static char	*keep[OPEN_MAX];
	char		*buff;
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buff, 0) < 0)
		return (NULL);
	buff = NULL;
	*keep[fd] = read_and_keep(keep, buff);

	return (str);
}

int	main(void)
{
	int fd;

	fd = open("emp.txt", O_RDONLY);
	printf("\nres: %s \n", get_next_line(fd));
	printf("\nres: %s \n", get_next_line(fd));
	return (0);
}