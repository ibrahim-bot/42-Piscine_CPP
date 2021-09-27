# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:34:22 by ibrahim           #+#    #+#              #
#    Updated: 2021/09/21 15:35:33 by ibrahim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++

NAME	=	Zombie

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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