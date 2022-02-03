#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int count;

    count = 1;
    if (nb <= 1)
        return (1);
    else if (nb < 0)
        return (0);

    while (nb > 1)
        count *= nb--;
    return (count);
}

int main()
{
    printf("%d\n", ft_iterative_factorial(5));
    printf("%d\n", ft_iterative_factorial(7));
    printf("%d\n", ft_iterative_factorial(10));
}