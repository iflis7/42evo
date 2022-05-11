#include <unistd.h>
#include <stdio.h>

int		letter_count(char c)
{
    int index = 0;
    if (c >= 'A' && c <= 'Z')
        index = c - 'A' + 1;
    if (c >= 'a' && c <= 'z')
        index = c - 'a' + 1;
    else
        index = 1;
    return (index);
    

}

int		main(int ac, char **av)
{
    int repeat;
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            repeat = letter_count(av[1][i]);
            while (repeat)
            {
                write(1, &av[1][i], 1);
                repeat--;
            }
            i++;            
        }
    }
    write(1, "\n", 1);
}

