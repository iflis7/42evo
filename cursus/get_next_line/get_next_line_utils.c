#include "get_next_line.h"

int	ft_strlen(char *str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	while (*str || c == '\0')
		if (*(str++) == (char)c)
			return (--str);
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	if (size == SIZE_MAX)
		return (NULL);
	while (*(char *)tab)
		*(char *)tab++ = '\0';
	// ft_bzero(tab, nmemb * size);
	return (tab);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((sizeof(char) * (len + 1)));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (*src && --dstsize)
		*dst++ = *src++;
	*(dst) = '\0';
	return (len);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*str;
	int	l;
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (len > l)
		len = l;
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	while (start < l && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
