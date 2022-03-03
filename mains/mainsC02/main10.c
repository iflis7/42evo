/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:30:59 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/01 17:31:51 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

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
