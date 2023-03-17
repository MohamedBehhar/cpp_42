NAME		=	btc

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	BitcoinExchange.cpp  


OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp BitcoinExchange.hpp
	$(CXX)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) main.cpp  -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all