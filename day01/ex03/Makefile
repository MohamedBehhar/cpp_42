# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 17:04:21 by mbehhar           #+#    #+#              #
#    Updated: 2022/08/21 18:32:47 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	weapon

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp

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