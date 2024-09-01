/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:05:44 by atkaewse          #+#    #+#             */
/*   Updated: 2024/09/01 16:06:14 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_format(va_list *arg, const char f)
{
	if (f == 'c')
		return (ft_putlchar(va_arg(*arg, int)));
	else if (f == 's')
		return (ft_putlstr(va_arg(*arg, char *)));
	else if (f == 'p')
		return (ft_putlptr(va_arg(*arg, unsigned long)));
	if (f == 'd' || f == 'i')
		return (ft_putlnbr(va_arg(*arg, int)));
	if (f == 'u')
		return (ft_putlunbr(va_arg(*arg, unsigned int)));
	if (f == 'x')
		return (ft_putlhex(va_arg(*arg, unsigned int), 'x'));
	if (f == 'X')
		return (ft_putlhex(va_arg(*arg, unsigned int), 'X'));
	if (f == '%')
		return (ft_putlchar('%'));
	return (-1);
}
