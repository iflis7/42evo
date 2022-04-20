/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:46:40 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/20 09:45:32 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* inserting a new node in the begining of the list */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
}
