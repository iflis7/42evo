/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 10:44:02 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/13 10:57:55 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	result;

	result = 2;
	if (nb < 2)
		return (0);
	while (result <= nb / 2)
	{
		if (nb % result == 0)
			return (0);
		result++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb >= 0 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
