/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 22:19:44 by athi              #+#    #+#             */
/*   Updated: 2024/08/31 10:56:19 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putlstr(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (ft_putnull());
	while (s[len])
		if (write(1, &s[len++], 1) == -1)
			return (-1);
	return (len);
}
