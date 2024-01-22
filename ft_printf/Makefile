# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:04:11 by yeparra-          #+#    #+#              #
#    Updated: 2023/12/11 15:37:40 by yeparra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_printf.c \
		print_char.c \
		ft_printstr.c \
		print_digits.c \
		print_u.c \
		ft_print_x.c \
		print_point.c \
		ft_putchar.c \
		ft_strlen.c \

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = libftprintf.a

OBJ = $(SRC:.c=.o)

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		
re: fclean all

.PHONY: clean fclean re