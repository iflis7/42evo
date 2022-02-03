#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    int count;
    int two;
    int index;
    char *box;
    int i;

    i = 1;    
    count = 1;
    two = count + 1;
    while (two < argc)
    {
        index = 0;
        while (argv[count][index] != '\0' && argv[two][index] != '\0')
        {
            if ((argv[count][index] != argv[two][index]))
            {
                if (argv[count][index] < argv[two][index])
                {
                    box = argv[count];
                    argv[count] = argv[two];
                    argv[two] = box;
                }
            }
            index++;
        }
        count++;
        two++;
    }
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}