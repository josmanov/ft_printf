/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:40:23 by josmanov          #+#    #+#             */
/*   Updated: 2024/07/09 11:06:12 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

char	*ft_itoa_base(unsigned long number, int base)
{
	char			*result;
	char			*chars;
	int				length;
	unsigned long	temp;

	chars = "0123456789abcdef";
	length = 0;
	temp = number;
	if (number == 0)
		return (ft_strdup("0"));
	while (temp > 0)
	{
		temp /= base;
		length++;
	}
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
	while (number > 0)
	{
		result[--length] = chars[number % base];
		number /= base;
	}
	return (result);
}
