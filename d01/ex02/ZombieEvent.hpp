//
// Created by Endell Noelia on 2/5/21.
//

#ifndef D01_ZOMBIEEVENT_HPP
# define D01_ZOMBIEEVENT_HPP
# include <cstdlib>
# include <stdlib.h>
# include <ctime>
# include "Zombie.hpp"


class ZombieEvent{
private:
	std::string	_zombieType;
public:
	ZombieEvent();
	~ZombieEvent();

	void				setZombieType(const std::string &zombieType);
	const std::string	&getZombieType() const;
	Zombie*				newZombie(std::string name) const;
	void				randomChump() const;
	std::string 		random_str(int length) const;
};


#endif //D01_ZOMBIEEVENT_HPP
