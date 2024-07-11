# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/29 05:51:31 by josmanov          #+#    #+#              #
#    Updated: 2024/07/09 11:10:37 by josmanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr_base.c \
		ft_putunsigned_base.c \
		ft_putpointer.c \
		ft_itoa_base.c \

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT = libft
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
				@make -C $(LIBFT)
				@cp libft/libft.a .
				@mv libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
		rm -f $(OBJS)
		@make clean -C $(LIBFT)

fclean: clean
		rm -f $(NAME)
		@make fclean -C $(LIBFT)

re: fclean all

.PHONY : all clean fclean re
