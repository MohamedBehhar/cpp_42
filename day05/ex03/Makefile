NAME		=	bureaucrat

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC			=	Bureaucrat.cpp  \
                main.cpp  \
				Form.cpp \
				PresidentialPardonForm.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				Intern.cpp

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.hpp 
	$(CXX) $(CXXFLAGS)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ) *_shrubbery

fclean: clean
	rm -f $(NAME)

re: clean all