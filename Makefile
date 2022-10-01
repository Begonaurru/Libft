# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beurruel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 20:55:12 by beurruel          #+#    #+#              #
#    Updated: 2022/09/22 20:52:10 by beurruel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
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
