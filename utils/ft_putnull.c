/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:49:14 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 13:25:46 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnull(const char f)
{
	if (f == 'p')
		return (ft_putlstr("(nil)"));
	if (f == 's')
		return (ft_putlstr("(null)"));
	if (f == 'd' || f == 'x' || f == 'X')
		return (ft_putlchar('0'));
	else
		return (1);
}
