/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:56:03 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 15:09:31 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const	char *format, ...);

int		ft_putnull(const char f);
int		ft_putlchar(const char c);
int		ft_putlstr(const char *s);
int		ft_putlnbr(int nbr);
int		ft_putlunbr(unsigned int nbr);
int		ft_putlhex(unsigned int nbr, char f);
int		ft_putlptr(unsigned long ptr);

size_t	ft_nbrlen(long nbr);
size_t	ft_putptr(unsigned long nbr);

#endif
