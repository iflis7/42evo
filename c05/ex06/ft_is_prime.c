#include <stdio.h>

int ft_is_prime(int nb)
{
    int result;

    result = 2;
    if (nb < 2)
        return (0);
    while (result <= nb / 2)
    {
        if (nb % result == 0)
            return (0);
        result++;
    }
    return (1);
}

int main()
{
    printf("Returns: 0------::%d \n", ft_is_prime(0));
    printf("Returns: 1------::%d \n", ft_is_prime(11));
    printf("Returns: 0------::%d \n", ft_is_prime(26));
    printf("Returns: 1------::%d \n", ft_is_prime(59));
    printf("Returns: 0------::%d \n", ft_is_prime(100));
}
