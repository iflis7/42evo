#include "libft.h"

int	word_len(char const *str, int index, char c)
{
	int	len;

	len = 0;
	while (str[index] && str[index] == c)
		index++;
	while (str[index] && str[index] != c && len++)
		index++;
	// printf("word lenght:: %i\n", len);
	return (len);
}

int	w_count(char const *str, char c)
{
	int	i;
	int	flag;
	int	w_count;

	i = 0;
	flag = 0;
	w_count = 0;
	while (str[i])
	{
		if (str[i] == c && flag == 1)
			flag = 0;
		else if ((str[i] != c) && flag == 0)
		{
			flag = 1;
			w_count++;
		}
		i++;
	}
	// printf("word count:: : %i\n", w_count);
	return (w_count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	int j, i, index;
	if (s == NULL)
		return (NULL);
	j = 0;
	i = 0;
	index = 0;
	tab = malloc(sizeof(char) * w_count(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (index > 0))
		{
			j++;
			index = 0;
		}
		else if (s[i] != c)
		{
			if (index == 0)
			{
				tab[j] = malloc(sizeof(char) * word_len(s, i, c) + 1);
				// if (!tab[j])
				// 	return (NULL);
				tab[j][ word_len(s, i, c)] = '\0';
			}
			tab[j][index] = s[i];
			index++;
		}
		i++;
	}
	// tab[w_count(s, c)] = NULL;
	return (tab);
}

int	main(void)
{
	char	*tab;
	char	**ret;

	tab =  "as aa      split       this for   me  !";
	// expected = ((char *[6]){"split", "this", "for", "me", "!", NULL});
	ret = ft_split(tab, ' ');

	// tab = {"aaam aa"};
	// int		i;
	// ret = ft_split(tab, 'm');
	// i = 0;
	// while (ret[i])
	// {
	// 	printf("string: %i -- %s\n",i + 1, ret[i]);
	// 	i++;
	// }
	printf("string0: %s\n", ret[0]);
	printf("string1: %s\n", ret[1]);
	printf("string2: %s\n", ret[2]);
	printf("string3: %s\n", ret[3]);
	// printf("res: %i\n", word_len(tab, 0, 'm'));
	// printf("res: %i\n", w_count(tab, 'm'));
}
