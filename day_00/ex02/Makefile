# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 16:30:16 by mbehhar           #+#    #+#              #
#    Updated: 2022/08/02 18:38:05 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= test

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			= 	./Account.cpp \
				./tests.cpp \
				# ./main.cpp \

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.hpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all