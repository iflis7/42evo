
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	x;
	size_t	j;

	i = 0;
	x = 0;
	j = 0;
    
	if (!*s || len < 1)
		return (NULL);
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
        
	j = start;
    
	while (j < i && len--)
		str[x++] = s[j++];
	str[x] = '\0';
	return (str);
}

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

int	main(void)
{
	const char	*s;
	const char	*s1;

	s = "ctring  s-sos";
	s1 = "s";
	printf("Resu: %s \n", ft_strtrim(s, s1));
}
