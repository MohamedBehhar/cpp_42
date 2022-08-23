# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 17:22:35 by mbehhar           #+#    #+#              #
#    Updated: 2022/08/23 18:36:53 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

CXX			=	c++

CXXFLAGS	=	 -std=c++98


SRC			=	main.cpp \
				Harl.cpp

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