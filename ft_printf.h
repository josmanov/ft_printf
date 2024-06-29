/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 05:08:35 by josmanov          #+#    #+#             */
/*   Updated: 2024/06/29 06:13:52 by josmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr_base(long n, int base, const char c);
int	ft_putunsigned_base(unsigned int n, int base);

#endif
