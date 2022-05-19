
#include "utils.c"


// size_t	ft_strlen(const char *str)
// {
// 	unsigned long	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// int error_handler(char *error)
// {
//     write(2, error, ft_strlen(error));
// 	return (1);
// }


int	main(int argc, char const *argv[])
{
	if (argc != 5)
	{
		error_handler("Please do things the right way, or GTFO!!");
		exit(EXIT_FAILURE);
	}
    printf("Args: %s", argv[2]);
	return (0);
}
