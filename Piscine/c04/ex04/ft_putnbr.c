#include <unistd.h>
#include <stdio.h>

void ft_putchar(char ch)
{
    write(1, &ch, 1);
}

int ft_len(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_comp(char *s1, char *s2)
{
    int i = 0;
    while((s1[i] && s2[i]) && (s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}

int is_base(char *str)
{
    if (!(!ft_comp(str, "0123456789ABCDEF") || !ft_comp(str, "01234567") || !ft_comp(str, "01")))
        return (0);
    return (1);    
}



void convert_nbr(int nbr, char *base, char *tab)
{
    int i =0;
    int len = ft_len(base);

    if (is_base(base))
    {
        while (nbr > 0)
        {
            // ft_putchar((nbr % len) + '0');
            tab[i] = (nbr % len) + '0';
            nbr /= len;
            i++;
        }
        tab[i] = '\0';
    }
    len = tab[len];
    while (len > 0)
    {
        ft_putchar((tab[len]));
        len--;
    }
    

}

void    ft_putnbr_base(int nbr, char *base)
{
    char tab[500];
    convert_nbr(nbr, base, tab);
}

int main()
{
    char base[50] = "01";
    // printf("Comp-bin: %d\n", ft_comp(base, "01"));
    // printf("Comp-oct: %d\n", ft_comp(base, "01234567"));
    // printf("Comp-hex: %d\n", ft_comp(base, "0123456789ABCDEF"));  
    // printf("base: %d\n", is_base(base));

    ft_putnbr_base(50, base); 
    write(1, "\n", 1);
}




