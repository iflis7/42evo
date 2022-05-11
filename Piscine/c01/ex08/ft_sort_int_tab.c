/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:11:36 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 10:20:37 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	check;
	int	box;

	counter = 0;
	while (counter < size)
	{
		check = 0;
		while (check < (size - 1))
		{
			if (tab[check] > tab[check + 1])
			{
				box = tab[check];
				tab[check] = tab[check + 1];
				tab[check + 1] = box;
			}
			check++;
		}
		counter++;
	}
}
