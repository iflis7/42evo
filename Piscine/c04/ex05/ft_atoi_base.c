#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);    
}

int is_space(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int check_base(char *base)
{
    if (base == "0123456789abcdef" || base == "0123456789ABCDEF" 
        || base == "012345678" || base == "01")
        return (ft_strlen(base));
    return(0);
}

int ft_atoi_base(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] == '-')
    {
        /* code */
    }
    

}

int ft_atoi_base(char *str, char *base)
{
    if (check_base(base))
    {
                
    }
    
} 