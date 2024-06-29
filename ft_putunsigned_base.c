/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:24:33 by josmanov          #+#    #+#             */
/*   Updated: 2024/06/29 10:43:20 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsigned_base(unsigned int n, int base)
{
    int		count;
	char	*symbols;

    count = 0;
    symbols = "0123456789abcdef";
    if (n < (unsigned int)base)
	{
		return (ft_putchar(symbols[n]));
    }
    else
	{
		count += ft_putunsigned_base(n / base, base);
		count += ft_putunsigned_base(n % base, base);
    }
	return (count);
}
