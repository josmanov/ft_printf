/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:07:57 by josmanov          #+#    #+#             */
/*   Updated: 2024/06/29 10:33:35 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_format(char format, va_list ap)
{
	int	count;

	count = 0;
		// Tested and works
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
		// Tested and works, needs to be malloced
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr_base(va_arg(ap, int), 10, format);
	else if (format == 'u')
		count += ft_putunsigned_base(va_arg(ap, unsigned int), 10);
	else if (format == 'x' || format == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 16, format);
	else
		count += write(1, &format, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
			len += print_format(*(++format), ap);
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (len);
}
