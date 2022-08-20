# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 17:04:46 by mbehhar           #+#    #+#              #
#    Updated: 2022/08/20 17:04:47 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			=	Zombie.cpp     	\
				zombieHorde.cpp \
				main.cpp 

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.hpp *.h
	$(CXX) $(CXXFLAGS)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all