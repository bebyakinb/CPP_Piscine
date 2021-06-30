#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void){
	ZombieHorde *horde1 = new ZombieHorde(5);
	horde1->announce();
	delete horde1;
	std::cin.ignore();
	return (0);
}