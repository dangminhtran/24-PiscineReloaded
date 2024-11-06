# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dangtran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 14:52:11 by dangtran          #+#    #+#              #
#    Updated: 2024/11/05 17:46:35 by dangtran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

CFLAGS= -Wall -Wextra -Werror -I${HEADER_DIR}

SRCS_DIR = 	./srcs/ft_putchar.c		\
			./srcs/ft_putstr.c		\
			./srcs/ft_swap.c		\
			./srcs/ft_strlen.c		\
			./srcs/ft_strcmp.c

SRCS_OBJ = ${SRCS_DIR:.c=.o}

HEADER_DIR=./includes/

OUTPUT= libft.a

all: ${OUTPUT}

${OUTPUT} : ${SRCS_OBJ}
	ar rc ${OUTPUT} ${SRCS_OBJ}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${OUTPUT}

re : fclean all
