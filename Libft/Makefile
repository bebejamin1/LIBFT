# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 08:27:15 by bbeaurai          #+#    #+#              #
#    Updated: 2025/10/31 10:39:01 by bbeaurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \

BONUS = ft_lstnew_bonus.c

OBJ_SRC = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

all : $(NAME)

bonus : $(NAME) $(OBJ_BONUS)

$(NAME) :
	cc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ_SRC)

clean:
	rm -f $(OBJ_SRC) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re : fclean all