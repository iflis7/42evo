/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:42:03 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/02 12:11:35 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char *s1 = "-Hell0 world";
	char *s2 = "-Hello World";
	printf("%d", ft_strncmp(s1, s2, 5));
	return (0);

}

