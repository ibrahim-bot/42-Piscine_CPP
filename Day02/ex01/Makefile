# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 13:43:18 by ibrahim           #+#    #+#              #
#    Updated: 2021/09/23 13:45:36 by ibrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++

NAME	=	Fixed

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp Fixed.cpp

OBJ	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)	
	$(CC) -o $(NAME) $(OBJ)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re