
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int	j;
	size_t	len_s1;
    size_t  end;

	len_s1 = ft_strlen((char *)s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = len_s1 - 1;
	while (j && ft_strchr(set, s1[j]))
		j--;
    end =  ((len_s1 - j - 1) - i);
	return (ft_substr(s1, i, end));
}

