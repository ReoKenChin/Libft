# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcherki <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 12:07:42 by mcherki           #+#    #+#              #
#    Updated: 2021/12/05 15:24:48 by mcherki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

AR      = ar rcs

NAME = libft.a

SRC	= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
		ft_striteri.c

OBJ	= $(SRC:.c=.o)

%.o:%.c 
	@$(CC) $(CFLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $?

clean:
	@rm -rf ${OBJ}

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY : re clean fclean all
