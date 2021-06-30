#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
	_zombieType = "default";
	return;
}

ZombieEvent::~ZombieEvent(){
	return;
}

Zombie *ZombieEvent::newZombie(std::string name) const{
	Zombie *new_zombie = new Zombie;
	new_zombie->setName(name);
	new_zombie->setType(_zombieType);
	return new_zombie;
}

void ZombieEvent::setZombieType(const std::string &zombieType){
	_zombieType = zombieType;
}

const std::string &ZombieEvent::getZombieType() const{
	return _zombieType;
}

void	ZombieEvent::randomChump() const{
	Zombie chump;

	srand(time(NULL));
	chump.setName(ZombieEvent::random_str((rand() % 5) + 5));
	chump.setType(_zombieType);
	chump.announce();
	return;
}

std::string ZombieEvent::random_str(int length) const{
	int					i;
	std::string			str;
	static const char	alphanum[] =
							"0123456789"
							"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
							"abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (i < length)
	{
		str += alphanum[rand() % (sizeof(alphanum) - 1)];
		i++;
	}

	return str;
}
