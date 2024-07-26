/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 06:03:59 by josmanov          #+#    #+#             */
/*   Updated: 2024/07/26 16:57:33 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	handle_int_min(int *n)
{
	if (write(1, "-", 1) == -1)
		return (-1);
	if (write(1, "2", 1) == -1)
		return (-1);
	*n = 147483648;
	return (2);
}

static int	print_number(int n)
{
	char	c[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		return (1);
	}
	while (n > 0)
	{
		c[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
	{
		if (write(1, &c[--i], 1) == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += handle_int_min(&n);
	else if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
		n = -n;
	}
	count += print_number(n);
	return (count);
}
