# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 18:09:38 by giborges          #+#    #+#              #
#    Updated: 2025/11/03 17:38:37 by giborges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c ft_memset.c ft_atoi.c ft_calloc.c ft_isalnum.c ft_itoa.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_strchr.c ft_strdup.c ft_strlen.c ft_strjoin.c ft_strlcat.c \
ft_strlcpy.c ft_memmove.c ft_tolower.c ft_toupper.c ft_substr.c \
ft_strtrim.c ft_strncmp.c ft_strrchr.c ft_putstr_fd.c ft_putchar_fd.c \
ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_strnstr.c ft_striteri.c \
ft_putendl_fd.c \

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstsize.c ft_lstmap.c \

OBJ = $(SRC:.c=.o)

BOBJS = $(BSRC:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) $(TESTS) -c $< -o $@

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ) $(BOBJS)
	
fclean: clean
	rm -f $(NAME) .bonus

re: fclean all

bonus: .bonus

.bonus: $(NAME) $(BOBJS)
	$(AR) $(ARFLAGS) $(NAME) $(BOBJS)
	@touch .bonus
	
.PHONY: all clean fclean re bonus
