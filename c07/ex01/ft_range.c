// #include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;
    int count;

    count = 0;

    int *pint;
    pint = NULL;
    if (min >= max)
        return (pint);
//  tab = (int *)malloc(sizeof(int) * (max - min))))
    tab = malloc(sizeof(int) * (max - min));

    while (min <= max)
    {
        tab[count] += min;
        count++;
        min++;
    }
    return (tab);
}

 int main()
{
//     int min = 1;
//     int max = 9;
//     int i = 0;
//     int *target = ft_range(min, max);

//     while (i < 9)
//     {
//         printf("%d\n", target[i]);
//         i++;
//     }
//     return 0;
}