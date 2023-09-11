CC= c++
NAME= form
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Bureaucrat.cpp Form.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: