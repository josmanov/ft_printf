/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:18:32 by josmanov          #+#    #+#             */
/*   Updated: 2024/07/26 16:52:45 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	unsigned long	address;
	int				length;

	if (ptr == NULL)
	{
		if (ft_putstr("(nil)") == -1)
			return (-1);
		return (5);
	}
	address = (unsigned long)ptr;
	if (ft_putstr("0x") == -1)
		return (-1);
	length = 2 + ft_puthex(address, 'x');
	if (length == -1)
		return (-1);
	return (length);
}
