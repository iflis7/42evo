/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:50:54 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/08 16:24:51 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	count;

	count = 1;
	n = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (count <= nb)
	{
		n *= count;
		count++;
	}
	return (n);
}
