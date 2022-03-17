/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:30:53 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/09 18:33:21 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main()
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(9));
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(0));
}
