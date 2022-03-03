/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupallar <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:56:19 by jupallar          #+#    #+#             */
/*   Updated: 2022/02/28 10:58:16 by jupallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{ 
	char str[] = "Hello world!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
