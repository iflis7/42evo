/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:50:02 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/02 13:54:24 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char dest[50] = "-Hell0 ";
	char src[5] = "World";
	printf("%s", ft_strcat(dest, src));
	return (0);

}


