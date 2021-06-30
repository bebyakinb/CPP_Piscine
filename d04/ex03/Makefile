NAME = test

C_SRC = AMateria.cpp \
		Character.cpp \
        MateriaSource.cpp \
		Ice.cpp \
		Cure.cpp

H_SRC = $(C_SRC:.cpp=.hpp)
H_SRC += ICharacter.hpp
O_SRC = $(C_SRC:.cpp=.o)
O_SRC += main.o

FLAGS = -std=c++98 -Wall -Wextra -Werror -g

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
