/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:58:01 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/09 12:26:17 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;

	count = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(*range) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[count] = min;
		count++;
		min++;
	}
	int i = 0;
	while (i < (max - min))
		{
			
		}
	return (count);
}

int main()
{
	int min = 10;
	int max = 99;
	int *range[] = {};

	int target = ft_ultimate_range(range, min, max);

	printf("%d\n", target);

	return 0;
}