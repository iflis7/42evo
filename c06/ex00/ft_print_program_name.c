#include <unistd.h>

void    ft_putstr(char *str)
{
    int count;
    
    count = 0;
    while(str[count])
    {
        write(1, &str[count], 1);
        count++;
    }
}


int main(int argc, char **argv)
{
    if (argc != 1)
        return (0);
    else
    {
        ft_putstr(argv[0]);
        write(1, "\n", 1);
    }
    return (0);
}