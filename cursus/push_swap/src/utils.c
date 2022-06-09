#include "../include/push_swap.h"

void	fru(char **str)
{
	while (*str++)
		free(*str);
	// free(str);
}

int ft_str2len(char **tab)
{
    int i = 0;
    while(tab[i])
        i++;
    return (i);
}

int	ft_isnum_space(char c)
{
	return ((c >= '0' && c <= '9') || c == 32);
}

void msg_error(char *str)
{
    write(2, &(*str), ft_strlen(str));
    write(1, "\n", 1);
    exit(EXIT_FAILURE);
}