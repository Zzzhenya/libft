# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 11:14:14 by sde-silv          #+#    #+#              #
#    Updated: 2023/05/31 12:56:31 by sde-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

SRC 	= 	ft_bzero.c \
			ft_isdigit.c \
			ft_putchar_fd.c \
			ft_strlcat.c \
			ft_substr.c \
			ft_calloc.c \
			ft_isprint.c \
		 	ft_putendl_fd.c \
			ft_strlcpy.c \
			ft_tolower.c \
			ft_isalnum.c \
			ft_memcpy.c \
			ft_putnbr_fd.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_isalpha.c \
			ft_memmove.c \
			ft_putstr_fd.c \
			ft_strncmp.c \
			ft_isascii.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strrchr.c 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re clean
