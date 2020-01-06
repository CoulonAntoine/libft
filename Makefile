# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/06 10:28:58 by ancoulon          #+#    #+#              #
#    Updated: 2020/01/06 11:38:27 by ancoulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_memset.c

OBJS		= ${SRCS:.c.o}

CC			= gcc

CFLAGS		= -Wall -Wextra - Werror

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${OBJS} ${NAME}

.PHONY:		all
