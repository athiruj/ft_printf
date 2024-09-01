/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:33:18 by athi              #+#    #+#             */
/*   Updated: 2024/08/31 15:28:45 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr(int n);

int	ft_putlnbr(const int nbr)
{
	if (!nbr)
		return (ft_putnull('d'));
	ft_putnbr(nbr);
	return (ft_nbrlen(nbr));
}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		ft_putlstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putlchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putlchar(n % 10 + '0');
}
