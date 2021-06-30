#ifndef D01_ZOMBIEHORDE_HPP
# define D01_ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*_zombies;
	int		_num;
public:
	ZombieHorde(int N);
	~ZombieHorde();

	std::string random_str(int length) const;
	void 		announce(void);
};

#endif //D01_ZOMBIEHORDE_HPP
