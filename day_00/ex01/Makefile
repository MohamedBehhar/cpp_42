NAME		= contact

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror  -std=c++98


SRC			= 	./Contact.cpp \
				./PhoneBook.cpp \
				./main.cpp

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.h
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