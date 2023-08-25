CC= c++
NAME= weapons
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: