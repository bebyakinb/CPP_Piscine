#ifndef D01_HUMANB_HPP
# define D01_HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon		*_weapon;
public:
	HumanB(const std::string &name);
	~HumanB(void);

	void setWeapon(Weapon &weapon);

	void 	attack(void);
};


#endif //D01_HUMANB_HPP
