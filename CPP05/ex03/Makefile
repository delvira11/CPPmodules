CC= c++
NAME= intern
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: