/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:56:41 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/09 19:03:43 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main()
{
	printf("%d\n", ft_recursive_power(1, 6));
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(-1, 2));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(0, 0));
}
