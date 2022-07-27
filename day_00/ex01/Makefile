NAME		= contact

CC			=	c++

CPPFLAGS	=	-Wall -Wextra   -std=c++98


SRC			= 	./Contact.cpp \
				./PhoneBook.cpp \
				./main.cpp

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.hpp
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