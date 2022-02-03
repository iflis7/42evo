/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:11:06 by hsaadi            #+#    #+#             */
/*   Updated: 2022/01/28 12:39:32 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	counter;

    counter = 0;
	while (tab[counter] && counter < size / 2)
	{
		box = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = box;
        counter++;
	}
}
