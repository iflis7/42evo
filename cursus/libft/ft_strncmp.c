/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:53:30 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/09 11:14:43 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s10;
	unsigned char	*s20;

	s10 = (unsigned char *)s1;
	s20 = (unsigned char *)s2;
	while ((*s10 || *s20) && n--)
		if (*s10++ != *s20++ && (*s1 != '\0' || *s2 != '\0'))
			return (*(--s10) - *(--s20));
	return (0);
}

// int	main(void)
// {
// 	const char *s1 = "Stuff .";
// 	const char *s2 = "Stu";

// 	printf("res: %i", ft_strncmp(s1, s2, 5));
// }