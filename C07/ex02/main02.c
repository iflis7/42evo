/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 16:44:05 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/15 16:59:16 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int		*range;
	int		i;
    int min = 1;
    int max = 5;
    
	i = 0;
	printf("Min: %d, Max: %d, return : %d\n", min, max, ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
	    printf("> %d\n", range[i]);
		i++;
	}
	return (0);
}

