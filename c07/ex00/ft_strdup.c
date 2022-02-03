#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    // char *str;
    char *ptr;
    int len;
    int count;

    len = 0;
    count = 0;
    while (src[len])
        len++;
    ptr = malloc(len + 1);
    // ptr = str;
    while (src[count])
    {
        ptr[count] = src[count];
        count++;
    }
    ptr[count] = '\0';
    //while (*src)
    //    *p++ = *src++;
    // *p = '\0';
    return ptr;
}

int main()
{
    char source[] = "Amazingly amazing";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char *target = ft_strdup(source);

    printf("%s", target);
    return 0;
}