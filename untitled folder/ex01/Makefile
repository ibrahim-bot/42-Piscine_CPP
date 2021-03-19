# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 12:32:40 by ichougra          #+#    #+#              #
#    Updated: 2021/03/17 12:13:27 by ichougra         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC		=	clang++

NAME	=	Contact

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	phonebook.cpp Contact.cpp\

OBJ	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)	
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re