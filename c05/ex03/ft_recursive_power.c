/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 09:57:57 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 09:58:26 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (n > n * nb) // <-- why this ?
		return (0);
	else if (power > 1)
		return (n * ft_recursive_power(n, power -1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (n);
}
