CC= c++
NAME= serializer
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Serializer.cpp
##OBJ=$(SRC:.c=.o)


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


#clean:
#	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: