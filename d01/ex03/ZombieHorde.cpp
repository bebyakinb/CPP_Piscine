#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
	int i;

	_num = N;
	_zombies = new Zombie[N];
	srand(time(NULL));
	i = 0;
	while (i < N)
	{
		_zombies[i].setName(ZombieHorde::random_str((rand() % 5) + 5));
		i++;
	}
	return;
}

ZombieHorde::~ZombieHorde(){
	delete [] _zombies;
	return;
}

void ZombieHorde::announce(void){
	int i;

	i = 0;
	while (i < _num)
	{
		_zombies[i].announce();
		i++;
	}
}

std::string ZombieHorde::random_str(int length) const{
	int					i;
	std::string			str;
	static const char	alphanum[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (i < length){
		str += alphanum[rand() % (sizeof(alphanum) - 1)];
		i++;
	}

	return str;
}
