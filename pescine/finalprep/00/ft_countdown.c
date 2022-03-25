#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    int i = '9';

    while (i >= '0' )
    {
        ft_putchar(i);
        i--;
    }
    write(1, "\n", 1);
}