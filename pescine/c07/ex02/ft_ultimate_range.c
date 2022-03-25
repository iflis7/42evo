/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bylkode <bylkode@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:58:01 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/16 11:09:04 by bylkode          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int  i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return NULL;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return i;
		
	// int		i;
	// int		*tab;
	// i = 0;
	// if (min >= max)
	// {
	// 	tab = NULL;
	// 	return (0);
	// }
	// tab = malloc(sizeof(int) * (max - min + 1));
	// while (min < max)
	// {
	// 	tab[i] = min;
	// 	min++;
	// 	i++;
	// }
	// if (tab == NULL)
	// 	return (-1);
	// *range = tab;
	// return (i);
}

int main()
{
	int min = 100;
	int max = 99;
	int *range[] = {};

	int target = ft_ultimate_range(range, min, max);

	printf("%d\n", target);

	return 0;
}