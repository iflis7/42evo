
#include "libft.h"

char	*ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char) * 40);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		tab[j] = s[i];
		j++;
		i++;
	}
	return (tab);
}

// int main()
// {
//     char tab[40] = "ccc123456c789c";
//     printf("%s", ft_split(tab, 'c'));

// }