# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ancoulon <ancoulon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/06 10:28:58 by ancoulon          #+#    #+#              #
#    Updated: 2020/02/05 05:05:04 by ancoulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

HEADER		= libft.h

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c     \
			  ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c    \
			  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
			  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c  \
			  ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c       \
			  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c      \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c    \
			  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c          \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c       \
			  ft_lstmap.c ft_strndup.c ft_strlcat.c ft_strinc.c ft_isupper.c   \
			  ft_islower.c ft_strcat.c ft_gnl.c

OBJS		= ${SRCS:.c=.o}

CC			= gcc

AR			= ar rc

RM			= rm -f

NORM		= norminette

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $^ -o $@

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
			${RM} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

norm:		
			${NORM} ${HEADER} ${SRCS}

.PHONY:		all clean fclean re norm
