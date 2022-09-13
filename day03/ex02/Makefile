# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 16:57:48 by mbehhar           #+#    #+#              #
#    Updated: 2022/09/13 16:57:51 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ScavTrap

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.hpp 
	$(CXX) $(CXXFLAGS)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all