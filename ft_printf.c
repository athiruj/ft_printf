/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:00:04 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 14:56:01 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_format(va_list	*arg, const char f);

int	ft_printf(const	char *format, ...)
{
	int		byte;
	int		tmp;
	va_list	args;

	byte = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			tmp = ft_format(&args, *++format);
			if (tmp == -1)
				return (-1);
			byte += tmp;
			format++;
		}
		else
		{
			if (ft_putlchar(*format++) == -1)
				return (-1);
			byte++;
		}
	}
	va_end(args);
	return (byte);
}

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

