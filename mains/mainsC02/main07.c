/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:47:04 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/01 16:52:41 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
    char tab[] = "azu1 a Tarwa ilelliyen 2972";

    printf("%s", ft_strupcase(tab));
}
