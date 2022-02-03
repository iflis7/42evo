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

int ft_find_next_prime(int nb)
{
    while (nb >= 0 && !ft_is_prime(nb))
        nb++;
    return (nb);
}

int main()
{
    printf("Returns: 2------::%d \n", ft_find_next_prime(0));
    printf("Returns: 5------::%d \n", ft_find_next_prime(4));
    printf("Returns: 26-----::%d \n", ft_find_next_prime(26));
    printf("Returns: 59-----::%d \n", ft_find_next_prime(55));
    printf("Returns: 11-----::%d \n", ft_find_next_prime(11));

}
