CC= c++
NAME= zombieHorde
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= Zombie.cpp zombieHorde.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: