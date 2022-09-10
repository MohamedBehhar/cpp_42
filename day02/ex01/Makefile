# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/10 12:34:28 by mbehhar           #+#    #+#              #
#    Updated: 2022/09/10 12:34:29 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME		=	fixed

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	main.cpp \
				Fixed.cpp

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