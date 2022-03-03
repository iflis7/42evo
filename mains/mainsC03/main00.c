/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:28:42 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/02 11:32:22 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int	main()
{
	char *s1 = "-Hell0 world";
	char *s2 = "-Hello World";
	printf("%d", ft_strcmp(s1, s2));
	return (0);

}
