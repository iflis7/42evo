#include <stdio.h>

int ft_sqrt(int nb)
{
    int counter;

    counter = 0;
    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    while (counter <= nb)
    {
        if (counter * counter == nb)
            return counter;
        counter++;
    }
    return (0);
}

int main()
{
    printf("%d", ft_sqrt(2));
    printf("%d", ft_sqrt(3));
    printf("%d", ft_sqrt(4));
    printf("%d", ft_sqrt(5000000000));
}