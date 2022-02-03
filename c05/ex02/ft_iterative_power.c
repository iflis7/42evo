#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);

    while (power-- > 0)
        result *= nb;
    return (result);
}

int main()
{
    printf("returns: 1 ---::%d\n", ft_iterative_power(0, 0));
    printf("returns: 0 ---::%d\n", ft_iterative_power(-2, -3));
    printf("returns: 27 ---::%d\n", ft_iterative_power(3, 3));
}