# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 00:44:19 by mpoplow           #+#    #+#              #
#    Updated: 2024/11/10 14:47:06 by mpoplow          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printf.c \
putstrchar_sc_perc.c \
putnbr_di.c putunbr_u.c \
puthex_lowx.c puthex_capx.c puthexaddress_p.c \


OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror


NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	cd libft && make all
	cd ../
	ar rcs $(NAME) $(OFILES)
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs $(NAME) $(OFILES)
	


clean:
	cd libft && make clean
	cd ../
	rm -f $(OFILES)

fclean:
	cd libft && make fclean
	cd ../
	rm -f $(OFILES)
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re

