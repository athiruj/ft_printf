/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:15:03 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 14:53:09 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_putptr(uintptr_t nbr)
{
	char	*hex;
	size_t	len;

	hex = "0123456789abcdef";
	len = 0;
	if (nbr >= 16)
	{
		len += ft_putptr(nbr / 16);
		len += ft_putptr(nbr % 16);
	}
	else
		len += ft_putlchar(hex[nbr]);
	if (len < 0)
		return (-1);

	return (len);
}
