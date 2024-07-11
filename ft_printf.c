/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:07:57 by josmanov          #+#    #+#             */
/*   Updated: 2024/07/11 11:25:14 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_format(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr_base(va_arg(ap, int), 10, format);
	else if (format == 'u')
		count += ft_putunsigned_base(va_arg(ap, unsigned int), 10);
	else if (format == 'x' || format == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 16, format);
	else if (format == 'p')
		count += ft_putpointer(va_arg(ap, void *));
	else
	{
		count += write(1, &format, 1);
		format++;
	}
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
		{
			len += print_format(*(++format), ap);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (len);
}
