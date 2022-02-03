/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 03:20:08 by hsaadi            #+#    #+#             */
/*   Updated: 2022/02/01 16:53:53 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	result1;
	unsigned char	result2;

	while (n-- > 0 && (*s1 || *s2))
	{
		result1 = *s1++;
		result2 = *s2++;
		if (result1 != result2)
			return (result1 - result2);
	}
	return (0);
}
