# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dangtran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 18:36:21 by dangtran          #+#    #+#              #
#    Updated: 2024/11/06 19:02:27 by dangtran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

FLAGS= -Wall -Wextra -Werror

OUTPUT= ft_display_file

SRC= ft_display_file.c

SRC_OBJ= ${SRC:.c=.o}

all: ${OUTPUT}

${OUTPUT} : ${SRC_OBJ}

clean :
	rm -f ${SRC_OBJ}

fclean : clean
	rm -f ${OUTPUT}

re : fclean all
	
