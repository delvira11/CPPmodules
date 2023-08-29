CC= c++
NAME= cast
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp ScalarConverter.cpp Fixed.cpp
##OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


#clean:
#	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: