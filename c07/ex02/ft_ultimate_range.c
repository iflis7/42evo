#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int count;
	int *tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	count = 0;
	while (min < max)
	{
		tab[count] = min;
		count++;
		min++;
	}
	*range = tab;
	return (count);
}

int main()
{
    int min = 10;
    int max = 99;
    int i = 0;
    int *target = ft_range(min, max);

    while (i < ft_strlen(target))
    {
        printf("%d\n", target[i]);
        i++;
    }
    return 0;
}