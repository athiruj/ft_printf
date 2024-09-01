/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:52:30 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 14:58:04 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	ft_putlhex(unsigned int nbr, char f)
{
	char	*hex;
	size_t	len;

	if (f == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	len = 0;
	if (nbr >= 16)
	{
		len += ft_putlhex(nbr / 16, f);
		len += ft_putlhex(nbr % 16, f);
	}
	else
		len += ft_putlchar(hex[nbr]);
	if (len < 0)
		return (-1);
	return (len);
}
