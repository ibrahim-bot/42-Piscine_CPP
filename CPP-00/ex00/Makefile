# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:13:30 by ichougra          #+#    #+#              #
#    Updated: 2021/03/15 12:32:32 by ichougra         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC		=	clang++

NAME	=	megaphone

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++11

SRCS	=	megaphone.cpp

OBJ	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)	
	@$(CC) -o $(NAME) $(OBJ)

%.o : %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re