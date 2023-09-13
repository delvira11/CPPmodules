CC= c++
NAME= base
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp A.cpp B.cpp C.cpp Base.cpp


all: $(NAME)


$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


fclean:
	rm -rf $(NAME)


re: fclean all

.PHONY: