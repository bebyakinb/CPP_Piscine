#include "SmallScorpion.hpp"

SmallScorpion::SmallScorpion() : Enemy(80, "SmallScorpion"){
	std::cout << "* click click *" << std::endl;
}

SmallScorpion::~SmallScorpion() {
	std::cout << "* sprotch *" << std::endl;
}

SmallScorpion::SmallScorpion(const SmallScorpion &other) :
		Enemy(other.getHP(), other.getType()){
	//std::cout << "Copy constructor of SmallScorpion was called" << std::endl;
}

SmallScorpion &SmallScorpion::operator=(const SmallScorpion&other){
	if (this != &other)
		Enemy::operator = (other);
	return *this;
}

void				SmallScorpion::takeDamage(int damage){
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