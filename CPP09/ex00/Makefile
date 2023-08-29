CC= c++	
NAME= btc
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp BitcoinExchange.cpp
OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: