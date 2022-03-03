/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:35:03 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/03 12:57:16 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main()
{
	char	dest[60] = "Azuuuul";
	printf("%lu\n", strlcat(dest, "fell-awen", 6));
	printf("%d", ft_strlcat(dest, "fell-awen", 6));
	return (0);
}
