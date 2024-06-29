/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:32:21 by josmanov          #+#    #+#             */
/*   Updated: 2024/06/29 10:45:19 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
/*	int		len;
	char	*str;

	str = NULL;
	len = 0;
	len = ft_printf("%s", str);
	ft_printf("%d", len);

	int	original;
	int	mine;

	original = 0;
	mine = 0;
*	while (original <= 10000 && mine <= 10000)
	{
		printf("Original: i = %i, d = %d\n", original, mine);
		ft_printf("Mine: i = %i, d = %d\n", original, mine);
		original += 10;
		mine += 10;
		if (original != mine)
		{
			ft_printf("mismatch found:\n Original: i = %i, d = %d\n Mine: i = %i, d = %d\n", original, original, mine, mine);
			return (0);
		}
	}
*/
	unsigned int u = "-4294967295";
	printf("%u\n", u);
	ft_printf("%u\n", u);
}
