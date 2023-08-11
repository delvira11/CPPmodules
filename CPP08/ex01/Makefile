CC= c++	
NAME= span
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Span.cpp
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