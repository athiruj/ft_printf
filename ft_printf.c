/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:00:04 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 16:06:31 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
