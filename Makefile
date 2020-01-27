# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/26 22:28:52 by alopez-g          #+#    #+#              #
#    Updated: 2020/01/27 14:44:37 by alopez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_calloc.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strdup.c ft_strlcat.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_strjoin.c ft_strmapi.c ft_substr.c ft_putnbr_fd.c ft_split.c ft_strtrim.c ft_itoa.c ft_tolower.c ft_strlcpy.c
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
.c.o:
			gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}
$(NAME):	${OBJS}
			ar -rc ${NAME} ${OBJS}
			ranlib ${NAME}
all:		${NAME}
clean:
			rm -f ${OBJS}
fclean:		clean
			rm -f ${NAME}
re:			fclean all
.PHONY:		all clean fclean re
