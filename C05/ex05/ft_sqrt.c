/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:30:16 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/13 10:41:50 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	if (nb > 0)
	{
		while (count * count <= nb)
		{
			if (count * count == nb)
				return (count);
			else if (count >= 46341)
				return (0);
			count++;
		}
	}
	return (0);
}
