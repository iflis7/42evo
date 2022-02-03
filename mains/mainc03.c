#include <stdio.h>

//Ex00::
 int    main()
 {
    char s1[] = "firs string";
    char s2[] = "fir string";

    printf("%d", ft_strcmp(s1, s2));
 }

//Ex01::
int main()
{
    char s1[] = "Imagination";
    char s2[] = "Imagination is Key";
    
    printf("%d", ft_strncmp(s1, s2, 11));
}

//Ex02::
int main() {
  char dest[50] = "Imagination ", src[] = " is key!";
  printf("%s\n", ft_strcat(dest, src));
  return 0;
}

//Ex03:: 
int main()
{
	char dest[50] = "Imagination ", src[] = " is key!";

	printf("%s\n", ft_strncat(dest, src, 50));
	return 0;
}

//Ex04::
int main()
{
	char str[50] = "key";
	char to_find[] = "ke";

	printf("%s\n", ft_strstr(str, to_find));
	return 0;
}

//Ex05::
int main()
{
	char src[50] = "strl";
	char dest[50] = "cat";

	int i = ft_strlcat(dest, src, 15);

	//printf("Final destination string : |%s|", dest);
	printf("strlcat:: |%d|", i);

	return (0);
}