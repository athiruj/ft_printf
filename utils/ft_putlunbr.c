/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlunbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:56:11 by athi              #+#    #+#             */
/*   Updated: 2024/08/31 13:08:22 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putunbr(unsigned int n);

int	ft_putlunbr(unsigned int nbr)
{
	if (!nbr)
		return (ft_putnull('d'));
	ft_putunbr(nbr);
	return (ft_nbrlen(nbr));
}

void	ft_putunbr(unsigned int n)
{
	if (n < 0)
	{
		ft_putlchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putunbr(n / 10);
	ft_putlchar(n % 10 + '0');
}
