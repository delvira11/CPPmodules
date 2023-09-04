CC= c++
NAME= abstractclass
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: