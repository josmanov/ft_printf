# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josmanov <josmanov@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/29 05:51:31 by josmanov          #+#    #+#              #
#    Updated: 2024/07/26 19:11:04 by josmanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS =  src/ft_printf.c \
        src/ft_putchar.c \
        src/ft_putstr.c \
        src/ft_putnbr.c \
        src/ft_puthex.c \
        src/ft_putunsigned.c \
        src/ft_putpointer.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

LIBFT = libft
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -Iinclude

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re

