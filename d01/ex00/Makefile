NAME = test

C_SRC = Pony.cpp \
		main.cpp
O_SRC = $(C_SRC:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

.PHONY: all clean fclean re debug

all: $(NAME)

$(NAME): Pony.hpp $(O_SRC)
	clang++ -o $(NAME) $(FLAGS) $(O_SRC)

%.o: %.cpp Pony.hpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f $(O_SRC)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
