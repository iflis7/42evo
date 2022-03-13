/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:38:41 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/09 18:43:02 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_iterative_power(int nb, int power);

int	main()
{
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 10));
	printf("%d\n", ft_iterative_power(6, 2));
	printf("%d\n", ft_iterative_power(-1, 1));
	printf("%d\n", ft_iterative_power(1, 6));
}
