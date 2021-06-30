#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant"){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout <<  "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) :
		Enemy(other.getHP(), other.getType()){
	//std::cout << "Copy constructor of SuperMutant was called" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant&other){
	if (this != &other)
		Enemy::operator = (other);
	return *this;
}

void				SuperMutant::takeDamage(int damage){
	damage = damage - 3;
	if (damage > getHP())
	{
		setHP(0);
	}
	else if (damage < 0)
		return;
	else
		setHP(getHP() -  damage);
	//std::cout << getType() << " takes " << damage
	//		  << " points of damage. current HP= " << getHP()
	//		  << std::endl;
}
