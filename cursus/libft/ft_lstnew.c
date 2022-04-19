/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:09:30 by hsaadi            #+#    #+#             */
/*   Updated: 2022/04/19 16:43:49 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = NULL;
	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->next = NULL;
	new_list->content = content;
	return (new_list);
}
