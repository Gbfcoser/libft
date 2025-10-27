# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 18:09:38 by giborges          #+#    #+#              #
#    Updated: 2025/10/27 11:53:05 by giborges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_bzero.c srcs/ft_memset.c srcs/ft_atoi.c srcs/ft_calloc.c srcs/ft_isalnum.c srcs/ft_itoa.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memcpy.c srcs/ft_strchr.c srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strjoin.c srcs/ft_strlcat.c srcs/ft_strlcpy.c srcs/ft_memmove.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) $(TESTS) -c $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)                                                                                                                                                                                                   
	gcc -nostartfiles -shared -o libft.so $(OBJ) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
