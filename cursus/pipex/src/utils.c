/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:35 by hsaadi            #+#    #+#             */
/*   Updated: 2022/06/07 19:38:06 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void	message(char *error)
{
	write(2, "Error: ", 8);
	write(2, error, ft_strlen(error));
	write(2, "\n", 1);
}

void	msg_error(char *error)
{
	perror(error);
	exit(EXIT_FAILURE);
}
