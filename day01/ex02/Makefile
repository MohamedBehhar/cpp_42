# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 17:04:42 by mbehhar           #+#    #+#              #
#    Updated: 2022/08/20 17:04:43 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	ref

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp

OBJ			=	$(SRC:%.cpp=%.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS)  -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all