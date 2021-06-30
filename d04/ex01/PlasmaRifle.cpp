#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){
	//std::cout << "Default constructor of PlasmaRifle was called" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
	//std::cout << "Default destructor of PlasmaRifle was called" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) :
			AWeapon(other.getName(), other.getAPCost(), other.getDamage()){
	//std::cout << "Copy constructor of PlasmaRifle was called" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle&other){
	if (this != &other)
		AWeapon::operator = (other);
	return *this;
}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}