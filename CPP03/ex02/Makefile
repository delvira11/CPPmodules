CC= c++
NAME= flagTrap
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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