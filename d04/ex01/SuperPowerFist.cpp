#include "SuperPowerFist.hpp"

SuperPowerFist::SuperPowerFist() : AWeapon("Super Power Fist", 12, 60){
	//std::cout << "Default constructor of SuperPowerFist was called" << std::endl;
}

SuperPowerFist::~SuperPowerFist() {
	//std::cout << "Default destructor of SuperPowerFist was called" << std::endl;
}

SuperPowerFist::SuperPowerFist(const SuperPowerFist &other) :
			AWeapon(other.getName(), other.getAPCost(), other.getDamage()){
	//std::cout << "Copy constructor of SuperPowerFist was called" << std::endl;
}

SuperPowerFist &SuperPowerFist::operator=(const SuperPowerFist &other){
	if (this != &other)
		AWeapon::operator = (other);
	return *this;
}

void SuperPowerFist::attack() const{
	std::cout << "* pschhhhhhhhhhhh... SBAAAAAAAM! *" << std::endl;
}