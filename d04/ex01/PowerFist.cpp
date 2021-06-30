#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){
	//std::cout << "Default constructor of PowerFist was called" << std::endl;
}

PowerFist::~PowerFist() {
	//std::cout << "Default destructor of PowerFist was called" << std::endl;
}

PowerFist::PowerFist(const PowerFist &other) :
			AWeapon(other.getName(), other.getAPCost(), other.getDamage()){
	//std::cout << "Copy constructor of PowerFist was called" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist &other){
	if (this != &other)
		AWeapon::operator = (other);
	return *this;
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}