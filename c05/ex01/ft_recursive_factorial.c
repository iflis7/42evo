#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb < 1)
        return (1);
    else 
        return (nb * ft_recursive_factorial(nb - 1));
}



int main()
{
    printf("%d\n", ft_recursive_factorial(5));
    printf("%d\n", ft_recursive_factorial(7));
    printf("%d\n", ft_recursive_factorial(10));
}