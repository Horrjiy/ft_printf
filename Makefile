# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoplow <mpoplow@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 00:44:19 by mpoplow           #+#    #+#              #
#    Updated: 2024/11/08 12:40:26 by mpoplow          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = mainprint.c ft_printf.c convfound.c convfoundhex.c

OFILES = $(CFILES:.c =.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OFILES)
	cd libft && make all
	cd ../
	ar rcs $(NAME) $(OFILES) 

clean:
	cd libft && make clean
	cd ../
	rm -f $(OFILES)

fclean: clean
	cd libft && make fclean
	cd ../
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re