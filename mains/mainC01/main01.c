/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupallar <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:36:57 by jupallar          #+#    #+#             */
/*   Updated: 2022/02/27 19:43:42 by jupallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	int *********p_nbr1;
	int ********p_nbr2;
	int *******p_nbr3;
	int ******p_nrb4;
	int *****p_nbr5;
	int ****p_nbr6;
	int ***p_nbr7;
	int **p_nrb8;
	int *p_nrb9;
	int nbr;

	nbr = 18;
	p_nbr9 = &nrb;
	p_nbr8 = &p_nrb9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr1 = &p_nbr2;

	prinf("%d\n", nbr);
	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);

}
