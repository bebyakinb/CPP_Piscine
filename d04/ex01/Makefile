NAME = test

C_SRC = AWeapon.cpp \
		Character.cpp \
		Enemy.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		RadScorpion.cpp \
		SuperMutant.cpp \
		SuperPowerFist.cpp \
		SmallScorpion.cpp 

H_SRC = $(C_SRC:.cpp=.hpp)
O_SRC = $(C_SRC:.cpp=.o)
O_SRC += main.o

FLAGS = -std=c++98 -Wall -Wextra -Werror

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
