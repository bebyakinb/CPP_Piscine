#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	Zombie *zombie;

	ZombieEvent event;

	zombie = event.newZombie("new_zombie");
	zombie->announce();
	delete zombie;
	event.setZombieType("new_zombie_type");
	zombie = event.newZombie("new_zombie");
	zombie->announce();
	delete zombie;
	event.randomChump();
	std::cin.ignore();
	return (0);
}