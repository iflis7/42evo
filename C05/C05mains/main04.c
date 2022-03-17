/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:06:17 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/09 19:08:00 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);
int	main()
{
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(10));

}
