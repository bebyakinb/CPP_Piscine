NAME = test


H_SRC = easyfind.hpp
O_SRC = main.o

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re debug

all: $(NAME)

$(NAME): $(H_SRC) $(O_SRC)
	clang++ -o $(NAME) $(FLAGS) $(O_SRC)

%.o: %.cpp $(H_SRC)
	clang++ $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f $(O_SRC)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
