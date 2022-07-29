# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 12:42:13 by mbehhar           #+#    #+#              #
#    Updated: 2022/07/29 16:32:05 by mbehhar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			= 	./megaphone.cpp

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp
	@$(CC) $(CPPFLAGS)  -c $< -o $@
	@printf "\033[0;32m\e[1m%s\033[0m\n" "Compiling..."

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean all