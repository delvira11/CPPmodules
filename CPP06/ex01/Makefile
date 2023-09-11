CC= c++
NAME= serializer
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Serializer.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: