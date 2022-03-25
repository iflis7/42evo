#include <stdio.h>

//Ex00::
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(10));
}

//Ex01::
int main()
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(7));
	printf("%d\n", ft_recursive_factorial(10));
}

//Ex02::
int main()
{
	printf("returns: 1 ---::%d\n", ft_iterative_power(0, 0));
	printf("returns: 0 ---::%d\n", ft_iterative_power(-2, -3));
	printf("returns: 27 ---::%d\n", ft_iterative_power(3, 3));
}

//Ex03::
int main()
{
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, -1));
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(3, -3));
	printf("%d\n", ft_recursive_power(4, 4));
	printf("%d\n", ft_recursive_power(-1, 0));
	printf("%d\n", ft_recursive_power(-2, -1));
	printf("%d\n", ft_recursive_power(-3, 3));
	printf("%d\n", ft_recursive_power(-4, -4));
}

//Ex04::
int main()
{
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
}

//Ex05::
int main()
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(0));
}

//Ex06::
int main()
{
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(31));
}

//Ex07::
int main()
{
	printf("Returns: 2------::%d \n", ft_find_next_prime(0));
	printf("Returns: 5------::%d \n", ft_find_next_prime(4));
	printf("Returns: 26-----::%d \n", ft_find_next_prime(26));
	printf("Returns: 59-----::%d \n", ft_find_next_prime(55));
	printf("Returns: 11-----::%d \n", ft_find_next_prime(11));
}
