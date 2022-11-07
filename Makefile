# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Beurruel <beurruel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 21:32:10 by Beurruel          #+#    #+#              #
#    Updated: 2022/11/07 12:09:21 by Beurruel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strchr.c ft_strrchr.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_striteri.c ft_strtrim.c ft_strjoin.c
OBJECTS = $(SRCS:.c=.o)
 
CFLAGS = -Wall -Wextra -Werror
 
all: $(NAME)
 
$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
 
$(OBJECTS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)
 
clean:
	@rm -f $(OBJECTS)
 
fclean: clean
	@rm -f $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re
