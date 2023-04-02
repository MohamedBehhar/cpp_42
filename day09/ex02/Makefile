NAME		=	PmergeMe

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	PmergeMe.cpp


OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp PmergeMe.hpp main.cpp
	$(CXX)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) main.cpp  -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all