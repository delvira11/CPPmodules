CC= c++
NAME= Account
CFLAGS= -Wall -Wextra -std=c++98
SRC= Acount.cpp tests.cpp
#OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


##clean:
##	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: