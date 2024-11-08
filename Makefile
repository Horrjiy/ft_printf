# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 00:44:19 by mpoplow           #+#    #+#              #
#    Updated: 2024/11/08 22:36:15 by mpoplow          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_printf.c convfound.c convfoundhex.c ft_putnbr_hex.c ft_putnbr_hexc.c ft_putnbr_address.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	cd libft && make all
	cd ../
	ar rcs $(NAME) $(OFILES)
	ar -x libft/libft.a
	ar rcs $(NAME) $(OFILES) *.o


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