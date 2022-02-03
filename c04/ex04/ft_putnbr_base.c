#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int base_check(char *base)
{
    int count;
    int index;

    count = 0;
    if (ft_strlen(base) < 2)
        return (0);
    while (base[count])
    {
        if (!(base[count] >= 65 && base[count] <= 70))
            if (!(base[count] >= 97 && base[count] <= 102))
                if (!(base[count] >= 48 && base[count] <= 57))
                    return (0);
        index = count + 1;
        while (base[index])
        {
            if (base[count] == base[index])
                return (0);
            index++;
        }
        count++;
    }
    return (1);
}

void ft_rev_int_tab(char *tab, int size)
{
    int box;
    int i;

    i = 0;
    while (tab[i] && i < size / 2)
    {
        box = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = box;
        i++;
    }
}

void ft_putnbr_base(int nbr, char *base)
{
    char tab [1000000];
    int count;
    int box;
    int temp;
    int sign;
    int i;

    temp = 0;
    count = 0;
    i = 0;
    sign = nbr;
    if (base_check(base) == 0)
        return; 
    if (nbr < 0)
        nbr = -nbr;
    while (nbr > 0)
    {
        box = nbr / ft_strlen(base);
        temp = nbr % ft_strlen(base);
        if (temp > 9 && temp < 16 && (ft_strlen(base) == 16))
            tab[count] = (10 + (temp % 10)) + 55;
        else
            tab[count] = nbr % ft_strlen(base) + 48;
        nbr = box;
        count++;
    }
    ft_rev_int_tab(tab, ft_strlen(tab));
    if (sign < 0)
        ft_putchar('-');
    while (i++ < ft_strlen(tab))
        ft_putchar(tab[i]);
}

int main()
{
    char base[] = "258";
   ft_putnbr_base(-500, base);
}