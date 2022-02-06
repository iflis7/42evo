/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:50:54 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 09:53:46 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = 1;
	if (nb <= 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 1)
		count *= nb--;
	return (count);
}
