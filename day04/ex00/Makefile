
NAME		=	Polymorphism

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -std=c++98

SRC			=	Animal.cpp \
				Cat.cpp  \
				Dog.cpp  \
				main.cpp 

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