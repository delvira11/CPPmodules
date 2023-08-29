CC= c++	
NAME= RPN
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp RPN.cpp
#OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


#clean:
#	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: