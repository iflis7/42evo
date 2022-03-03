/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:50:54 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/02 14:52:47 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char dest[50] = "-Hell0 ";
	char src[5] = "World";
	printf("%s", ft_strncat(dest, src, 9));
	return (0);

}


