/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:45:25 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/09 19:40:26 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	count;

	count = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[count] += min;
		count++;
		min++;
	}
	return (tab);
}
