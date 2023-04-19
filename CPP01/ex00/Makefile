CC= c++
NAME= BraiiiiiiinnnzzzZ
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= newZombie.cpp Zombie.cpp randomChump.cpp main.cpp
##OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


##clean:
##	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: