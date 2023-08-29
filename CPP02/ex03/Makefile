CC= c++
NAME= point
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Fixed.cpp Point.cpp bsp.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: