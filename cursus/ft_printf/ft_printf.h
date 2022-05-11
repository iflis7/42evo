/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaadi <hsaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:03:23 by hsaadi            #+#    #+#             */
/*   Updated: 2022/05/05 07:50:31 by hsaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* INCLUDES */

# include <stdarg.h>
# include <unistd.h>

/* PROTOTYPES */

int		ft_printf(const char *fmt, ...);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putuns(unsigned int nb, char base, int *len);
void	ft_putchar(char c, int *len);
int		ft_strlen(char *str);
void	ft_putptr(unsigned long int nb, int *len);

#endif