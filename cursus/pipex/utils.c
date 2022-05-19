#include "utils.h"


size_t	ft_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int error_handler(char *error)
{
    write(2, error, ft_strlen(error));
	return (1);
}

