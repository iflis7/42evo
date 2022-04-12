#include "libft.h"

int	get_length(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr && ++len)
		nbr /= 10;
	return (len);
}

int	signHandle(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = get_length(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n)
	{
		str[--len] = signHandle(n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	// printf("get_length:: %i\n", get_length(123));
// 	printf("ft_itoa: %s\n", ft_itoa(2));
// }
