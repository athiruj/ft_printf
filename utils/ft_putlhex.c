/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atkaewse <atkaewse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:52:30 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 15:11:21 by atkaewse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
