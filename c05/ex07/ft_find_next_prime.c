/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:04:22 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/06 10:04:34 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_is_prime(int nb)
{
    int    result;

    result = 2;
    if (nb < 2)
        return (0);
    while (result <= nb / 2)
    {
        if (nb % result == 0)
            return (0);
        result++;
    }
    return (1);
}

int    ft_find_next_prime(int nb)
{
    while (nb >= 0 && !ft_is_prime(nb))
        nb++;
    return (nb);
}
