#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) :
		Enemy(other.getHP(), other.getType()){
	//std::cout << "Copy constructor of RadScorpion was called" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion&other){
	if (this != &other)
		Enemy::operator = (other);
	return *this;
}

void				RadScorpion::takeDamage(int damage){
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