CC= c++	
NAME= span
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Span.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: