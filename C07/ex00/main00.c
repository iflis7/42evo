/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:45:24 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/15 11:51:16 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strdup(char *src);
int main()
{
    char *source = "";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char *target = ft_strdup(source);

    printf("%s", target);
    return 0;
}
