#ifndef D01_HUMANA_HPP
# define D01_HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon		&_weapon;
public:
	HumanA(const std::string &name, Weapon &weapon);
	virtual ~HumanA();

	void 	attack(void);
};


#endif //D01_HUMANA_HPP
