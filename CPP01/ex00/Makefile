CC= c++
NAME= BraiiiiiiinnnzzzZ
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= newZombie.cpp Zombie.cpp randomChump.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: