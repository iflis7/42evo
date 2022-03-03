/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupallar <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:41:09 by jupallar          #+#    #+#             */
/*   Updated: 2022/02/28 10:55:28 by jupallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	int i;
	int j;
	int *a;
	int *b;

	i = 10;
	j = 5;
	*a = &j;
	*b = &b;

	printf("%d /", i);
	printf("%d\n", j);

	ft_ultimate_div_mod(a, b);
	printf("div (*a) = %d\n", *a);
	printf("mod (*a) = %d", *b); 
}
