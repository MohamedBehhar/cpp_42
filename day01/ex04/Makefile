# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 17:18:05 by mbehhar           #+#    #+#              #
#    Updated: 2022/08/23 17:18:06 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	replace

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			=	main.cpp \
				utils.cpp \

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