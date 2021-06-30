#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name),
														  _weapon(weapon){
	return;
}

HumanA::~HumanA(){
	return;
}

void HumanA::attack(void){
	std::cout << _name << " attacks with his " << _weapon.getType() <<
			  std::endl;
}

