CC= c++
NAME= diamondTrap
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: