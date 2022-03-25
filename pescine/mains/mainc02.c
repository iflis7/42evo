#include <stdio.h>

//Ex00::
int main()
{
    char src[] = "C programming stfu";
    char dest[] = "";

    //    *ft_strcpy(dest, src);

    printf("%s", ft_strcpy(dest, src));
}

//Ex01::
int main()
{
    char src[] = "It's Monday and it's raining";
    char dest[15] = "";

    /* count less than length of src
    strncpy(dest,src,10);
    strncpy(dest,src,strlen(src)+10);*/

    printf("%s", ft_strncpy(dest, src, 15));

    return 0;
}

//Ex02::
int main()
{
    char tab[] = "lkjig1";
    printf("%d\n", ft_str_is_alpha(tab));
    //  printf("%d", ft_strlen(tab));
}

//Ex03::
int main()
{
    char tab[] = "125l5477";

    printf("%d", ft_str_is_numeric(tab));
}

//Ex04::
int main()
{
    char tab[] = "jdidj/*did";

    printf("%d", ft_str_is_lowercase(tab));
}

//Ex05:
int main()
{
    char tab[] = "IIIjII";

    printf("%d", ft_str_is_uppercase(tab));
}

//Ex06::
int main()
{
    char tab[] = "kjdidhdndbǦ";

    printf("%d", ft_str_is_printable(tab));
}

//Ex07::
int main()
{
    char tab[] = "kjdidhdndb";

    printf("%s", ft_strupcase(tab));
}

//Ex08::
int main()
{
    char tab[] = "OHSNSGDTDJLpok";

    printf("%s", ft_strlowcase(tab));
}

//Ex09::
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux;cinquante+et+un";
    char str2[] = "bONs0iR 7LA comPaGN1E";
    char    *p = str;
    
    printf("---------------------------------------------------------------\n");
    printf("Renvoie la string avec la premiere lettre en majuscule et autre en minuscule");
    printf("\nTest1\nInput : %s\nOutput: ", str);
    p = ft_strcapitalize(str);
    printf("%s", str);\
    printf("\nTest2\nInput : %s\nOutput: ", str2);
    p = ft_strcapitalize(str2);
    printf("%s", str2);
    printf("\n***************************************************************");
}

//Ex10::
int main()
{
    char src[] = "123456789";
    char dest[9];

    printf("---------------------------------------------------------------\n");
    printf("Doit reproduire strlcpy\n");
    printf("Input string: %s", src);
    ft_strlcpy(dest, src, 3);
    printf("\nTest1\ninput size: 3\nRetour attendu : 123\nRetour fonction: %s", dest);
    ft_strlcpy(dest, src, 9);
    printf("\nTest2\ninput size: 9\nRetour attendu : 123456789\nRetour fonction: %s", dest);
    printf("\n***************************************************************");
}

//Ex11::
int main()
{
    char str[] = {'G', 'O', 1, 6, 10, 16, 19, 27, 31, 54, 65, 127, 'P', 'A', 'S', 'S'};

    printf("---------------------------------------------------------------\n");
    printf("Renvoie en ascii hexadecimal les non printables characters\n**afin d'afficher resultat attendu, backslash sont des slash**\n");
    printf("Retour attendu :\nGO/01/06/0a/10/13/1b/1f6A PASS\nRetour fonction:\n");
    ft_putstr_non_printable(str);
    printf("\n***************************************************************");
}

#include <stdio.h>
