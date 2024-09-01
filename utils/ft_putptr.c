/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:15:03 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 15:11:36 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_putptr(unsigned long nbr)
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
