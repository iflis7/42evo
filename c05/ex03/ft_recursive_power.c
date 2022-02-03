#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (nb < 1 && power < 1)
        return (1);    
    else if (power != 0)
        return (nb * ft_recursive_power(nb, (power - 1)));
    return (1);
}

int main()
{
    printf("%d", ft_recursive_power(0, 0));
    printf("%d", ft_recursive_power(1, -1));
    printf("%d", ft_recursive_power(2, -2));
    printf("%d", ft_recursive_power(3, -3));
    printf("%d", ft_recursive_power(4, 4));
    printf("%d", ft_recursive_power(-1, 0));
    printf("%d", ft_recursive_power(-2, -1));
    printf("%d", ft_recursive_power(-3, 3));
    printf("%d", ft_recursive_power(-4, -4));
}