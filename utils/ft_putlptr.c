/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:02:48 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 14:55:33 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putlptr(uintptr_t ptr)
{
	size_t	len;

	if (!ptr)
		return (ft_putnull('p'));
	len = 0;
	len += ft_putlstr("0x");
	len += ft_putptr(ptr);
	if (len < 0)
		return (-1);
	return (len);
}
