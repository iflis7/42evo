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
    int count;

    count = 1;
    while (count < argc)
    {
        ft_putstr(argv[count]);
        write(1, "\n", 1);
        count++;
    }
    return (0);    
}