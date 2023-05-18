# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chbuerge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 10:34:54 by chbuerge          #+#    #+#              #
#    Updated: 2023/05/11 13:33:38 by chbuerge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		 		= 	cc
CFLAGS		 	=		-Wall -Wextra -Werror
NAME			= 		libft.a


SRCS	 =			ft_strncmp.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_putchar_fd.c \
				ft_putnbr_fd.c \
				ft_strchr.c \
				ft_tolower.c \
				ft_isalpha.c \
				ft_memset.c \
				ft_putendl_fd.c \
				ft_putstr_fd.c \
				ft_strlen.c \
				ft_strrchr.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_memcpy.c


OBJS	 = ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
					ar rcs ${NAME} ${OBJS}

.c.o:		${CC} ${CFLAGS} -c $< -o $@

clean:				
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re

