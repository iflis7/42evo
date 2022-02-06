/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:00:05 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 10:00:22 by hsaadi           ###   ########.fr       */
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
