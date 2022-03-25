
// Ex00::
int	main(void)
{
	char source[] = "";
	char *target = ft_strdup(source);

	printf("%s", target);
	return (0);
}

// Ex01::
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*target;

	min = 1;
	max = 9;
	i = 0;
	target = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", target[i]);
		i++;
	}
	return (0);
}

// Ex02::
int main()
{
	int min = 10;
	int max = 99;
	int *range[] = {};

	int target = ft_ultimate_range(range, min, max);

	printf("%d\n", target);

	return 0;
}

// Ex03::
int	main(void)
{
	int size = 4;
	char *strs[4] = {"one", "two", "three", "four"};
	char sep[] = " -*- ";
	printf("%s", ft_strjoin(size, strs, sep));
}

// Ex04::
int main()
{
  char base_from[] = {"0123456789"};
  char base_to[] = {"0123456789abcdef"};
  char nbr[] = {"108"};
  printf("%s", ft_convert_base(nbr, base_from, base_to));
}

// Ex05::
int main()
{
    int     i;
    char **tab;
    char str[] = {"12 1000000000, 4 100 5 1000, 60-7"};
    char charset[] = {", "};
    i = 0;
    tab = ft_split(str, charset);
    while(tab[i] != 0)
    {
        printf("%s\n", tab[i]);
        i++;
    }
}

