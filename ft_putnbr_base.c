/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 06:03:59 by josmanov          #+#    #+#             */
/*   Updated: 2024/07/11 08:21:16 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_base(long n, int base, const char format)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr_base(-n, base, format) + 1);
	}
	else if (n < base)
	{
		if (format == 'x' || format == 'd' || format == 'i' || format == 'u')
			return (ft_putchar(symbols[n]));
		else if (format == 'X')
			return (ft_putchar(ft_toupper(symbols[n])));
	}
	else
	{
		count += ft_putnbr_base(n / base, base, format);
		count += ft_putnbr_base(n % base, base, format);
	}
	return (count);
}
