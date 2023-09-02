CC= c++
NAME= interface
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: