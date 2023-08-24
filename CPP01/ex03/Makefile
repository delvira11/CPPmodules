CC= c++
NAME= weapons
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


##clean:
##	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: