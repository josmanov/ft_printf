/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:18:32 by josmanov          #+#    #+#             */
/*   Updated: 2024/07/11 08:18:05 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	unsigned long	address;
	char			*hex_string;
	int				length;

	if (ptr == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	address = (unsigned long)ptr;
	hex_string = ft_itoa_base(address, 16);
	if (hex_string == NULL)
		return (0);
	ft_putstr("0x");
	ft_putstr(hex_string);
	length = 2 + ft_strlen(hex_string);
	free(hex_string);
	return (length);
}
