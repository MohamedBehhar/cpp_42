# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 09:45:16 by mbehhar           #+#    #+#              #
#    Updated: 2022/10/22 09:45:17 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	serialize

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	                main.cpp  \
Serialization.cpp  \


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