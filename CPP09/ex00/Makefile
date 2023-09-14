CC= c++	
NAME= btc
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp BitcoinExchange.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)



fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: